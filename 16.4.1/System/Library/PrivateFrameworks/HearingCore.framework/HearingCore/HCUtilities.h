@interface HCUtilities : NSObject

+ (BOOL)currentProcessIsHealth;
+ (BOOL)deviceIsPhone;
+ (BOOL)deviceIsSmallPhone;
+ (BOOL)deviceIsMultiUser;
+ (id)bluetoothManagerQueue;
+ (BOOL)currentProcessIsRTTExternsion;
+ (BOOL)supportsLEA2;
+ (BOOL)deviceIsPad;
+ (BOOL)isInternalInstall;
+ (BOOL)currentProcessIsHeard;
+ (long long)systemBootTime;
+ (BOOL)deviceIsPod;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (BOOL)currentProcessIsSystemApp;
+ (BOOL)watchSupportsPairingHearingAids;
+ (BOOL)currentProcessIsSpringBoard;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessIsAXUIServer;
+ (BOOL)currentProcessIsInCallService;
+ (BOOL)currentProcessIsCarousel;
+ (BOOL)deviceIsBigPhone;
+ (BOOL)deviceHasHomeButton;
+ (BOOL)isProtectedDataAvailable;
+ (BOOL)deviceIsWatch;

@end
