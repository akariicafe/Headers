@class PHAServiceCancelableOperation, NSString, NSURL, PHPhotoLibrary, NSObject, PHAManager;
@protocol OS_os_log, OS_dispatch_queue;

@interface PHAWorker : NSObject <PHAWorkerConfiguration, PHAServiceOperationHandling, PHAJobTimeHandlerProtocol> {
    PHAManager *_photoAnalysisManager;
    NSObject<OS_dispatch_queue> *_userInitiatedRequestQueue;
    BOOL _shutdownHasBeenCalled;
}

@property (nonatomic, getter=isWarmedUp) BOOL warmedUp;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PHAManager *photoAnalysisManager;
@property (readonly) NSURL *persistentStorageDirectoryURL;
@property (readonly) BOOL isEnabled;
@property (readonly, getter=isQuiescent) BOOL quiescent;
@property (retain) PHAServiceCancelableOperation *currentOperation;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (short)workerType;
+ (BOOL)persistsState;
+ (long long)applicationDataFolderIdentifier;
+ (BOOL)runsExclusively;
+ (void)configureXPCConnection:(id)a0;
+ (id)persistentStorageDirectoryURLForPhotoLibrary:(id)a0;

- (void)startup;
- (void)handleOperation:(id)a0;
- (id)statusAsDictionary;
- (BOOL)startAnalysisJob:(id)a0 error:(id *)a1;
- (void)cooldown;
- (id)nextAdditionalJobWithScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (void)shutdown;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;
- (BOOL)stopAnalysisJob:(id)a0 error:(id *)a1;
- (void)warmupWithProgressBlock:(id /* block */)a0;
- (id)initWithPhotoAnalysisManager:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (void)assertUserInitiatedRequestQueue;
- (BOOL)canRunWhenGraphIsLoaded;
- (BOOL)completedJobTodayForKey:(id)a0;
- (BOOL)didExceedTimeInterval:(double)a0 forKey:(id)a1;
- (void)dispatchAsyncToUserInitiatedRequestQueue:(id /* block */)a0;
- (void)dispatchSyncToUserInitiatedRequestQueue:(id /* block */)a0;
- (id)libraryScopedWorkerPreferences;
- (id)libraryScopedWorkerPreferencesURL;
- (void)pingWorkerWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)setLastCompletedDate:(id)a0 andVersion:(unsigned long long)a1 forTaskName:(id)a2;
- (void)setLibraryScopedWorkerPreferencesValue:(id)a0 forKey:(id)a1;
- (void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)a0 keysToRemove:(id)a1;
- (unsigned long long)versionForTaskName:(id)a0;

@end
