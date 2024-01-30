@interface MCBatterySaverMode : NSObject

+ (BOOL)isBatterySaverModeActive;
+ (id)currentBatterySaverRestrictions:(int)a0;
+ (id)setOfActiveRestrictionUUIDs;
+ (BOOL)isBatterySaverModeActive:(int)a0;
+ (id)batterySaverRestrictions;
+ (id)currentBatterySaverRestrictions;

@end
