@interface DNDModeAssertionLifetime : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long lifetimeType;

+ (id)_secureCodingLifetimeClasses;
+ (id)lifetimeForUserRequest;
+ (id)lifetimeMatchingScheduleWithIdentifier:(id)a0;
+ (id)lifetimeUntilEndOfCalendarEventWithUniqueID:(id)a0 occurrenceDate:(id)a1;
+ (id)lifetimeUntilEndOfScheduleWithIdentifier:(id)a0;
+ (id)lifetimeWithCalendarEventUniqueID:(id)a0 occurrenceDate:(id)a1;
+ (id)lifetimeWithCurrentLocation;
+ (id)lifetimeWithDateInterval:(id)a0;
+ (id)lifetimeWithDuration:(double)a0;
+ (id)lifetimeWithExplicitRegion:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)lifetimeType;

@end
