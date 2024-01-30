@interface DNDModeAssertionLifetime : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long lifetimeType;

+ (id)lifetimeWithDateInterval:(id)a0;
+ (id)lifetimeWithDuration:(double)a0;
+ (id)lifetimeWithCurrentLocation;
+ (id)lifetimeUntilEndOfCalendarEventWithUniqueID:(id)a0 occurrenceDate:(id)a1;
+ (id)lifetimeWithCalendarEventUniqueID:(id)a0 occurrenceDate:(id)a1;
+ (id)lifetimeMatchingScheduleWithIdentifier:(id)a0;
+ (id)lifetimeUntilEndOfScheduleWithIdentifier:(id)a0;
+ (id)lifetimeWithExplicitRegion:(id)a0;
+ (id)lifetimeForUserRequest;
+ (id)_secureCodingLifetimeClasses;

- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)lifetimeType;

@end
