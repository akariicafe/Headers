@interface CAMModeAndDeviceConfigurationChangeListener : NSObject

@property (nonatomic) long long desiredMode;
@property (nonatomic) long long desiredDevicePosition;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
