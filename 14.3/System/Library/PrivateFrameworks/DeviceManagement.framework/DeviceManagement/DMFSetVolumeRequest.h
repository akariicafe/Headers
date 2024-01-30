@interface DMFSetVolumeRequest : DMFTaskRequest

@property (nonatomic) float volume;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
