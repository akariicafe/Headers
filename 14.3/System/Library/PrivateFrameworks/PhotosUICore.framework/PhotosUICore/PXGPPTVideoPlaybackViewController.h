@class UIColor, NSString, NSMapTable, PXAssetsDataSource, NSObject;
@protocol OS_dispatch_queue;

@interface PXGPPTVideoPlaybackViewController : PXGPPTViewController <PXGDisplayAssetSource, PXGSolidColorSource, PXGSublayoutProvider, PXGDisplayAssetPixelBufferSourcesProvider> {
    UIColor *_spriteColor;
    long long _numberOfColumns;
    PXAssetsDataSource *_dataSource;
    NSObject<OS_dispatch_queue> *_pixelBufferSources_queue;
    NSMapTable *_pixelBufferSourcesByDisplayAsset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)a0;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)a0;
- (struct CGSize { double x0; double x1; })minSpriteSizeForPresentationStyle:(unsigned long long)a0;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (void).cxx_destruct;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (id)initWithAssetsDataSource:(id)a0;
- (void)recyclePixelBufferSourceForDisplayAssets:(id)a0;
- (id)pixelBufferSourceForDisplayAsset:(id)a0 mediaProvider:(id)a1 spriteReference:(id)a2;
- (BOOL)shouldDisplayPreviousNonnullPixelBufferForPixelBufferSource:(id)a0;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithLayout:(id)a0;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)viewDidLoad;

@end
