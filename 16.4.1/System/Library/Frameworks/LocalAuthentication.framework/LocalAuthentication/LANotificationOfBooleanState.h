@interface LANotificationOfBooleanState : LANotification

@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) BOOL oldBoolValue;

+ (void)postNotificationWithNewBoolState:(BOOL)a0;

- (id)darwinNotificationForBoolValue:(BOOL)a0;
- (id)darwinNotificationForValue:(id)a0;

@end
