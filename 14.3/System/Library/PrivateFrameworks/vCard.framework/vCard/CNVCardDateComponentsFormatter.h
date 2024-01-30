@class NSCalendar, NSDateFormatter;

@interface CNVCardDateComponentsFormatter : NSFormatter {
    NSCalendar *_gregorianCalendar;
    NSDateFormatter *_compactYearMonthDayDateFormatter;
    NSDateFormatter *_compactYearMonthDayDateHourMinuteSecondZFormatter;
    NSDateFormatter *_monthDayDateFormatter;
    NSDateFormatter *_yearMonthDayDateFormatter;
    NSDateFormatter *_yearMonthDayDateHourMinuteSecondZFormatter;
}

+ (id)dateComponentsFromALTBDAYString:(id)a0;

- (id)stringFromDateComponents:(id)a0;
- (void).cxx_destruct;
- (id)gregorianCalendar;
- (id)dateComponentsFromString:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)dateComponentsFromALTBDAYString:(id)a0;
- (id)altBDAYStringFromDateComponents:(id)a0;
- (id)yearMonthDayStringFromDateComponents:(id)a0;
- (id)monthDayStringFromDateComponents:(id)a0;
- (id)yearMonthDayDateFormatter;
- (id)yearMonthDayDateHourMinuteSecondZFormatter;
- (id)compactYearMonthDayDateFormatter;
- (id)compactYearMonthDayDateHourMinuteSecondZFormatter;
- (id)monthDayDateFormatter;
- (id)stringForComponentValue:(long long)a0 format:(id)a1;

@end
