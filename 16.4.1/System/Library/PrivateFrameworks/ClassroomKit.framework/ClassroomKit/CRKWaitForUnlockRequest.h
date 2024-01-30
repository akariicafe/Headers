@interface CRKWaitForUnlockRequest : CATTaskRequest

@property (nonatomic) BOOL shouldBecomeExclusive;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
