@class NSArray;

@interface GEOPlaceDailyNormalizedHours : NSObject

@property (readonly, nonatomic) long long weekday;
@property (readonly, nonatomic) NSArray *localTimeIntervals;
@property (nonatomic) double closingSoonThresholdSeconds;
@property (nonatomic) double openingSoonThresholdSeconds;
@property (readonly, nonatomic) BOOL openToMidnight;
@property (readonly, nonatomic) BOOL openFromMidnight;

+ (id)dailyNormalizedHoursForWeekday:(long long)a0 timeIntervals:(id)a1 closingThreshold:(double)a2 openingThreshold:(double)a3 openToMidnight:(BOOL)a4 openFromMidnight:(BOOL)a5;
+ (long long)todaysWeekday:(long long)a0 yesterdaysWeekday:(long long)a1 containsTimeFromMidnight:(double)a2 inNormalizedHours:(id)a3;
+ (long long)getWeekdayForDate:(id)a0 inNormalizedHours:(id)a1 timeZone:(id)a2;

- (void).cxx_destruct;
- (id)description;

@end
