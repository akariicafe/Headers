@interface CRKIdentityServiceMockingRequest : CATTaskRequest

@property (nonatomic) BOOL shouldDisable;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
