@interface CKHorizontalTiledLayoutGenerator : CKTiledLayoutGenerator {
    struct CGPoint { double x; double y; } _origin;
}

@property (nonatomic) double referenceHeight;

- (BOOL)_scanNonPanoramaSequence:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0 count:(long long)a1;
- (BOOL)_addColumnWithContiguousTiles:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0 count:(long long)a1;
- (BOOL)_addColumnWithTiles:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0 imageFrames:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 count:(long long)a2;
- (BOOL)_addSpecialSequenceBlock:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0;
- (void)_enumerateColumnFramesWithContiguousTiles:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0 count:(long long)a1 useMagneticGuidelines:(BOOL)a2 block:(id /* block */)a3;
- (BOOL)_hasLeftSuboptimalColumn;
- (BOOL)_isAtEndOfColumn;
- (BOOL)_parseSingleTile;
- (BOOL)_parseSpecialSequence;
- (BOOL)_parseSpecialSubsequenceWithColumnRequired:(BOOL)a0 columnParsed:(BOOL *)a1;
- (BOOL)_parseSpecialTileTriplet;
- (BOOL)_parseTilePair;
- (BOOL)_parseTileTriplet;
- (BOOL)_scanSpecialSequenceBlock:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0;
- (BOOL)_scanSpecialSequenceColumn:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0 count:(long long *)a1;
- (BOOL)_scanTripletWithLargeLead:(struct { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; } *)a0;
- (BOOL)parseNextTiles;
- (double)referenceDistanceForMagneticGuidelines;
- (void)willParseTiles;

@end
