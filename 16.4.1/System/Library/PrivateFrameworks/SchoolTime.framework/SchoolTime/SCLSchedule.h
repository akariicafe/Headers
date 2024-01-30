@class NSArray;

@interface SCLSchedule : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *uniformTimeIntervals;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) long long scheduledDays;
@property (readonly, nonatomic) NSArray *recurrences;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)endTimeForDay:(long long)a0;
- (BOOL)isScheduledForDay:(long long)a0;
- (id)recurrencesForDay:(long long)a0;
- (id)startTimeForDay:(long long)a0;
- (id)timeIntervalsForDay:(long long)a0;

@end
