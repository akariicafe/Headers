@class NSMutableDictionary, PUTilingDataSource, PUTilingScrollInfo, PUTilingView;
@protocol PUTilingCoordinateSystem;

@interface PUTilingLayout : NSObject {
    NSMutableDictionary *_tileIdentifierByIndexPathByKind;
}

@property (weak, nonatomic) PUTilingView *tilingView;
@property (weak, nonatomic) id<PUTilingCoordinateSystem> parentCoordinateSystem;
@property (nonatomic) struct CGPoint { double x; double y; } coordinateSystemOrigin;
@property (retain, nonatomic) PUTilingDataSource *dataSource;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (readonly, nonatomic) PUTilingScrollInfo *preferredScrollInfo;
@property (readonly, nonatomic) id<PUTilingCoordinateSystem> coordinateSystem;

- (id)layoutInfoForTileWithIndexPath:(id)a0 kind:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectForScrollingToItemAtIndexPath:(id)a0 scrollPosition:(long long)a1;
- (void)invalidateLayoutWithContext:(id)a0;
- (void)prepareLayout;
- (id)description;
- (id)layoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)tileIdentifierForTileWithIndexPath:(id)a0 kind:(id)a1;
- (void)invalidateLayoutForUpdateWithItems:(id)a0;

@end
