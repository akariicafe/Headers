@class SCLTimeIntervalsFormatter, NSListFormatter, NSDateFormatter, NSDateIntervalFormatter, NSLocale, NSCalendar;

@interface SCLScheduleFormatter : NSFormatter

@property (readonly, nonatomic) SCLTimeIntervalsFormatter *timeIntervalsFormatter;
@property (readonly, nonatomic) NSListFormatter *listFormatter;
@property (readonly, nonatomic) NSDateFormatter *standaloneWeekdayFormatter;
@property (readonly, nonatomic) NSDateIntervalFormatter *weekdayIntervalFormatter;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSCalendar *calendar;

- (id)init;
- (void).cxx_destruct;
- (void)_regenerateFormatters;
- (id)formatterItemsForSchedule:(id)a0;
- (id)stringForWeekdaysInItem:(id)a0;
- (id)stringFromSchedule:(id)a0;

@end
