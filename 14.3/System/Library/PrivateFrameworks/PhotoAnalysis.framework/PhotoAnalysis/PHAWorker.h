@class PHAServiceCancelableOperation, NSString, NSURL, PHPhotoLibrary, PFSerialQueue, PHAManager;
@protocol PHAAssetResourceDataLoading;

@interface PHAWorker : NSObject <PHAWorkerConfiguration, PHAServiceOperationHandling> {
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (short)workerType;
+ (BOOL)persistsState;
+ (BOOL)runsExclusively;
+ (void)configureXPCConnection:(id)a0;
+ (long long)applicationDataFolderIdentifier;

- (BOOL)stopAnalysisJob:(id)a0 error:(id *)a1;
- (void)cooldown;
- (id)initWithPhotoAnalysisManager:(id)a0 dataLoader:(id)a1;
- (void)shutdown;
- (id)init;
- (void).cxx_destruct;
- (void)warmupWithProgressBlock:(id /* block */)a0;
- (id)nextAdditionalJobWithScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (void)handleOperation:(id)a0;
- (BOOL)canRunWhenGraphIsLoaded;
- (void)operationWillStart:(id)a0;
- (BOOL)startAnalysisJob:(id)a0 error:(id *)a1;
- (id)statusAsDictionary;
- (void)startup;
- (void)operationDidFinish:(id)a0;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (void)dispatchSyncToUserInitiatedRequestQueue:(id /* block */)a0;
- (void)dispatchAsyncToUserInitiatedRequestQueue:(id /* block */)a0;
- (void)setLibraryScopedWorkerPreferencesValue:(id)a0 forKey:(id)a1;
- (void)assertUserInitiatedRequestQueue;
- (id)libraryScopedWorkerPreferences;
- (void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)a0 keysToRemove:(id)a1;
- (id)libraryScopedWorkerPreferencesURL;
- (void)pingWorkerWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;

@end
