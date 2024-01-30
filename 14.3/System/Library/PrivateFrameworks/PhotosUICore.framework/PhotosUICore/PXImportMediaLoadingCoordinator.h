@class PXImportAssetsDataSource, NSString, NSObject, PXImportController, NSMutableArray, PXImportAssetsDataSourceManager;
@protocol OS_dispatch_queue;

@interface PXImportMediaLoadingCoordinator : PXObservable <PXImportAssetsDataSourceManagerObserver, PXImportMediaProviderNotificationsReceiver> {
    NSObject<OS_dispatch_queue> *_modelQueue;
    NSObject<OS_dispatch_queue> *_workerQueue;
}

@property (readonly, weak, nonatomic) PXImportController *importController;
@property (readonly, nonatomic) PXImportAssetsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) NSMutableArray *thumbnailWorkItemUuids;
@property (retain, nonatomic) PXImportAssetsDataSource *dataSource;
@property (nonatomic) unsigned long long completedDataSourceIdentifier;
@property (nonatomic, setter=setPaused:) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdown;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithImportController:(id)a0;
- (id)dequeueNextThumbnailWorkItem;
- (void)_processItemIfPossible;
- (void)handleNewDataSource:(id)a0;
- (void)mediaProviderThumbnailingBecameIdle;

@end
