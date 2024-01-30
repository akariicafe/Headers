@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarWifiSignalView : _UIStatusBarSignalView

@property (nonatomic) BOOL needsCycleAnimationUpdate;
@property (retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation;

+ (double)_totalWidthForIconSize:(long long)a0;
+ (struct CGSize { double x0; double x1; })_intrinsicContentSizeForNumberOfBars:(long long)a0 iconSize:(long long)a1;
+ (id)_barImageWithSize:(struct CGSize { double x0; double x1; })a0 forScale:(double)a1 distance:(double)a2 angle:(double)a3 centerPoint:(struct CGPoint { double x0; double x1; })a4 cornerRadius:(double)a5 thickness:(double)a6;
+ (double)_barThicknessAtIndex:(unsigned long long)a0 iconSize:(long long)a1;
+ (double)_interspaceForIconSize:(long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateFromMode:(long long)a0;
- (void).cxx_destruct;
- (void)_iconSizeDidChange;
- (void)_updateCycleAnimationIfNeeded;
- (id)accessibilityHUDRepresentation;
- (void)didMoveToWindow;
- (void)_updateCycleAnimationNow;
- (void)layoutSubviews;
- (void)_colorsDidChange;
- (double)_barCornerRadius;
- (void)_updateBars;
- (void)_updateActiveBars;
- (void)_setNeedsUpdateCycleAnimation;

@end
