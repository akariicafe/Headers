@interface MCFeatureOverrides : NSObject

+ (BOOL)isAppleInternal;
+ (BOOL)isDevFused;
+ (id)_numberForDefaultsKey:(id)a0 isPresent:(BOOL *)a1;
+ (BOOL)shouldSimulatorSupportMDM;
+ (BOOL)boolForDefaultsKey:(id)a0;
+ (int)profileEventsExpirationInterval;
+ (double)accountRemovalTimeoutWithDefaultValue:(double)a0;
+ (BOOL)shouldDisablePlatformPayloadFilter;
+ (BOOL)boolForDefaultsKey:(id)a0 isPresent:(BOOL *)a1;
+ (unsigned long long)profileEventsMaxLength;
+ (BOOL)allowVPNInUserEnrollment;

@end
