@interface AMSDaemonConnectionInterface : NSObject

+ (id)interface;
+ (id)_deviceMessengerClientInterface;
+ (id)_deviceMessengerServiceInterface;
+ (id)_fraudReportServiceInterface;
+ (id)_securityClientInterface;
+ (id)_securityServiceInterface;
+ (void)_configureURLPresentationDelegateClasses:(id)a0;
+ (void)_setUpSecurityInterfaceApplePayClassic:(id)a0;
+ (void)_setUpSecurityInterfaceBiometricSelectors:(id)a0;
+ (void)_setUpSecurityInterfaceFraudScoreSelectors:(id)a0;
+ (void)_setUpSecurityInterfaceHandleResponseSelector:(id)a0;
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:(id)a0;
+ (void)_setUpSecurityInterfaceSilentEnrollmentSelector:(id)a0;

@end
