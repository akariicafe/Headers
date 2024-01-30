@class NSString, PKPaymentProvisioningController, PKPaymentAuthorizationInterfaceConfiguration, PKPaymentAuthorizationContext, UIViewController;
@protocol PKPaymentAuthorizationProvisioningInterfaceDelegate;

@interface PKPaymentAuthorizationProvisioningInterface : NSObject <PKPaymentSetupDelegate, PKPaymentAuthorizationInterface> {
    PKPaymentAuthorizationContext *_context;
    PKPaymentAuthorizationInterfaceConfiguration *_configuration;
}

@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly, nonatomic) UIViewController *primaryViewController;
@property (weak, nonatomic) id<PKPaymentAuthorizationProvisioningInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
