@protocol HKHealthPrivacyServiceRemoteRecalibrateEstimatesViewController, HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate;

@interface HKHealthPrivacyHostRecalibrateEstimatesViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>

@property (readonly, nonatomic) id<HKHealthPrivacyServiceRemoteRecalibrateEstimatesViewController> _healthPrivacyServiceViewControllerProxy;
@property (weak, nonatomic) id<HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)didFinishWithError:(id)a0;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)setRequestRecord:(id)a0 completion:(id /* block */)a1;

@end
