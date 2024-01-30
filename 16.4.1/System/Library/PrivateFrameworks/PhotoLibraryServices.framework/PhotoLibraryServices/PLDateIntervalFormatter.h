@class NSLocale, NSCalendar, NSDateIntervalFormatter;

@interface PLDateIntervalFormatter : NSObject

@property (readonly, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter;
@property (readonly, nonatomic) NSCalendar *gmtCalendar;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL alwaysShowYear;

+ (id)_currentLocalDate;
+ (id)_dateFormatForDateFormatterType:(unsigned long long)a0 displayYear:(BOOL)a1 displayLongMonth:(BOOL)a2;
+ (id)stringFromStartDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2;
+ (id)stringFromStartDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2 showLongMonthFormatIfNeeded:(BOOL)a3;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_yearIsNeededForDisplayingDate:(id)a0;
- (id)stringFromStartDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2;
- (id)stringFromStartDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2 showLongMonthFormatIfNeeded:(BOOL)a3;

@end
