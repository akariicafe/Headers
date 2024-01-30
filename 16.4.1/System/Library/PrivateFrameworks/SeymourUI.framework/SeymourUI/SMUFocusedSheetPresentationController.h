@class NSString, UIVisualEffectView, UIBlurEffect;

@interface SMUFocusedSheetPresentationController : _UISheetPresentationController <SMUFocusedSheetPresentationController>

@property (readonly, nonatomic) UIVisualEffectView *blurredBackgroundView;
@property (retain, nonatomic) UIBlurEffect *backgroundBlurEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void).cxx_destruct;

@end
