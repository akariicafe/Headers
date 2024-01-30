@class PGManager, NSString, NSObject, NSMutableSet, PHAStorytellingOnDemandTaskHandler, PHAStorytellingClientRequestHandler;
@protocol PHATask, OS_os_log;

@interface PHAStorytellingWorker : PHAWorker <PHAStorytellingOnDemandTaskHandlerDelegate, PHAClientDispatcher> {
    PHAStorytellingClientRequestHandler *_graphClientHandler;
    PHAStorytellingOnDemandTaskHandler *_storytellingOnDemandTaskHandler;
    PGManager *_graphManager;
    id<PHATask> _taskToRun;
    NSMutableSet *_taskTracker;
    NSObject<OS_os_log> *_loggingConnection;
    unsigned long long _state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)onDemandTaskHandlerClass;
+ (short)workerType;
+ (Class)clientQueryHandlerClass;
+ (long long)applicationDataFolderIdentifier;

- (BOOL)isQuiescent;
- (id)loggingConnection;
- (void)cooldown;
- (void)photoLibraryDidChange:(id)a0;
- (BOOL)allowsForegroundTasks;
- (void)shutdown;
- (void)updateState:(unsigned long long)a0;
- (void)warmupWithProgressBlock:(id /* block */)a0;
- (void)onDemandTaskHandlerDidFinishOperation:(id)a0;
- (id)targetForInvocation:(id)a0 shouldBackgroundActivities:(BOOL *)a1;
- (id)nextAdditionalJobWithScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (void)onDemandTaskHandlerStartingOperation:(id)a0;
- (void).cxx_destruct;
- (id)statusAsDictionary;
- (BOOL)_shouldRunTaskWithName:(id)a0 period:(double)a1;
- (void)stopListeningToLibraryChanges;
- (void)startListeningToLibraryChanges;
- (id)tasksForScenario:(unsigned long long)a0;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (id)initWithPhotoAnalysisManager:(id)a0 dataLoader:(id)a1;
- (BOOL)shouldAllowBackgroundActivity;
- (unsigned long long)workerStateForScenario:(unsigned long long)a0;

@end
