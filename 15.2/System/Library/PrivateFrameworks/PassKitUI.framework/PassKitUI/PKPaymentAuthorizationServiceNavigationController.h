@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationServiceViewController;
@protocol UIViewControllerTransitioningDelegate;

@interface PKPaymentAuthorizationServiceNavigationController : PKCompactNavigationContainedNavigationController {
    PKPaymentAuthorizationLayout *_layout;
}

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> paymentTransitioningDelegate;
@property (readonly, nonatomic) PKPaymentAuthorizationServiceViewController *authorizationViewController;

- (BOOL)_canShowWhileLocked;
- (id)_backgroundColorForModalFormSheet;
- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)initWithLayoutStyle:(long long)a0 paymentRequest:(id)a1;

@end
