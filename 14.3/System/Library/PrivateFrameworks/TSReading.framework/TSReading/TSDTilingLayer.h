@class CALayer, NSMutableArray;
@protocol TSDTileGeometryProviding;

@interface TSDTilingLayer : CALayer {
    struct CGSize { double width; double height; } mTileSize;
    struct { unsigned char tiled : 1; unsigned char hasCustomContents : 1; unsigned char drawsInBackground : 1; unsigned char forceTiling : 1; unsigned char needsTileLayout : 1; unsigned char needsTileDisplay : 1; unsigned char needsSelfDisplay : 1; } mFlags;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mLastVisibleBounds;
    struct CGSize { double width; double height; } mLastBoundsSize;
    CALayer *mProviderContentLayer;
    NSMutableArray *mDirtyTiles;
    BOOL mHasEverHadTileLayout;
}

@property (nonatomic) int tilingMode;
@property (nonatomic) BOOL drawsInBackground;
@property (nonatomic) BOOL forceTiling;
@property (retain, nonatomic) id<TSDTileGeometryProviding> geometryProvider;

+ (struct CGSize { double x0; double x1; })defaultTileSize;
+ (struct CGImage { } *)p_newCheckerboardImage;
+ (struct CGImage { } *)p_newGeneratedCheckerboardImage;

- (void)setNeedsLayout;
- (void)layoutSublayers;
- (id)init;
- (void)setContentsScale:(double)a0;
- (void)dealloc;
- (void)display;
- (void)setNeedsLayoutForTilingLayers;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContents:(id)a0;
- (void)tilingSafeSetSublayers:(id)a0;
- (BOOL)tilingSafeHasContents;
- (id)p_tileLayers;
- (unsigned long long)p_tilesWide;
- (BOOL)p_updateTileSizeWithLayerSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)p_tilesHigh;
- (void)setTileContents:(id)a0;
- (void)p_updateTileIndexes:(id)a0 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)i_setNeedsTileDisplayForTile:(id)a0;
- (void)setNeedsDisplayForDirtyTiles:(id)a0;
- (id)p_nonTileAndContentLayers;
- (id)p_tileAndContentLayers;
- (void)i_drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 inBackground:(BOOL)a2;
- (void)i_drawTile:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)i_drawTileInBackground:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
