@interface AMSDaemonConnectionInterface : NSObject

+ (id)interface;
+ (id)_purchaseServiceInterface;
+ (id)_deviceMessengerClientInterface;
+ (void)_configureURLPresentationDelegateClasses:(id)a0;
+ (id)_securityServiceInterface;
+ (void)_setUpSecurityInterfaceBiometricSelectors:(id)a0;
+ (id)_deviceMessengerServiceInterface;
+ (void)_setUpSecurityInterfaceApplePayClassic:(id)a0;
+ (void)_setUpSecurityInterfaceSilentEnrollmentSelector:(id)a0;
+ (id)_securityClientInterface;
+ (void)_setUpSecurityInterfaceHandleResponseSelector:(id)a0;
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:(id)a0;
+ (id)_fraudReportServiceInterface;
+ (id)_cookieServiceInterface;

@end
