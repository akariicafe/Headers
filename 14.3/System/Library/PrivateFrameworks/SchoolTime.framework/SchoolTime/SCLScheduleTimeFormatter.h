@class NSDateFormatter, NSCalendar;

@interface SCLScheduleTimeFormatter : NSFormatter {
    NSDateFormatter *_dateFormatter;
    NSCalendar *_calendar;
}

- (id)init;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (id)stringForScheduleTime:(id)a0;

@end
