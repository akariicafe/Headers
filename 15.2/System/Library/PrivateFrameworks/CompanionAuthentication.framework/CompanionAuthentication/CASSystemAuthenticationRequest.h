@interface CASSystemAuthenticationRequest : CASAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long service;

- (void)encodeWithCoder:(id)a0;
- (long long)authType;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
