@class NSString, UIVisualEffectView, UIBlurEffect;

@interface SMUFocusedSheetPresentationController : _UISheetPresentationController <SMUFocusedSheetPresentationController>

@property (readonly, nonatomic) UIVisualEffectView *blurredBackgroundView;
@property (retain, nonatomic) UIBlurEffect *backgroundBlurEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void).cxx_destruct;

@end
