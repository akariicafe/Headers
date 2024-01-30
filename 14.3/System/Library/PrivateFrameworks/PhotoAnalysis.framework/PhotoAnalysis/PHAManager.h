@class PHAAssetResourceDataLoader, NSURL, PHAGraphManager, NSMutableDictionary, PHPhotoLibrary, PHAMonitoring, PHAExecutive, PHAJobCoordinator, CPAnalytics;

@interface PHAManager : NSObject <PHAServiceOperationHandling> {
    PHAMonitoring *_monitoring;
    PHAAssetResourceDataLoader *_dataLoader;
    unsigned long long _processedAssetCount;
}

@property (retain) NSMutableDictionary *photoAnalysisWorkersByType;
@property (readonly) PHAExecutive *executive;
@property (readonly) NSURL *libraryURL;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PHAJobCoordinator *jobCoordinator;
@property (readonly, getter=isQuiescent) BOOL quiescent;
@property (readonly) PHAGraphManager *graphManager;
@property (readonly) CPAnalytics *analytics;

+ (void)enumerateWorkerClassesUsingBlock:(id /* block */)a0;
+ (id)allWorkerClasses;

- (id)graphServiceWorker;
- (void)enumerateWorkersUsingBlock:(id /* block */)a0;
- (void)shutdown;
- (void)stopAllBackgroundActivities;
- (void)backgroundActivityDidBegin;
- (void)startTurboProcessing;
- (id)faceClassificationServiceWorker;
- (id)init;
- (BOOL)photosIsConnected;
- (void)disableTurboMode;
- (void).cxx_destruct;
- (void)enableTurboMode;
- (void)graphManagerDidUnloadGraph:(id)a0;
- (BOOL)isReadyForAnalysis;
- (void)reportTurboEnabledWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestLocalizedSceneAncestryInformationWithContext:(id)a0 reply:(id /* block */)a1;
- (id)presentationWorker;
- (id)monitoring;
- (void)triggerBackgroundActivity;
- (id)description;
- (void)dumpAnalysisStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)handleOperation:(id)a0;
- (void)stopBackgroundActivity;
- (id)faceProcessingServiceWorker;
- (id)initWithPhotoLibraryURL:(id)a0 executive:(id)a1;
- (void)graphManagerWillLoadGraph:(id)a0;
- (void)checkForQuiescence;
- (id)statusAsDictionary;
- (void)turboConstraintsWereRemoved;
- (BOOL)turboIsEnabled;

@end
