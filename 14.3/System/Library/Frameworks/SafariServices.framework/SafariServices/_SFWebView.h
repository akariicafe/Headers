@class NSString, _SFDialogView, UIImageView, UIView, NSTimer;
@protocol _SFWebViewDelegate;

@interface _SFWebView : WKWebView <_SFDialogViewPresenting, _SFKillWebContentProcessUIActivityDelegate> {
    _SFDialogView *_dialogView;
    UIImageView *_placeholderView;
    NSTimer *_placeholderViewRemovalTimer;
    double _placeholderOffset;
    UIView *_contentObscuringView;
}

@property (readonly, copy, nonatomic) NSString *evOrganizationName;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestInsets;
@property (nonatomic) long long navigationGesturePolicy;
@property (weak, nonatomic) id<_SFWebViewDelegate> delegate;
@property (weak, nonatomic) UIView *clippingView;
@property (nonatomic, getter=isObscuringContents) BOOL obscuringContents;
@property (readonly, nonatomic) BOOL hasBeenInWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (void)safeAreaInsetsDidChange;
- (void).cxx_destruct;
- (BOOL)webui_canPromptForAccountSecurityRecommendation;
- (void)setAllowsBackForwardNavigationGestures:(BOOL)a0;
- (void)dealloc;
- (void)presentDialogView:(id)a0 withAdditionalAnimations:(id /* block */)a1 forDialogController:(id)a2;
- (void)_updateNavigationGesturesAllowed;
- (void)setPlaceholderImage:(id)a0 offset:(double)a1;
- (void)setPlaceholderImage:(id)a0;
- (id)_enclosingViewForExposedRectComputation;
- (void)didMoveToWindow;
- (void)dismissDialogView:(id)a0 withAdditionalAnimations:(id /* block */)a1 forDialogController:(id)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setSuggestedFilenameForCurrentBackForwardListItem:(id)a0;
- (void)_close;
- (void)didEndFormControlInteraction;
- (void)safariKillWebContentProcessUIActivityKillWebProcess:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (int)webProcessIDForDialogController:(id)a0;
- (void)didStartFormControlInteraction;
- (void)_setObscuredInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
