@interface LAUtils : NSObject

+ (BOOL)isDaytona;
+ (BOOL)isGibraltar;
+ (Class)ctkClassFromString:(id)a0;
+ (void *)_loadCTK;
+ (BOOL)isBiometricOnlyPolicy:(long long)a0;
+ (BOOL)isMultiUser;
+ (id)truncateString:(id)a0 maxLength:(long long)a1;
+ (id)auditTokenToData:(struct { unsigned int x0[8]; })a0;
+ (BOOL)callerRunningOnForeground:(id)a0;
+ (BOOL)isApplePayPolicy:(long long)a0 inApp:(BOOL)a1;
+ (BOOL)isSecureBootCapable;
+ (BOOL)isApplePayPolicy:(long long)a0;
+ (BOOL)isAppleSilicon;

@end
