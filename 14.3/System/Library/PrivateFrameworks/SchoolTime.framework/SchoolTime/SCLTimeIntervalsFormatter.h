@class SCLScheduleIntervalFormatter, NSListFormatter, NSLocale;

@interface SCLTimeIntervalsFormatter : NSFormatter

@property (readonly, nonatomic) SCLScheduleIntervalFormatter *intervalFormatter;
@property (readonly, nonatomic) NSListFormatter *listFormatter;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL prefersHoursOnly;
@property (nonatomic) unsigned long long intervalFormattingStyle;

- (id)locale;
- (id)init;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (void)setLocale:(id)a0;
- (id)stringFromTimeIntervals:(id)a0;

@end
