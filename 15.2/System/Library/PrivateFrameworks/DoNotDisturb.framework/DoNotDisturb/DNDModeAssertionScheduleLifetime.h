@class NSString;

@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime

@property (readonly, copy, nonatomic) NSString *scheduleIdentifier;
@property (readonly, nonatomic) unsigned long long behavior;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)lifetimeType;
- (id)initWithScheduleIdentifier:(id)a0 behavior:(unsigned long long)a1;

@end
