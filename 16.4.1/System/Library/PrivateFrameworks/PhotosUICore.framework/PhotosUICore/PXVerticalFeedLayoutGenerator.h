@interface PXVerticalFeedLayoutGenerator : PXFeedLayoutGenerator {
    struct CGPoint { double x; double y; } _origin;
    struct PXTileInfo { long long index; struct CGSize { double width; double height; } imageSize; struct CGSize { double width; double height; } minimumSize; BOOL hasCaption; BOOL hasLikes; long long commentCount; BOOL isBatchStart; } _enqueuedCaptionTileInfo;
    struct PXTileInfo { long long index; struct CGSize { double width; double height; } imageSize; struct CGSize { double width; double height; } minimumSize; BOOL hasCaption; BOOL hasLikes; long long commentCount; BOOL isBatchStart; } _enqueuedLikesTileInfo;
    struct PXTileInfo { long long index; struct CGSize { double width; double height; } imageSize; struct CGSize { double width; double height; } minimumSize; BOOL hasCaption; BOOL hasLikes; long long commentCount; BOOL isBatchStart; } _enqueuedCommentsTileInfo;
}

@property (nonatomic) double referenceWidth;
@property (nonatomic) BOOL shouldDisplayCaptionsBelowBatches;

- (BOOL)_scanNonPanoramaSequence:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0 count:(long long)a1;
- (BOOL)_dequeueCaption;
- (BOOL)_addRowWithContiguousTiles:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0 count:(long long)a1;
- (BOOL)_addRowWithTiles:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0 imageFrames:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 count:(long long)a2;
- (BOOL)_addSpecialSequenceBlock:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0;
- (void)_enqueueCaptionWithTileInfo:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; })a0;
- (void)_enumerateRowFramesWithContiguousTiles:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0 count:(long long)a1 useMagneticGuidelines:(BOOL)a2 block:(id /* block */)a3;
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
- (BOOL)_scanSpecialSequenceBlock:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0;
- (BOOL)_scanSpecialSequenceRow:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0 count:(long long *)a1;
- (BOOL)_scanTilePair:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0;
- (BOOL)_scanTileRequiringFullWidth:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0;
- (BOOL)_scanTileRequiringNewRow:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0;
- (BOOL)_scanTileTriplet:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0;
- (BOOL)_scanTripletWithLargeLead:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0;
- (BOOL)_scanTripletWithRearrangment:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; } *)a0;
- (void)didParseTiles;
- (BOOL)parseNextTiles;
- (double)referenceDistanceForMagneticGuidelines;
- (void)willParseTiles;
- (BOOL)_dequeueComments;
- (BOOL)_dequeueLikes;
- (void)_enqueueCommentsWithTileInfo:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; })a0;
- (void)_enqueueLikesWithTileInfo:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; })a0;
- (BOOL)_hasEnqueuedComments;
- (BOOL)_hasEnqueuedLikes;
- (void)_willAddCaptionRowWithFirstTileInfo:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; })a0;
- (void)_willAddCommentRowsWithFirstTileInfo:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; })a0;
- (void)_willAddLikeRowWithFirstTileInfo:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; BOOL x4; long long x5; BOOL x6; })a0;

@end
