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

- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)gregorianCalendar;
- (void).cxx_destruct;
- (id)stringFromDateComponents:(id)a0;
- (id)dateComponentsFromString:(id)a0;
- (id)stringForComponentValue:(long long)a0 format:(id)a1;
- (id)altBDAYStringFromDateComponents:(id)a0;
- (id)compactYearMonthDayDateFormatter;
- (id)compactYearMonthDayDateHourMinuteSecondZFormatter;
- (id)dateComponentsFromALTBDAYString:(id)a0;
- (id)monthDayDateFormatter;
- (id)monthDayStringFromDateComponents:(id)a0;
- (id)yearMonthDayDateFormatter;
- (id)yearMonthDayDateHourMinuteSecondZFormatter;
- (id)yearMonthDayStringFromDateComponents:(id)a0;

@end
