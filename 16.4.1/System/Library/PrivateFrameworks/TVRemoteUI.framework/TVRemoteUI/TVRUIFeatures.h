@interface TVRUIFeatures : NSObject

+ (BOOL)_isInternalInstall;
+ (BOOL)ghostdogEnabled;
+ (BOOL)isWakeToRemoteOnLockScreenDisabled;
+ (BOOL)rapportEnabled;
+ (BOOL)updogEnabled;
+ (id)_globalPrefForKey:(id)a0;
+ (BOOL)_valueForInternalInstallWithBlock:(id /* block */)a0;
+ (BOOL)isHintsDebugUIEnabled;
+ (BOOL)isTapToRadarEnabled;
+ (BOOL)persistHintsUIEnabled;

@end
