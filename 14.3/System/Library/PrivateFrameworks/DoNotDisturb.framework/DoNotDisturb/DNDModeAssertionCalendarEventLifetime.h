@class NSString, NSDate;

@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime

@property (readonly, copy, nonatomic) NSString *eventUniqueID;
@property (readonly, copy, nonatomic) NSDate *occurrenceDate;
@property (readonly, nonatomic, getter=isOnlyDuringEvent) BOOL onlyDuringEvent;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)lifetimeType;
- (id)initWithEventUniqueID:(id)a0 occurrenceDate:(id)a1 onlyDuringEvent:(BOOL)a2;

@end
