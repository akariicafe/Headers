@class NSArray, NSCalendar;

@interface SCLScheduleFormatterItem : NSObject {
    long long _days;
}

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSArray *timeIntervals;

- (long long)days;
- (void).cxx_destruct;
- (void)addDay:(long long)a0;
- (id)dayRanges;
- (id)initWithCalendar:(id)a0 timeIntervals:(id)a1;
- (long long)earliestWeekdayInCalendar;

@end
