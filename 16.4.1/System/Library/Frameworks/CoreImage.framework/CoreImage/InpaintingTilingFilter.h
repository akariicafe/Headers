@interface InpaintingTilingFilter : NSObject

+ (void)computeTileSize:(int *)a0 andMaxDistanceBetweenTiles:(double *)a1 forExpandedMaskBBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (double)computeDistanceMultiplierForMask:(id)a0 andTileSize:(int)a1;
+ (id)computeTileCentersForNarrowDiagonalMask:(id)a0 tileSize:(int)a1 maxBaseDistanceBetweenPoints:(int)a2 maxRelativeMaskAreaSize:(float)a3;
+ (BOOL)initializeBoundaryPreservingTile;
+ (BOOL)isMaskNarrowDiagonal:(id)a0 maskBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 expandedMaskBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maxDiagonalMaskEdgeSize:(int)a3 maxRelativeMaskAreaSize:(float)a4;
+ (BOOL)isMaskRelativeAreaTooLargeForTiling:(id)a0 maskBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 expandedMaskBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 andMaxRelativeAreaSize:(double)a3;
+ (BOOL)isMaskSmallOrElongated:(id)a0 maskBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 expandedMaskBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maxElogatedMaskEdgeSize:(int)a3;
+ (id)performInpaintingTilingPipelineOnImage:(id)a0 usingMask:(id)a1 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 additionalParameters:(id)a3 espressoResources:(id)a4 executionContext:(id)a5;

@end
