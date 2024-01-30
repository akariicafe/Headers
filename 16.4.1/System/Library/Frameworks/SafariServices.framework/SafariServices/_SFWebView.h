@class UIView, NSString, NSArray, NSTimer, UIImageView, SFDialogView, SFWebFormAccessoryViewWrapper, UIViewController;
@protocol UIPredictiveViewController, _SFWebViewDelegate;

@interface _SFWebView : WKWebView <SFDialogViewPresenting> {
    SFDialogView *_dialogView;
    UIImageView *_placeholderView;
    NSTimer *_placeholderViewRemovalTimer;
    double _placeholderOffset;
    UIView *_contentObscuringView;
    SFWebFormAccessoryViewWrapper *_inputAccessoryContainerView;
    UIViewController<UIPredictiveViewController> *_inputDashboardViewController;
}

@property (readonly, copy, nonatomic) NSString *evOrganizationName;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestInsets;
@property (nonatomic) long long navigationGesturePolicy;
@property (weak, nonatomic) id<_SFWebViewDelegate> delegate;
@property (weak, nonatomic) UIView *clippingView;
@property (nonatomic) double bottomBarHeightAboveKeyboard;
@property (nonatomic, getter=isObscuringContents) BOOL obscuringContents;
@property (readonly, nonatomic) BOOL hasBeenInWindow;
@property (readonly, copy, nonatomic) NSArray *callStackSymbolsForLastRemovalFromWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_close;
- (id)inputAccessoryView;
- (void)didEndFormControlInteraction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (BOOL)becomeFirstResponder;
- (BOOL)webui_canPromptForAccountSecurityRecommendation;
- (void)_updateNavigationGesturesAllowed;
- (void)didMoveToWindow;
- (void)setPlaceholderImage:(id)a0;
- (int)webProcessIDForDialogController:(id)a0;
- (void)safeAreaInsetsDidChange;
- (void)dismissDialogView:(id)a0 withAdditionalAnimations:(id /* block */)a1 forDialogController:(id)a2;
- (void)setSuggestedFilenameForCurrentBackForwardListItem:(id)a0;
- (void)webui_setInputDashboardViewController:(id)a0;
- (void)presentDialogView:(id)a0 withAdditionalAnimations:(id /* block */)a1 forDialogController:(id)a2;
- (id)_enclosingViewForExposedRectComputation;
- (void)dealloc;
- (void)didStartFormControlInteraction;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_setObscuredInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)inputDashboardViewController;
- (id)undoManager;
- (void)setPlaceholderImage:(id)a0 offset:(double)a1;
- (void)setAllowsBackForwardNavigationGestures:(BOOL)a0;
- (id)scrollViewAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
