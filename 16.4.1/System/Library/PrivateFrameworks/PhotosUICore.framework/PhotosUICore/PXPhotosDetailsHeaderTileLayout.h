@class PXPhotosDetailsHeaderSpec;
@protocol PXPhotosDetailsHeaderTileLayoutDelegate;

@interface PXPhotosDetailsHeaderTileLayout : PXTilingLayout {
    struct { BOOL contentsRectForAspectRatio; BOOL titleFontName; BOOL playButtonSize; } _delegateRespondsTo;
    BOOL _useTitledPlayButton;
}

@property (retain, nonatomic) PXPhotosDetailsHeaderSpec *spec;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<PXPhotosDetailsHeaderTileLayoutDelegate> delegate;
@property (readonly, nonatomic) struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } contentTileIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } previewRect;

- (id)initWithSpec:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)setReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_playButtonSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentsRectForAspectRatio:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;
- (id)_userDataForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 inContainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_viewSpecForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 boundingSize:(struct CGSize { double x0; double x1; })a1;
- (double)_zPositionForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOptions:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)getGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a0 group:(out unsigned long long *)a1 userData:(out id *)a2 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a3;
- (struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })tileIdentifierForTileKind:(long long)a0;
- (long long)tileKindForTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;

@end
