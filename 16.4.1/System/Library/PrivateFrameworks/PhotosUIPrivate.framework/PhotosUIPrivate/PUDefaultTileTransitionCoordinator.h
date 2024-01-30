@class NSNumber;

@interface PUDefaultTileTransitionCoordinator : PUTileTransitionCoordinator

@property (copy, nonatomic) NSNumber *animationDuration;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_adjustDefaultDisappearanceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)_layoutInfoWithDefaultDisappearance:(id)a0;
- (void)configureOptions:(id)a0 forSpringAnimationsZommingIn:(BOOL)a1;
- (id)finalLayoutInfoForDisappearingTileController:(id)a0 fromLayoutInfo:(id)a1;
- (id)initialLayoutInfoForAppearingTileController:(id)a0 toLayoutInfo:(id)a1;
- (id)optionsForAnimatingTileController:(id)a0 toLayoutInfo:(id)a1 withAnimationType:(long long)a2;

@end
