@class NSString, PKPaymentAuthorizationInterfaceConfiguration, PKPaymentAuthorizationContext, UIViewController;
@protocol PKPeerPaymentIdentityVerificationInterfaceDelegate;

@interface PKPeerPaymentIdentityVerificationInterface : NSObject <PKPaymentSetupViewControllerDelegate, PKPaymentAuthorizationInterface> {
    PKPaymentAuthorizationContext *_context;
    PKPaymentAuthorizationInterfaceConfiguration *_configuration;
}

@property (readonly, nonatomic) UIViewController *primaryViewController;
@property (weak, nonatomic) id<PKPeerPaymentIdentityVerificationInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)interfaceWithContext:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;
- (id)createPrimaryViewControllerWithVerificationResponse:(id)a0;
- (id)initWithContext:(id)a0 configuration:(id)a1 verificationResponse:(id)a2;
- (void)viewControllerDidCancelSetupFlow:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end
