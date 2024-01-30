@interface RTCameraManagerNotificationCameraPowerChanged : RTNotification

@property (readonly, nonatomic) long long powerState;
@property (readonly, nonatomic) long long cameraType;

- (id)initWithCameraType:(long long)a0 powerState:(long long)a1;

@end
