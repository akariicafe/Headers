@class NSDateInterval;

@interface DNDModeAssertionDateIntervalLifetime : DNDModeAssertionLifetime

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (id)initWithDateInterval:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isActiveForDate:(id)a0;
- (unsigned long long)lifetimeType;

@end
