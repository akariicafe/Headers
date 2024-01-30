@interface IMDeviceConditions : NSObject

@property (readonly) BOOL isDeviceCharging;
@property (readonly) BOOL isDeviceOnWifi;
@property (readonly) BOOL isDeviceOnData;

+ (id)sharedInstance;

- (id)_mobileNetworkManager;
- (id)_batteryStatus;

@end
