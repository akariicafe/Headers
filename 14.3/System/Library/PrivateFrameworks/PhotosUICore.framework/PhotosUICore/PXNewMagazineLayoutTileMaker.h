@class PXNewMagazineRectArray, NSMutableArray;

@interface PXNewMagazineLayoutTileMaker : NSObject {
    PXNewMagazineRectArray *_cachedTileRects;
    NSMutableArray *_allFrames;
    double _lastTileWidthPadding;
    double _maxFrameAspectRatio;
    double _minFrameAspectRatio;
    BOOL _startLastPadding;
    NSMutableArray *_sharedTempArray;
    double *_normalizedWeights;
    BOOL _isPerfectEnding;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (readonly, nonatomic) unsigned long long numberOfColumns;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) struct CGSize { double width; double height; } defaultTileSize;
@property (readonly, nonatomic) double tileAspectRatio;
@property (nonatomic) double interTileSpacing;
@property (nonatomic) unsigned long long maxTilesInFrame;
@property (nonatomic) BOOL layoutFromRightToLeft;

+ (void)printInputs:(id)a0;
+ (void)printPossibleFrames:(unsigned long long)a0 cellAspectRatio:(double)a1 maxAspectRatio:(double)a2 minAspectRato:(double)a3;
+ (void)printLayout:(id)a0 numOfColumns:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReferenceSize:(struct CGSize { double x0; double x1; })a0 numberOfColumns:(unsigned long long)a1;
- (unsigned long long)getMagazineRects:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; } *)a0 withInputs:(id)a1;
- (void)getFrames:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 withInputs:(id)a1;
- (void)_getFrames:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 magazineRects:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; } *)a1 withInputs:(id)a2;
- (double *)_normalizeWeightsByInputs:(id)a0;
- (void)_setRandomSeedWithInputs:(id)a0;
- (void)_updateDimensionInfos;
- (void)_resetWithNumberOfAssets:(unsigned long long)a0;
- (id)_generateTilesWithInputs:(id)a0;
- (unsigned long long)_numberOfInputsForLastPadding;
- (id)_generateLastTilesWithInputs:(id)a0 baseIndex:(unsigned long long)a1 returnFallback:(BOOL)a2;
- (BOOL)_findNextTileWithInputs:(id)a0 atIndex:(unsigned long long)a1 baseIndex:(unsigned long long)a2 coordinator:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameFromTileFrame:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (id)_getAllFramesInOrder;
- (long long)_availableFrames:(id *)a0 maxReturnCount:(unsigned long long)a1 forAspectRatio:(double)a2 weight:(double)a3 maxWidth:(unsigned long long)a4;
- (BOOL)convertRects:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; } *)a0 outFrames:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 count:(unsigned long long)a2 forReferenceSize:(struct CGSize { double x0; double x1; })a3;
- (BOOL)_isSameRectsArray:(id)a0 otherArray:(id)a1;
- (void)_findNextChunkWithInputs:(id)a0 fromIndex:(unsigned long long)a1 context:(id)a2;
- (BOOL)_generateNextChunkWithInputs:(id)a0 fromIndex:(unsigned long long)a1 maxY:(unsigned long long)a2 reserveNumberForPadding:(unsigned long long)a3 context:(id)a4;
- (BOOL)checkAndPrintResults:(BOOL)a0;
- (id)description;

@end
