@interface RTWiFiFootprintStateNotification : RTNotification

@property (readonly, nonatomic) long long state;

- (id)initWithFootprintState:(long long)a0;

@end
