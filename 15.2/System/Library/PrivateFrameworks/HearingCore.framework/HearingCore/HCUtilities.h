@interface HCUtilities : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)deviceIsWatch;
+ (id)bluetoothManagerQueue;
+ (BOOL)deviceIsPod;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)watchSupportsPairingHearingAids;
+ (BOOL)currentProcessIsHeard;
+ (BOOL)currentProcessIsAXUIServer;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (BOOL)deviceHasHomeButton;
+ (BOOL)deviceIsBigPhone;
+ (BOOL)deviceIsPhone;
+ (BOOL)deviceIsPad;
+ (BOOL)deviceIsMultiUser;
+ (BOOL)supportsLEA2;
+ (BOOL)deviceIsSmallPhone;
+ (long long)systemBootTime;
+ (BOOL)isProtectedDataAvailable;

@end
