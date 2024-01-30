@class PXPhotosGridAssetDecorationSource, NSString, NSShadow, PXPhotosGridMessagesLayoutSpec, PXAssetsDataSource;
@protocol PXDisplayAssetFetchResult;

@interface PXPhotosGridMessagesBodyLayout : PXGGridLayout <PXGDisplayAssetSource, PXGShadowSource> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _cachedClampedItemRange;
    id<PXDisplayAssetFetchResult> _cachedClampedFetchResult;
    NSShadow *_contentShadow;
}

@property (readonly, nonatomic) PXPhotosGridAssetDecorationSource *assetDecorationSource;
@property (readonly, nonatomic) long long section;
@property (readonly, nonatomic) PXAssetsDataSource *dataSource;
@property (retain, nonatomic) PXPhotosGridMessagesLayoutSpec *spec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)a0;
- (void)setDataSource:(id)a0 section:(long long)a1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (id)shadowForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (id)assetReferenceForItemIndex:(long long)a0;
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_updateNumberOfColumns;
- (id)assetForItemIndex:(long long)a0;

@end
