@interface CRKSetMuteStateRequest : CATTaskRequest

@property (nonatomic, getter=shouldMute) BOOL mute;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
