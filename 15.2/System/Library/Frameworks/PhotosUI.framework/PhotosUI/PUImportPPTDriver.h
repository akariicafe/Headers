@class PUTabbedLibraryViewController, NSString, PXImportController, NSMutableDictionary, PUImportPPTImportSource, NSDictionary, PXImportMediaProvider, NSObject, PUImportActionCoordinator, PXImportAssetsDataSourceManager;
@protocol OS_dispatch_semaphore;

@interface PUImportPPTDriver : NSObject <PXImportAssetsDataSourceManagerObserver, PUImportActionCoordinatorDelegate> {
    id /* block */ _insertDatasourceReply;
    id /* block */ _thumbnailTestReply;
    id /* block */ _importToLibraryTestReply;
    NSMutableDictionary *_extraResults;
    PXImportAssetsDataSourceManager *_dataSourceManager;
    PXImportController *_importController;
    PUImportPPTImportSource *_currentImportSource;
    PXImportMediaProvider *_mediaProvider;
    PUImportActionCoordinator *_actionCoordinator;
    NSObject<OS_dispatch_semaphore> *_importSemaphore;
    BOOL _importComplete;
    long long _iteration;
    double _startTime;
    double _endTime;
    BOOL _loadingContentStarted;
    BOOL _hasSeenAbsolulteLastThumbnailMarker;
}

@property (retain) NSDictionary *options;
@property (weak) PUTabbedLibraryViewController *tabbedLibraryViewController;
@property (copy) NSDictionary *testOptions;
@property (readonly, nonatomic) NSDictionary *additionalResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)mediaProvider;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)importViewController;
- (id)importController;
- (void)actionCoordinatorDidBeginDelete:(id)a0;
- (void)actionCoordinatorDidEndDelete:(id)a0;
- (void)actionCoordinatorWillBeginDelete:(id)a0;
- (void)actionCoordinatorDidCancelImport:(id)a0;
- (void)actionCoordinatorDidBeginImport:(id)a0;
- (void)actionCoordinator:(id)a0 didCompleteWithImportSession:(id)a1 results:(id)a2;
- (id)importDestinationForActionCoordinator:(id)a0;
- (void)actionCoordinatorWillBeginImport:(id)a0;
- (void)ppt_insertImportDataSourceWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)ppt_removeImportDataSourceWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeCurrentImportSourceIfNecessary;
- (void)ppt_performDeleteWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)ppt_performThumbnailWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)ppt_performImportToLibraryWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)modelBatchesForOptions:(id)a0;
- (void)_updateLoadingContentState;
- (double)_contentLoadingCheckInterval;
- (void)signalInsertDatasourceReply:(BOOL)a0;
- (void)signalThumbnailTestReply:(BOOL)a0;
- (void)signalImportToLibraryTestReply:(BOOL)a0;
- (void)ppt_mediaProviderDidProcessAsset:(id)a0;

@end
