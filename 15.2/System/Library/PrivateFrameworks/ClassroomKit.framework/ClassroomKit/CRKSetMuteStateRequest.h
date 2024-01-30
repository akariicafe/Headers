@interface CRKSetMuteStateRequest : CATTaskRequest

@property (nonatomic, getter=shouldMute) BOOL mute;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
