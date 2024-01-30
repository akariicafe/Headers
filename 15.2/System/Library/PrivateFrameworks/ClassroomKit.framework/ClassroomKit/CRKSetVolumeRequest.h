@interface CRKSetVolumeRequest : CATTaskRequest

@property (nonatomic) double volume;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
