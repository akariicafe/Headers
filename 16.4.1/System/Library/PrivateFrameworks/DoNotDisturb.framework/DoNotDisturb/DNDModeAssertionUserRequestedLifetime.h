@interface DNDModeAssertionUserRequestedLifetime : DNDModeAssertionLifetime

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)lifetimeType;

@end
