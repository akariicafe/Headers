@interface _BRKDeviceOrientationNotificationProxy : NSObject

@property (readonly, nonatomic) BOOL wristOrientationIsRight;
@property (readonly, nonatomic) BOOL crownOrientationIsRight;

+ (id)sharedInstance;

- (void)_postNotification;
- (id)init;
- (void)_logCurrentState;
- (void)_postChangeNotification:(id)a0;

@end
