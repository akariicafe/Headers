@class NSString, AMSBinaryPromise, NSObject, UIViewController;
@protocol OS_dispatch_queue;

@interface AMSUIPaymentSetupTask : AMSTask <AMSUIPaymentSetupViewControllerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long paymentSetupFeatureState;
@property (retain, nonatomic) AMSBinaryPromise *resultPromise;
@property (retain, nonatomic) AMSBinaryPromise *setupControllerPromise;
@property (retain, nonatomic) NSString *referrerIdentifier;
@property (retain, nonatomic) UIViewController *viewController;

- (BOOL)_didSucceed;
- (void).cxx_destruct;
- (id)present;
- (id)_fetchPaymentSetupFeature;
- (void)_presentPaymentSetupControllerWithPaymentSetupFeatures:(id)a0;
- (void)paymentSetupViewControllerDidDismiss;
- (id)initWithReferrerIdentifier:(id)a0 presentingViewController:(id)a1;

@end
