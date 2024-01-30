@class NSCalendar, NSDateFormatter;

@interface HMDMetricsDateProvider : NSObject

@property (readonly, nonatomic) NSCalendar *gmtCalendar;
@property (readonly, nonatomic) NSCalendar *localCalendar;
@property (readonly, nonatomic) NSDateFormatter *formatter;
@property (readonly, nonatomic) id /* block */ dateFactory;

- (id)init;
- (void).cxx_destruct;
- (long long)currentDayNumberOfWeek;
- (long long)dayNumberOfWeekForDate:(id)a0;
- (long long)daysFromDate:(id)a0 toDate:(id)a1;
- (id)initWithDateFactory:(id /* block */)a0;
- (id)initWithLocalTimeZone:(id)a0 dateFactory:(id /* block */)a1;
- (long long)localHourOfDay;
- (id)startOfCurrentDay;
- (id)startOfCurrentMonth;
- (id)startOfCurrentWeek;
- (id)startOfCurrentYear;
- (id)startOfDateByAddingDayCount:(long long)a0 toDate:(id)a1;
- (id)startOfDayByAddingDayCount:(long long)a0;

@end
