@class NSSet, NSString, ACAccount, UIViewController;

@interface TRProxyAuthOperation : TROperation

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSSet *targetedServices;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) BOOL shouldUseAIDA;
@property (nonatomic) BOOL isCLIMode;
@property (retain, nonatomic) NSString *rawPassword;

+ (long long)_appleIDServiceTypeForTRAccountServices:(id)a0;
+ (id)_logStringForAppleIDServiceType:(long long)a0;

- (void)execute;
- (void).cxx_destruct;
- (void)_handleProxyAuthenticationResponse:(id)a0;
- (void)_handleProxyDeviceResponse:(id)a0;
- (void)_performProxyAuthenticationWithProxiedDevice:(id)a0;
- (void)_sendProxyDeviceRequest;

@end
