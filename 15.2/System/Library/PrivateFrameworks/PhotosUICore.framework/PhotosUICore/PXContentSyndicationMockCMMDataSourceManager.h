@class PXCMMInvitationsDataSourceManager, NSString, PXContentSyndicationMockCMMDataSource;
@protocol PXContentSyndicationAssetFetchResultProvider, PXContentSyndicationSocialLayerHighlightProvider, PXUIImageProvider;

@interface PXContentSyndicationMockCMMDataSourceManager : PXContentSyndicationDataSourceManager <PXSectionedDataSourceManagerObserver> {
    id<PXContentSyndicationAssetFetchResultProvider> _assetFetchResultProvider;
    id<PXUIImageProvider> _imageProvider;
    id<PXContentSyndicationSocialLayerHighlightProvider> _highlightProvider;
}

@property (retain, nonatomic) PXCMMInvitationsDataSourceManager *cmmDataSourceManager;
@property (readonly, nonatomic) PXContentSyndicationMockCMMDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createCountsController;

- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)imageProvider;
- (void)_handleDataSourceChange;
- (id)socialLayerHighlightProvider;
- (id)allAssetsFetchResult;
- (id)assetFetchResultProvider;
- (id)createAssetsDataSourceManager;

@end
