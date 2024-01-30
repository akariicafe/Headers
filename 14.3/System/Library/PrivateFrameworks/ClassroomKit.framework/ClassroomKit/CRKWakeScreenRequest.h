@interface CRKWakeScreenRequest : CATTaskRequest

@property (nonatomic) BOOL shouldBecomeExclusive;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
