@interface _TVRUIFeatures : NSObject

+ (BOOL)_isInternalInstall;
+ (BOOL)rapportEnabled;
+ (BOOL)isWakeToRemoteOnLockScreenDisabled;
+ (BOOL)updogEnabled;
+ (BOOL)persistHintsUIEnabled;
+ (BOOL)isHintsDebugUIEnabled;
+ (BOOL)isTapToRadarEnabled;
+ (id)_globalPrefForKey:(id)a0;
+ (BOOL)_valueForInternalInstallWithBlock:(id /* block */)a0;

@end
