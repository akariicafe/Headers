@class NSSet, ACAccount, UIViewController;

@interface TRProxyAuthOperation : TROperation

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSSet *targetedServices;
@property (retain, nonatomic) UIViewController *presentingViewController;

+ (long long)_appleIDServiceTypeForTRAccountServices:(id)a0;
+ (id)_logStringForAppleIDServiceType:(long long)a0;

- (void).cxx_destruct;
- (void)execute;
- (void)_sendProxyDeviceRequest;
- (void)_handleProxyDeviceResponse:(id)a0;
- (void)_performProxyAuthenticationWithProxiedDevice:(id)a0;
- (void)_handleProxyAuthenticationResponse:(id)a0;

@end
