@interface MCFeatureOverrides : NSObject

+ (BOOL)isAppleInternal;
+ (BOOL)isDevFused;
+ (BOOL)boolForDefaultsKey:(id)a0;
+ (id)_numberForDefaultsKey:(id)a0 isPresent:(BOOL *)a1;
+ (BOOL)boolForDefaultsKey:(id)a0 isPresent:(BOOL *)a1;
+ (BOOL)allowVPNInUserEnrollment;
+ (unsigned long long)profileEventsMaxLength;
+ (int)profileEventsExpirationInterval;
+ (double)accountRemovalTimeoutWithDefaultValue:(double)a0;

@end
