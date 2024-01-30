@class NSString, _SFDialogView, UIImageView, UIView, NSTimer, SFWebFormAccessoryViewWrapper;
@protocol _SFWebViewDelegate;

@interface _SFWebView : WKWebView <_SFDialogViewPresenting, _SFKillWebContentProcessUIActivityDelegate> {
    _SFDialogView *_dialogView;
    UIImageView *_placeholderView;
    NSTimer *_placeholderViewRemovalTimer;
    double _placeholderOffset;
    UIView *_contentObscuringView;
    SFWebFormAccessoryViewWrapper *_inputAccessoryContainerView;
}

@property (readonly, copy, nonatomic) NSString *evOrganizationName;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestInsets;
@property (nonatomic) long long navigationGesturePolicy;
@property (weak, nonatomic) id<_SFWebViewDelegate> delegate;
@property (weak, nonatomic) UIView *clippingView;
@property (nonatomic) double bottomBarHeightAboveKeyboard;
@property (nonatomic, getter=isObscuringContents) BOOL obscuringContents;
@property (readonly, nonatomic) BOOL hasBeenInWindow;
@property (copy, nonatomic) id /* block */ tapResultHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentDialogView:(id)a0 withAdditionalAnimations:(id /* block */)a1 forDialogController:(id)a2;
- (BOOL)webui_canPromptForAccountSecurityRecommendation;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (id)inputAccessoryView;
- (void)_close;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_isNavigationSwipeGestureRecognizer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (id)_enclosingViewForExposedRectComputation;
- (void)safariKillWebContentProcessUIActivityKillWebProcess:(id)a0;
- (void)setSuggestedFilenameForCurrentBackForwardListItem:(id)a0;
- (void).cxx_destruct;
- (void)dismissDialogView:(id)a0 withAdditionalAnimations:(id /* block */)a1 forDialogController:(id)a2;
- (int)webProcessIDForDialogController:(id)a0;
- (void)didTapAtPoint:(struct CGPoint { double x0; double x1; })a0 withResult:(long long)a1;
- (void)didStartFormControlInteraction;
- (void)didEndFormControlInteraction;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setPlaceholderImage:(id)a0;
- (id)scrollViewAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_setObscuredInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setPlaceholderImage:(id)a0 offset:(double)a1;
- (void)_updateNavigationGesturesAllowed;
- (void)setAllowsBackForwardNavigationGestures:(BOOL)a0;

@end
