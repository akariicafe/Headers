@interface DTTapHeartbeatMessage : DTTapMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long heartbeatTime;

- (id)init;

@end
