@class NSMutableDictionary;

@interface SCLDailySchedule : SCLSchedule

@property (retain, nonatomic) NSMutableDictionary *dayMap;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)recurrences;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSchedule:(id)a0;
- (id)startTimeForDay:(long long)a0;
- (id)endTimeForDay:(long long)a0;
- (id)scheduleForDay:(long long)a0;

@end
