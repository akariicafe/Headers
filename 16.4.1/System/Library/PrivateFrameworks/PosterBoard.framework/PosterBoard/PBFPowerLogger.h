@interface PBFPowerLogger : NSObject

+ (void)logUpdate:(long long)a0 reason:(long long)a1;
+ (void)logUpdate:(long long)a0 reason:(long long)a1 inServiceOfBundleIdentifier:(id)a2;
+ (short)powerLogClientIdentifier;

@end
