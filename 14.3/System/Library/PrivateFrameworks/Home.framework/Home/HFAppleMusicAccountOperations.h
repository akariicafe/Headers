@interface HFAppleMusicAccountOperations : NSObject

+ (id)_validateRemoteLoginHandlerForAccessory:(id)a0;
+ (id)_completeLoginForAccessory:(id)a0 results:(id)a1 error:(id)a2;
+ (id)executeCompanionLoginForAccessory:(id)a0 account:(id)a1;
+ (id)executeProxyLoginForAccessory:(id)a0 context:(id)a1;
+ (id)logoutAccessories:(id)a0;

@end
