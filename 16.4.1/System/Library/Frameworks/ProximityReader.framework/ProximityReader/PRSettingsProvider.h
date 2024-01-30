@interface PRSettingsProvider : NSObject

+ (BOOL)hasEntitlement:(id)a0;
+ (BOOL)getPINPrivacyLockForBundleID:(id)a0;
+ (void)setPINPrivacyLock:(BOOL)a0 forBundleID:(id)a1;
+ (BOOL)shouldDisablePINPrivacyLockForBundleID:(id)a0;
+ (BOOL)shouldShowPINPrivacyLockForBundleID:(id)a0;
+ (void)setAlwaysPlaySound:(BOOL)a0 forBundleID:(id)a1;
+ (BOOL)getAlwaysPlaySoundForBundleID:(id)a0;
+ (BOOL)isProximityReaderSupported:(id)a0;
+ (void)removeMDMAppAttribute:(long long)a0 forBundleID:(id)a1;
+ (void)setMDMAppAttribute:(long long)a0 withValue:(BOOL)a1 forBundleID:(id)a2;

@end
