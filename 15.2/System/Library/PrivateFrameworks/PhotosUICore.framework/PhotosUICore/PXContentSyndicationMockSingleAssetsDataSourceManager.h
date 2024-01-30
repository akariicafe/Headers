@class NSString, PHFetchResult, PHPhotoLibrary, PXContentSyndicationMockSingleAssetsDataSource;
@protocol PXContentSyndicationAssetFetchResultProvider, PXContentSyndicationSocialLayerHighlightProvider, PXUIImageProvider;

@interface PXContentSyndicationMockSingleAssetsDataSourceManager : PXContentSyndicationDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    PHFetchResult *_allPhotosFetchResult;
    id<PXContentSyndicationAssetFetchResultProvider> _assetFetchResultProvider;
    id<PXUIImageProvider> _imageProvider;
    id<PXContentSyndicationSocialLayerHighlightProvider> _highlightProvider;
}

@property (readonly, nonatomic) PXContentSyndicationMockSingleAssetsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createCountsController;

- (id)createInitialDataSource;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)imageProvider;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)socialLayerHighlightProvider;
- (id)allAssetsFetchResult;
- (id)assetFetchResultProvider;
- (id)createAssetsDataSourceManager;

@end
