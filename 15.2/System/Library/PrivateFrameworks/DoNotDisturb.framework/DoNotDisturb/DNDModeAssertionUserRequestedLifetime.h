@interface DNDModeAssertionUserRequestedLifetime : DNDModeAssertionLifetime

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)lifetimeType;

@end
