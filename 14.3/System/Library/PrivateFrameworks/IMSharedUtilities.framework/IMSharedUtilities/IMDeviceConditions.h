@interface IMDeviceConditions : NSObject

@property (readonly) BOOL isDeviceCharging;
@property (readonly) BOOL isDeviceOnWifi;

+ (id)sharedInstance;

- (id)_mobileNetworkManager;
- (id)_batteryStatus;

@end
