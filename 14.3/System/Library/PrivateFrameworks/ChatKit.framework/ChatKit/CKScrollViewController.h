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

- (id)init;
- (void).cxx_destruct;
- (void)keyboardDidChangeFrame:(id)a0;
- (void)dealloc;
- (void)updateScrollGeometry;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })navigationBarInsets;
- (void)keyboardWillShowOrHide:(id)a0;
- (void)keyboardDidShowOrHide:(id)a0;
- (void)primeWithKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })macToolbarInsets;
- (void)_changedStatusBarFrame:(id)a0;
- (void)_entryViewWillRotate:(id)a0;
- (double)_visibleKeyboardHeight;
- (void)_updateScrollGeometryWithDuration:(double)a0;
- (void)keyboardVisibilityWillChange;
- (double)_bottomRotatingFooterHeight;
- (double)visibleHeightAboveKeyboard;
- (void)endHoldingScrollGeometryUpdatesForAllKeys;
- (BOOL)isHoldingScrollGeometryUpdates;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bannerInsets;
- (void)beginHoldingScrollGeometryUpdatesForKey:(id)a0;
- (void)endHoldingScrollGeometryUpdatesForKey:(id)a0;
- (double)accessoryViewHeight;
- (void)contentInsetDidChange;
- (void)contentInsetWillChange:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 animated:(BOOL)a1 duration:(double)a2;
- (void)keyboardWillHideViaGesture;
- (double)bottomInsetWithoutAccessoryView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })navigationBarInsetsWithoutPalette;

@end
