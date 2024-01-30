@class NSDateFormatter, NSCalendar;

@interface SCLScheduleTimeFormatter : NSFormatter {
    NSDateFormatter *_dateFormatter;
    NSCalendar *_calendar;
}

- (id)stringForObjectValue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)stringForScheduleTime:(id)a0;

@end
