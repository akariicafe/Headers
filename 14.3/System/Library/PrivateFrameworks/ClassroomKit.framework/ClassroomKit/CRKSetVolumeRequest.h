@interface CRKSetVolumeRequest : CATTaskRequest

@property (nonatomic) double volume;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
