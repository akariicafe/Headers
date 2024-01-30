@interface CMVehicleState : NSObject

+ (BOOL)isAvailable;
+ (id)mostRecentVehicleConnection;
+ (id)mostRecentInVehicle;
+ (unsigned long long)isVehicleBasedOnDeviceId:(id)a0 deviceType:(int)a1;
+ (unsigned long long)vehicularHints;
+ (unsigned long long)vehicularOperatorState;
+ (unsigned long long)vehicularState;

@end
