@class PXCuratedLibrarySectionGeometryDescriptor;
@protocol PXDisplayAsset;

@interface PXCuratedLibraryAssetsSectionGeneratedLayout : PXGGeneratedLayout

@property (retain, nonatomic) id<PXDisplayAsset> presentedKeyAsset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentedKeyAssetRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sectionRect;
@property (readonly, nonatomic) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;

- (void).cxx_destruct;
- (id)init;
- (void)enumerateHeroSpritesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)getSpriteZPosition:(float *)a0 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forSpriteKind:(long long)a2;
- (void)spritesDidUpdate;

@end
