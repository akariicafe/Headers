@class PGManager, NSURL, NSString, NSMutableDictionary, PHPhotoLibrary, PHAMonitoring, PHAExecutive, PHAJobCoordinator, CPAnalytics;

@interface PHAManager : NSObject <PHAServiceOperationHandling> {
    PHAMonitoring *_monitoring;
    unsigned long long _processedAssetCount;
}

@property (retain) NSMutableDictionary *photoAnalysisWorkersByType;
@property (readonly) PHAExecutive *executive;
@property (readonly) NSURL *libraryURL;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PGManager *graphManager;
@property (readonly) PHAJobCoordinator *jobCoordinator;
@property (readonly, getter=isQuiescent) BOOL quiescent;
@property (readonly) CPAnalytics *analytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enumerateWorkerClassesUsingBlock:(id /* block */)a0;
+ (id)allWorkerClasses;

- (void)stopBackgroundActivity;
- (void)handleOperation:(id)a0;
- (id)statusAsDictionary;
- (id)storytellingWorker;
- (id)clientDispatcher;
- (BOOL)isBacklogged;
- (BOOL)isReadyForAnalysis;
- (void)shutdown;
- (BOOL)turboIsEnabled;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;
- (void)reportTurboEnabledWithContext:(id)a0 reply:(id /* block */)a1;
- (id)backloggedStatus;
- (id)initWithPhotoLibraryURL:(id)a0 executive:(id)a1;
- (void)stopAllBackgroundActivities;
- (void)triggerBackgroundActivity;
- (id)monitoring;
- (void)stopBackgroundActivityWaitForCompletion;
- (void)enableTurboMode;
- (void)requestEnergyStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (void)checkForQuiescence;
- (void)turboConstraintsWereRemoved;
- (void)enumerateWorkersUsingBlock:(id /* block */)a0;
- (void)disableTurboMode;
- (BOOL)photosIsConnected;
- (void)dumpAnalysisStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)backgroundActivityDidBegin;
- (void).cxx_destruct;
- (void)startTurboProcessing;

@end
