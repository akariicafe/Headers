@interface CMFitnessShared : NSObject

+ (BOOL)isDeviceSatellitePaired;
+ (BOOL)isWorkoutStartReminderEnabledWhenDeviceIsSatellitePaired:(BOOL)a0 isInMoveTimeMode:(BOOL)a1 withCurrentSetting:(id)a2;
+ (BOOL)isWorkoutEndReminderEnabledWhenDeviceIsInMoveTimeMode:(BOOL)a0 withCurrentSetting:(id)a1;

@end
