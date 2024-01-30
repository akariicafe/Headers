@interface HCUtilities : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)isProtectedDataAvailable;
+ (BOOL)watchSupportsPairingHearingAids;
+ (BOOL)deviceIsSmallPhone;
+ (BOOL)deviceIsPhone;
+ (BOOL)deviceIsMultiUser;
+ (BOOL)deviceIsPod;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)deviceHasHomeButton;
+ (BOOL)deviceIsBigPhone;
+ (BOOL)supportsLEA2;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (BOOL)currentProcessIsHeard;
+ (BOOL)deviceIsPad;
+ (BOOL)deviceIsWatch;

@end
