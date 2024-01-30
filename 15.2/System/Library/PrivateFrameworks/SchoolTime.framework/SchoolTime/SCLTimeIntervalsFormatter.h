@class SCLScheduleIntervalFormatter, NSListFormatter, NSLocale;

@interface SCLTimeIntervalsFormatter : NSFormatter

@property (readonly, nonatomic) SCLScheduleIntervalFormatter *intervalFormatter;
@property (readonly, nonatomic) NSListFormatter *listFormatter;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL prefersHoursOnly;
@property (nonatomic) unsigned long long intervalFormattingStyle;

- (void)setLocale:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (id)locale;
- (void).cxx_destruct;
- (id)init;
- (id)stringFromTimeIntervals:(id)a0;

@end
