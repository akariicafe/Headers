@interface CMVehicleState : NSObject

+ (unsigned long long)vehicularState;
+ (BOOL)isAvailable;
+ (unsigned long long)vehicularHints;
+ (id)mostRecentVehicleConnection;
+ (id)mostRecentInVehicle;
+ (unsigned long long)isVehicleBasedOnDeviceId:(id)a0 deviceType:(int)a1;
+ (unsigned long long)vehicularOperatorState;

@end
