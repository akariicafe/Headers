@interface MCBatterySaverMode : NSObject

+ (BOOL)isBatterySaverModeActive;
+ (id)currentBatterySaverRestrictions:(int)a0;
+ (BOOL)isBatterySaverModeActive:(int)a0;
+ (id)setOfActiveRestrictionUUIDs;
+ (id)batterySaverRestrictions;
+ (id)currentBatterySaverRestrictions;

@end
