@class NSArray, NSDateFormatter, NSDate;

@interface TimeIntervalProvider : BaseDateProvider {
    NSDateFormatter *_dateFormatter;
    NSArray *_fallbackSequence;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

- (id)_dateIntervalNarrowText;
- (id)_timeIntervalTextWithDropMinutes:(BOOL)a0 onlyStartDate:(BOOL)a1;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)_sessionTextForIndex:(long long)a0;
- (id)_startTimeFullText;
- (id)_stringByRemovingDesignatorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromString:(id)a1;
- (id)_timeIntervalDropMinutesText;
- (id)_dateIntervalWideText;
- (id)_textForSequenceItem:(long long)a0;
- (id)_dateIntervalTextWithNarrow:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfAnnontatedTime:(id)a0 matchingPattern:(id /* block */)a1;
- (id)_timeIntervalFullText;
- (void).cxx_destruct;
- (id)_fallbackSequence;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfDesignatorInAnnotatedTime:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfHoursInAnnotatedTime:(id)a0;
- (id)_startTimeDropMinutesText;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 locale:(id)a3 timeZone:(id)a4;

@end
