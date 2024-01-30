@class NSTimeZone, NSBundle, NSDateFormatter, NSDateIntervalFormatter, NSString, NSCalendar, NSLocale;

@interface SCLScheduleIntervalFormatter : NSFormatter

@property (retain, nonatomic) NSDateFormatter *shortFormatter;
@property (retain, nonatomic) NSDateIntervalFormatter *briefFormatter;
@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSString *table;
@property (retain, nonatomic) NSCalendar *referenceCalendar;
@property (retain, nonatomic) NSTimeZone *referenceTimeZone;
@property (nonatomic) unsigned long long formattingStyle;
@property (nonatomic) BOOL coalescesAMPMSymbols;
@property (nonatomic) BOOL prefersHoursOnly;
@property (retain, nonatomic) NSLocale *locale;

- (id)stringForObjectValue:(id)a0;
- (id)stringFromTimeInterval:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)stringFromTime:(id)a0 toTime:(id)a1;
- (id)newDateFormatterWithLocale:(id)a0;
- (id)_stringForDateInterval:(id)a0 startComponents:(id)a1 endComponents:(id)a2;
- (id)_shortIntervalFormat;
- (id)_stringForCoalescedAMPMSymbolsWithDateInterval:(id)a0 locale:(id)a1 startTimeComponents:(id)a2 endTimeComponents:(id)a3;

@end
