@class NSLocale, NSCalendar, NSDateIntervalFormatter;

@interface PLDateIntervalFormatter : NSObject

@property (readonly, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter;
@property (readonly, nonatomic) NSCalendar *gmtCalendar;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL alwaysShowYear;

+ (id)stringFromStartDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2;
+ (id)stringFromStartDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2 showLongMonthFormatIfNeeded:(BOOL)a3;
+ (id)_currentLocalDate;
+ (id)_dateFormatForDateFormatterType:(unsigned long long)a0 displayYear:(BOOL)a1 displayLongMonth:(BOOL)a2;

- (void).cxx_destruct;
- (id)init;
- (id)stringFromStartDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2;
- (id)stringFromStartDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2 showLongMonthFormatIfNeeded:(BOOL)a3;
- (BOOL)_yearIsNeededForDisplayingDate:(id)a0;

@end
