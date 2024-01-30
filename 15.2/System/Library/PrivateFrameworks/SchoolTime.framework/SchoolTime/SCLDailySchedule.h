@class NSMutableDictionary;

@interface SCLDailySchedule : SCLSchedule

@property (retain, nonatomic) NSMutableDictionary *dayMap;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)recurrences;
- (id)initWithSchedule:(id)a0;
- (id)startTimeForDay:(long long)a0;
- (id)endTimeForDay:(long long)a0;
- (id)scheduleForDay:(long long)a0;

@end
