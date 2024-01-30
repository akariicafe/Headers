@interface PUAssetPickerCollectionLayoutSections : NSObject

+ (id)createOrthogonalScrollingGridSectionWithEffectiveContentWidth:(double)a0 numberOfColumns:(long long)a1 numberOfRows:(long long)a2 itemAspectRatio:(double)a3 headerKind:(id)a4;
+ (id)createAlbumGridSectionWithEffectiveContentWidth:(double)a0 numberOfColumns:(long long)a1 headerKind:(id)a2;
+ (id)createAssetGridSectionWithEffectiveContentWidth:(double)a0 numberOfColumns:(long long)a1 headerKind:(id)a2;

- (id)init;

@end
