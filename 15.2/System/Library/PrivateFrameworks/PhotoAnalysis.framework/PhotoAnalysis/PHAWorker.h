@class PHAServiceCancelableOperation, NSString, PFSerialQueue, NSURL, PHPhotoLibrary, NSObject, PHAManager;
@protocol OS_os_log, PHAAssetResourceDataLoading;

@interface PHAWorker : NSObject <PHAWorkerConfiguration, PHAServiceOperationHandling, PHAJobTimeHandlerProtocol> {
    PHAManager *_photoAnalysisManager;
    PFSerialQueue *_userInitiatedRequestQueue;
    BOOL _shutdownHasBeenCalled;
}

@property (nonatomic, getter=isWarmedUp) BOOL warmedUp;
@property (retain, nonatomic) id<PHAAssetResourceDataLoading> dataLoader;
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

+ (BOOL)persistsState;
+ (BOOL)runsExclusively;
+ (short)workerType;
+ (long long)applicationDataFolderIdentifier;
+ (void)configureXPCConnection:(id)a0;
+ (id)persistentStorageDirectoryURLForPhotoLibrary:(id)a0;

- (void)handleOperation:(id)a0;
- (void)cooldown;
- (void)shutdown;
- (void)startup;
- (void)warmupWithProgressBlock:(id /* block */)a0;
- (id)nextAdditionalJobWithScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)statusAsDictionary;
- (id)init;
- (BOOL)startAnalysisJob:(id)a0 error:(id *)a1;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (id)initWithPhotoAnalysisManager:(id)a0 dataLoader:(id)a1;
- (BOOL)stopAnalysisJob:(id)a0 error:(id *)a1;
- (id)libraryScopedWorkerPreferences;
- (void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)a0 keysToRemove:(id)a1;
- (void)setLibraryScopedWorkerPreferencesValue:(id)a0 forKey:(id)a1;
- (BOOL)didExceedTimeInterval:(double)a0 forKey:(id)a1;
- (BOOL)completedJobTodayForKey:(id)a0;
- (void)dispatchAsyncToUserInitiatedRequestQueue:(id /* block */)a0;
- (void)dispatchSyncToUserInitiatedRequestQueue:(id /* block */)a0;
- (void)assertUserInitiatedRequestQueue;
- (id)libraryScopedWorkerPreferencesURL;
- (BOOL)canRunWhenGraphIsLoaded;
- (void)pingWorkerWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;

@end
