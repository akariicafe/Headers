@interface CMVehicleState : NSObject

+ (unsigned long long)vehicularOperatorState;
+ (unsigned long long)vehicularHints;
+ (unsigned long long)vehicularState;
+ (unsigned long long)isVehicleBasedOnDeviceId:(id)a0 deviceType:(int)a1;
+ (id)mostRecentVehicleConnection;
+ (id)mostRecentInVehicle;
+ (BOOL)isAvailable;

@end
