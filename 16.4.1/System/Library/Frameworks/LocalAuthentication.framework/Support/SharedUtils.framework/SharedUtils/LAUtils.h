@interface LAUtils : NSObject

+ (id)truncateString:(id)a0 maxLength:(long long)a1;
+ (BOOL)isSharedIPad;
+ (BOOL)isApplePayPolicy:(long long)a0 inApp:(BOOL)a1;
+ (BOOL)isApplePayPolicy:(long long)a0;
+ (BOOL)isBiometricOnlyPolicy:(long long)a0;
+ (BOOL)hasBridge;
+ (BOOL)callerRunningOnForeground:(id)a0 pid:(int)a1;
+ (BOOL)isDaytona;
+ (BOOL)isSecureBootCapable;
+ (id)auditTokenToData:(struct { unsigned int x0[8]; })a0;
+ (BOOL)isGibraltar;
+ (BOOL)isAppleSilicon;

@end
