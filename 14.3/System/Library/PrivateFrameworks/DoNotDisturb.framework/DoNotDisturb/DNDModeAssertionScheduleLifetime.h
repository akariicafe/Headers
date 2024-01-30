@class NSString;

@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime

@property (readonly, copy, nonatomic) NSString *scheduleIdentifier;
@property (readonly, nonatomic) unsigned long long behavior;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)lifetimeType;
- (id)initWithScheduleIdentifier:(id)a0 behavior:(unsigned long long)a1;

@end
