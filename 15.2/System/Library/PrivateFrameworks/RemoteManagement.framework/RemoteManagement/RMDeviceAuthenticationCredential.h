@interface RMDeviceAuthenticationCredential : RMAuthenticationCredential

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;

@end
