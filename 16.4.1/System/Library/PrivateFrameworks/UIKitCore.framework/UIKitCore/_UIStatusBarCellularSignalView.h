@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarCellularSignalView : _UIStatusBarSignalView

@property (nonatomic) BOOL needsLargerScale;
@property (nonatomic) BOOL needsCycleAnimationUpdate;
@property (retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation;

+ (double)_heightForNormalBarAtIndex:(long long)a0 iconSize:(long long)a1;
+ (struct CGSize { double x0; double x1; })_intrinsicContentSizeForNumberOfBars:(long long)a0 iconSize:(long long)a1;
+ (double)_barWidthForIconSize:(long long)a0;
+ (double)_interspaceForIconSize:(long long)a0;
+ (double)_barCornerRadiusForIconSize:(long long)a0;

- (void)_updateFromMode:(long long)a0;
- (id)accessibilityHUDRepresentation;
- (void)_updateActiveBars;
- (void)_iconSizeDidChange;
- (void)_colorsDidChange;
- (void)_updateBars;
- (void)applyStyleAttributes:(id)a0;
- (void)didMoveToWindow;
- (void)_setNeedsUpdateCycleAnimation;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)_heightForBarAtIndex:(long long)a0;
- (void)_updateCycleAnimationIfNeeded;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateCycleAnimationNow;
- (double)_heightForBarAtIndex:(long long)a0 mode:(long long)a1;

@end
