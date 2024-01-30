@class UIScrollView, IMScheduledUpdater;

@interface CKScrollViewController : CKViewController

@property (nonatomic, getter=isKeyboardVisible) BOOL keyboardVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardScreenFrame;
@property (nonatomic) BOOL keyboardInteractionCancelled;
@property (retain, nonatomic) IMScheduledUpdater *updater;
@property (copy, nonatomic) id /* block */ overrideScrollBlock;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) BOOL topInsetIncludesPalette;
@property (readonly, nonatomic) double topInsetPadding;
@property (readonly, nonatomic) double bottomInsetPadding;
@property (readonly, nonatomic) double minimumBottomInset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } keyboardFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } keyboardFrameInViewCoordinates;
@property (readonly, nonatomic, getter=isKeyboardUndocked) BOOL keyboardUndocked;
@property (readonly, nonatomic, getter=isKeyboardOnscreenWithoutAccessoryView) BOOL keyboardOnscreenWithoutAccessoryView;
@property (nonatomic) BOOL enableContentPinning;
@property (nonatomic) double contentPinningThreshold;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSizeForPinning;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bannerInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })macToolbarInsets;
- (void)keyboardDidChangeFrame:(id)a0;
- (void)updateScrollGeometry;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inputAccessoryViewFrameForFloatingKeyboard;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })navigationBarInsets;
- (BOOL)manuallyUpdateKeyboardScreenFrameWithFrameIfNeeded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animationDuration:(double)a1;
- (BOOL)isHoldingScrollGeometryUpdates;
- (void)endHoldingScrollGeometryUpdatesForKey:(id)a0;
- (void)contentInsetWillChange:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 animated:(BOOL)a1 duration:(double)a2;
- (void).cxx_destruct;
- (void)contentInsetDidChange;
- (void)keyboardWillHideViaGesture;
- (id)init;
- (void)keyboardWillShowOrHide:(id)a0;
- (double)accessoryViewHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })navigationBarInsetsWithoutPalette;
- (void)keyboardDidShowOrHide:(id)a0;
- (void)primeWithKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isKeyboardFloating;
- (void)inputAccessoryViewFrameUpdatedForFloatingKeyboard;
- (void)dealloc;
- (void)_changedStatusBarFrame:(id)a0;
- (void)_entryViewWillRotate:(id)a0;
- (double)_visibleKeyboardHeight;
- (void)_updateKeyboardScreenFrameForShowOrHideWithNewScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 previousFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2 isShowEvent:(BOOL)a3;
- (void)_updateScrollGeometryWithDuration:(double)a0;
- (void)keyboardVisibilityWillChange;
- (double)_bottomRotatingFooterHeight;
- (double)visibleHeightAboveKeyboard;
- (void)endHoldingScrollGeometryUpdatesForAllKeys;
- (double)bottomInsetWithoutAccessoryView;
- (void)beginHoldingScrollGeometryUpdatesForKey:(id)a0;

@end
