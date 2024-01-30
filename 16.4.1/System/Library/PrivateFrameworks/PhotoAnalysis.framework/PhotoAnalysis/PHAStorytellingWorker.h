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

+ (short)workerType;
+ (Class)onDemandTaskHandlerClass;
+ (long long)applicationDataFolderIdentifier;
+ (Class)clientQueryHandlerClass;

- (BOOL)shouldAllowBackgroundActivity;
- (BOOL)allowsForegroundTasks;
- (id)statusAsDictionary;
- (id)loggingConnection;
- (void)cooldown;
- (void)onDemandTaskHandlerStartingOperation:(id)a0;
- (void)photoLibraryDidChange:(id)a0;
- (id)nextAdditionalJobWithScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (void)shutdown;
- (id)tasksForScenario:(unsigned long long)a0;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;
- (void)stopListeningToLibraryChanges;
- (void)updateState:(unsigned long long)a0;
- (void)warmupWithProgressBlock:(id /* block */)a0;
- (unsigned long long)workerStateForScenario:(unsigned long long)a0;
- (BOOL)_shouldRunTaskWithName:(id)a0 period:(double)a1 version:(unsigned long long)a2;
- (void)onDemandTaskHandlerDidFinishOperation:(id)a0;
- (id)initWithPhotoAnalysisManager:(id)a0;
- (id)targetForInvocation:(id)a0 shouldBackgroundActivities:(BOOL *)a1;
- (void)startListeningToLibraryChanges;
- (BOOL)isQuiescent;
- (void).cxx_destruct;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;

@end
