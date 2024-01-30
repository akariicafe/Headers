@interface STScreenTimeConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL enforcesChildRestrictions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)_stScreenTimeConfigurationCommonInitWithEnforcesChildRestrictions:(BOOL)a0;
- (id)initWithEnforcesChildRestrictions:(BOOL)a0;

@end
