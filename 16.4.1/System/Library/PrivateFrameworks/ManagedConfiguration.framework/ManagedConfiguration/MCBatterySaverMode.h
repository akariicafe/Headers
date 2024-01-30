@interface MCBatterySaverMode : NSObject

+ (BOOL)isBatterySaverModeActive;
+ (id)setOfActiveRestrictionUUIDs;
+ (id)currentBatterySaverRestrictions;
+ (id)batterySaverRestrictions;
+ (id)currentBatterySaverRestrictions:(int)a0;
+ (BOOL)isBatterySaverModeActive:(int)a0;

@end
