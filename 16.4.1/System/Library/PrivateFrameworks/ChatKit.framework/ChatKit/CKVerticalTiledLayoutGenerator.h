@interface CKVerticalTiledLayoutGenerator : CKTiledLayoutGenerator {
    struct CGPoint { double x; double y; } _origin;
    struct { long long index; struct CGSize { double width; double height; } imageSize; struct CGSize { double width; double height; } minimumSize; BOOL hasCaption; BOOL isBatchStart; } _enqueuedCaptionTileInfo;
}

@property (nonatomic) double referenceWidth;
@property (nonatomic) BOOL shouldDisplayCaptionsBelowBatches;

- (BOOL)_scanNonPanoramaSequence:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0 count:(long long)a1;
- (BOOL)_dequeueCaption;
- (BOOL)_addRowWithContiguousTiles:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0 count:(long long)a1;
- (BOOL)_addRowWithTiles:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0 imageFrames:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 count:(long long)a2;
- (BOOL)_addSpecialSequenceBlock:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0;
- (void)_enqueueCaptionWithTileInfo:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; })a0;
- (void)_enumerateRowFramesWithContiguousTiles:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0 count:(long long)a1 useMagneticGuidelines:(BOOL)a2 block:(id /* block */)a3;
- (BOOL)_hasEnqueuedCaption;
- (BOOL)_hasLeftSuboptimalRow;
- (BOOL)_isAtEndOfRow;
- (BOOL)_parseSingleTile;
- (BOOL)_parseSpecialSequence;
- (BOOL)_parseSpecialSubsequenceWithRowRequired:(BOOL)a0 rowParsed:(BOOL *)a1;
- (BOOL)_parseSpecialTileTriplet;
- (BOOL)_parseTilePair;
- (BOOL)_parseTileRequiringFullWidth;
- (BOOL)_parseTileTriplet;
- (BOOL)_scanSpecialSequenceBlock:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0;
- (BOOL)_scanSpecialSequenceRow:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0 count:(long long *)a1;
- (BOOL)_scanTilePair:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0;
- (BOOL)_scanTileRequiringFullWidth:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0;
- (BOOL)_scanTileRequiringNewRow:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0;
- (BOOL)_scanTileTriplet:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0;
- (BOOL)_scanTripletWithLargeLead:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0;
- (BOOL)_scanTripletWithRearrangment:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0;
- (void)_willAddRowWithFirstTileInfo:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; })a0;
- (void)didParseTiles;
- (BOOL)parseNextTiles;
- (double)referenceDistanceForMagneticGuidelines;
- (void)willParseTiles;

@end
