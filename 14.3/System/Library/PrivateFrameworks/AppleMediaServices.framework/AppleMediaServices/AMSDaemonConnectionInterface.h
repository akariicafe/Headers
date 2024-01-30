@interface AMSDaemonConnectionInterface : NSObject

+ (void)_setUpSecurityInterfaceBiometricProxy:(id)a0;
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:(id)a0;
+ (void)_setUpSecurityInterfaceHandleResponseSelector:(id)a0;
+ (id)interface;
+ (id)_deviceMessengerClientInterface;
+ (id)_deviceMessengerServiceInterface;
+ (id)_securityClientInterface;
+ (id)_securityServiceInterface;
+ (void)_configureURLPresentationDelegateClasses:(id)a0;

@end
