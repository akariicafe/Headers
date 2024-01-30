@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarCellularSignalView : _UIStatusBarSignalView

@property (nonatomic) BOOL needsLargerScale;
@property (nonatomic) BOOL needsCycleAnimationUpdate;
@property (retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation;

+ (double)_interspaceForIconSize:(long long)a0;
+ (struct CGSize { double x0; double x1; })_intrinsicContentSizeForNumberOfBars:(long long)a0 iconSize:(long long)a1;
+ (double)_barCornerRadiusForIconSize:(long long)a0;
+ (double)_barWidthForIconSize:(long long)a0;
+ (double)_heightForNormalBarAtIndex:(long long)a0 iconSize:(long long)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_colorsDidChange;
- (double)_heightForBarAtIndex:(long long)a0;
- (double)_heightForBarAtIndex:(long long)a0 mode:(long long)a1;
- (void)_updateActiveBars;
- (void).cxx_destruct;
- (void)_updateCycleAnimationIfNeeded;
- (void)_updateFromMode:(long long)a0;
- (id)accessibilityHUDRepresentation;
- (void)_updateBars;
- (void)_updateCycleAnimationNow;
- (void)_iconSizeDidChange;
- (void)didMoveToWindow;
- (void)applyStyleAttributes:(id)a0;
- (void)_setNeedsUpdateCycleAnimation;

@end
