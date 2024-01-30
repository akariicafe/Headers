@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarCellularSignalView : _UIStatusBarSignalView

@property (nonatomic) BOOL needsLargerScale;
@property (nonatomic) BOOL needsCycleAnimationUpdate;
@property (retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation;

+ (struct CGSize { double x0; double x1; })_intrinsicContentSizeForNumberOfBars:(long long)a0 iconSize:(long long)a1;
+ (double)_barWidthForIconSize:(long long)a0;
+ (double)_barCornerRadiusForIconSize:(long long)a0;
+ (double)_interspaceForIconSize:(long long)a0;
+ (double)_heightForNormalBarAtIndex:(long long)a0 iconSize:(long long)a1;

- (void)applyStyleAttributes:(id)a0;
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
- (double)_heightForBarAtIndex:(long long)a0 mode:(long long)a1;
- (double)_heightForBarAtIndex:(long long)a0;
- (void)_updateBars;
- (void)_updateActiveBars;
- (void)_setNeedsUpdateCycleAnimation;

@end
