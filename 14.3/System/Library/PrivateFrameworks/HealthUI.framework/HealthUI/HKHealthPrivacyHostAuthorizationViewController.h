@protocol HKHealthPrivacyHostAuthorizationControllerDelegate, HKHealthPrivacyServiceRemoteAuthorizationViewController;

@interface HKHealthPrivacyHostAuthorizationViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>

@property (readonly, nonatomic) id<HKHealthPrivacyServiceRemoteAuthorizationViewController> _healthPrivacyServiceViewControllerProxy;
@property (weak, nonatomic) id<HKHealthPrivacyHostAuthorizationControllerDelegate> delegate;

+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)show;
- (void).cxx_destruct;
- (void)didFinishWithError:(id)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)setRequestRecord:(id)a0 presentationRequests:(id)a1;

@end
