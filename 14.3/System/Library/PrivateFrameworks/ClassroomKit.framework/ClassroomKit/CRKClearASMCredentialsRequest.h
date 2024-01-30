@interface CRKClearASMCredentialsRequest : CATTaskRequest

@property (nonatomic) long long role;
@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
