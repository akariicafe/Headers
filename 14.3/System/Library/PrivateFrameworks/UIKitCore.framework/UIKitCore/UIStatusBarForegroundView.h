@class NSMutableArray, NSString, UIStatusBarComposedData, UIStatusBarForegroundStyleAttributes, UIAccessibilityHUDGestureManager, UIStatusBar, UIStatusBarLayoutManager;

@interface UIStatusBarForegroundView : UIView <UIAccessibilityHUDGestureDelegate> {
    BOOL _usesVerticalLayout;
    BOOL _itemIsEnabled[49];
    UIStatusBarLayoutManager *_layoutManagers[3];
    int _ignoreDataLevel;
    NSMutableArray *_actionAnimationStack;
    UIStatusBarComposedData *_currentData;
    UIStatusBarComposedData *_pendedData;
    int _pendedActions;
    UIAccessibilityHUDGestureManager *_accessibilityHUDGestureManager;
}

@property (nonatomic) long long idiom;
@property (readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle;
@property (readonly, nonatomic) UIStatusBar *statusBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)jiggleLockIcon;
- (id)_accessibilityHUDGestureManager:(id)a0 HUDItemForPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_accessibilityHUDGestureManager:(id)a0 gestureLiftedAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_tryToPlaceItem:(id)a0 inItemArray:(id)a1 layoutManager:(id)a2 roomRemaining:(double *)a3 allowSwap:(BOOL)a4 swappedItem:(id *)a5;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_statusBarWindowForAccessibilityHUD;
- (void)reflowItemViewsForgettingEitherSideItemHistory;
- (void)dealloc;
- (BOOL)isShowingBreadcrumb;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didMoveToWindow;
- (void)_dismissAccessibilityHUDForGestureManager:(id)a0;
- (void)setStatusBarData:(id)a0 actions:(int)a1 animated:(BOOL)a2;
- (void)startIgnoringData;
- (BOOL)willChangeNavigationItemDisplayWithSystemNavigationAction:(id)a0;
- (BOOL)ignoringData;
- (void)stopIgnoringData:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 foregroundStyle:(id)a1 usesVerticalLayout:(BOOL)a2;
- (void)reflowItemViews:(BOOL)a0;
- (void)reflowItemViewsCrossfadingCenter:(id)a0 duration:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemOfType:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAllItemsInRegion:(int)a0;
- (BOOL)rectIntersectsTimeItem:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_accessibilityHUDGestureManager:(id)a0 showHUDItem:(id)a1;
- (void)_cleanUpAfterDataChange;
- (id)_statusBarItemViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_animateUnlockCompletionBlock:(id /* block */)a0;
- (void)_reflowItemViewsWithDuration:(double)a0 preserveHistory:(BOOL)a1;
- (void)_cleanUpAfterSimpleReflow;
- (void)_setStatusBarData:(id)a0 actions:(int)a1 animated:(BOOL)a2;
- (void)_reflowItemViewsCrossfadingCenterWithDuration:(double)a0 timeWasEnabled:(BOOL)a1;
- (id)_computeVisibleItemsPreservingHistory:(BOOL)a0;
- (BOOL)rectIntersectsBatteryItem:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animateUnlock;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_accessibilityHUDGestureManager:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (double)leftEdgePadding;
- (double)rightEdgePadding;
- (void)setPersistentAnimationsEnabled:(BOOL)a0;

@end
