@class NSDictionary;

@interface DTSysmonTapMessage : DTTapMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int tapVersion;
@property (copy, nonatomic) NSDictionary *runningMetadata;

- (void)setSessionMetadata:(id)a0;
- (id)sessionMetadata;
- (void).cxx_destruct;

@end
