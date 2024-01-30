@interface SBFullscreenZoomView : SBZoomView {
    BOOL _hasImage;
    id _surface;
}

@property (readonly, weak, nonatomic) id surface;

- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContainingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 statusBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 snapshot:(id)a3 snapshotOrientation:(long long)a4 interfaceOrientation:(long long)a5 doubleHeightStatusBar:(BOOL)a6 allowStatusBarToOverlap:(BOOL)a7 useLargerCornerRadii:(BOOL)a8 preventSplit:(BOOL)a9 needsZoomFilter:(BOOL)a10 asyncDecodeImage:(BOOL)a11 forJail:(BOOL)a12 hasOrientationMismatchForClassicApp:(BOOL)a13;
- (void)_addBlackBackground;
- (void).cxx_destruct;
- (id)_initWithView:(id)a0 displayConfiguration:(id)a1;
- (id)initWithView:(id)a0 containingSceneSnapshot:(id)a1 forDisplayConfiguration:(id)a2;

@end
