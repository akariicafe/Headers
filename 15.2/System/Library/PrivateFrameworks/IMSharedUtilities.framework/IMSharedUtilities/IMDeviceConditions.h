@interface IMDeviceConditions : NSObject

@property (readonly) BOOL isDeviceCharging;
@property (readonly) BOOL isDeviceOnWifi;

+ (id)sharedInstance;

- (id)_batteryStatus;
- (id)_mobileNetworkManager;

@end
