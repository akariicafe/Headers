@class PHAAssetResourceDataLoader, PGManager, NSURL, NSString, NSMutableDictionary, PHPhotoLibrary, PHAMonitoring, PHAExecutive, PHAJobCoordinator, CPAnalytics;

@interface PHAManager : NSObject <PHAServiceOperationHandling> {
    PHAMonitoring *_monitoring;
    PHAAssetResourceDataLoader *_dataLoader;
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

- (void)handleOperation:(id)a0;
- (id)initWithPhotoLibraryURL:(id)a0 executive:(id)a1;
- (void)turboConstraintsWereRemoved;
- (void)enableTurboMode;
- (void)stopAllBackgroundActivities;
- (void)shutdown;
- (void)backgroundActivityDidBegin;
- (void)startTurboProcessing;
- (void)dumpAnalysisStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)triggerBackgroundActivity;
- (id)faceClassificationServiceWorker;
- (void)stopBackgroundActivity;
- (void)checkForQuiescence;
- (void).cxx_destruct;
- (BOOL)isReadyForAnalysis;
- (id)statusAsDictionary;
- (BOOL)turboIsEnabled;
- (id)init;
- (BOOL)photosIsConnected;
- (void)stopBackgroundActivityWaitForCompletion;
- (void)disableTurboMode;
- (id)storytellingWorker;
- (id)faceProcessingServiceWorker;
- (void)reportTurboEnabledWithContext:(id)a0 reply:(id /* block */)a1;
- (id)monitoring;
- (void)enumerateWorkersUsingBlock:(id /* block */)a0;
- (id)clientDispatcher;

@end
