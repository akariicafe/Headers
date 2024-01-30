@class PXSAInboxDataSource, PXFeedSectionInfosManager, NSString, PXSAInboxDetailViewControllerProvider, PXSAInboxTitleProvider;
@protocol PXInboxModelDetailViewControllerProvider, PXInboxModelTitleProvider, PXInboxModelMediaProvider;

@interface PXSAInboxDataSourceManager : PXInboxModelDataSourceManager <PXFeedSectionInfosManagerDelegate, PXInboxProviderSource, PXInboxModelMediaProvider>

@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (retain, nonatomic) PXSAInboxTitleProvider *sharedAlbumTitleProvider;
@property (retain, nonatomic) PXSAInboxDetailViewControllerProvider *sharedAlbumDetailViewControllerProvider;
@property (readonly, nonatomic) PXSAInboxDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXInboxModelDetailViewControllerProvider> detailViewControllerProvider;
@property (readonly, nonatomic) id<PXInboxModelMediaProvider> mediaProvider;
@property (readonly, nonatomic) id<PXInboxModelTitleProvider> titleProvider;

- (void)_updateDataSource;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (id)init;
- (id)_dataSourceSnapshot;
- (void)feedSectionInfosManager:(id)a0 sectionInfosDidChange:(id)a1;
- (id)providerSource;
- (int)requestImageForPreviewItem:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 resultHandler:(id /* block */)a2;
- (id)_sectionInfosForDataSource;

@end
