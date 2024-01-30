@interface TATrackingAvoidanceServiceStateContext : NSObject

@property BOOL serviceEnabled;
@property BOOL highThermalState;
@property BOOL airplaneMode;
@property BOOL batterySaverMode;
@property BOOL locationServicesEnabled;
@property BOOL restartRequired;
@property BOOL locationSimulationInProgress;
@property BOOL allowSimulatedEvents;
@property BOOL deviceUnlockedSinceBoot;
@property BOOL hasKoreaCountryCode;
@property BOOL userLocationInsideKorea;

- (id)init;

@end
