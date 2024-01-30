@class NSString;

@interface RTMotionActivityManagerNotificationVehicleConnected : RTNotification

@property (readonly, nonatomic) unsigned long long vehicleConnectedState;
@property (readonly, nonatomic) NSString *deviceId;

- (void).cxx_destruct;
- (id)initWithVehicleConnectedState:(unsigned long long)a0 deviceId:(id)a1;

@end
