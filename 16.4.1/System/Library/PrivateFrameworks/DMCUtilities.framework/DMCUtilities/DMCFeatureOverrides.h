@interface DMCFeatureOverrides : NSObject

+ (BOOL)allowAnyESSOApplicationEntitlements;
+ (id)dictForDefaultsKey:(id)a0;
+ (id)deviceNameWithDefaultValue:(id)a0;
+ (id)objectForDefaultsKey:(id)a0;
+ (BOOL)boolForDefaultsKey:(id)a0;
+ (BOOL)sentinelExistsAtPath:(id)a0;
+ (id)enrollmentProfileWithDefaultValue:(id)a0;
+ (id)simulatedMDMBYODAuthMethod;
+ (id)serviceDiscoveryDomainWithValue:(id)a0;
+ (id)softwareUpdateDeviceIDWithDefaultValue:(id)a0;
+ (id)attestationRateLimitOverrideMinutes;
+ (id)stringForDefaultsKey:(id)a0;
+ (id)serviceDiscoveryDefaultPortWithValue:(id)a0;
+ (id)gestaltOverrideForKey:(const struct __CFString { } *)a0 withDefaultValue:(id)a1;
+ (BOOL)shouldSimulateMDMCommunication;
+ (id)simulatedMDMBYODProfile;
+ (id)modelNameWithDefaultValue:(id)a0;
+ (id)serviceDiscoveryFallbackURLWithValue:(id)a0;
+ (double)enrollmentStepTimeoutThresholdWithDefaultValue:(double)a0;
+ (double)accountSignInTimeoutThresholdWithDefaultValue:(double)a0;
+ (BOOL)shouldSimulateMDMBYODSignIn;
+ (BOOL)allowAnyMAIDToSignIn;
+ (id)simulatedMDMBYODDefaultUsername;
+ (BOOL)bypassMDMTLSClientAuthentication;
+ (BOOL)_isUnknownProduct;
+ (id)numberForDefaultsKey:(id)a0;
+ (id)modelNumberWithDefaultValue:(id)a0;
+ (BOOL)ignoreEnrollmentMode;
+ (id)productNameWithDefaultValue:(id)a0;
+ (BOOL)useNonEphemeralWebAuthSession;
+ (id)activationRecordFlagsWithFlags:(id)a0;
+ (BOOL)useHTTPLogging;

@end
