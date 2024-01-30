@class NSTimeZone, NSDateFormatter, NSArray, NSDate;

@interface CLKTimeIntervalTextProvider : CLKTextProvider {
    NSDateFormatter *_dateFormatter;
    NSArray *_fallbackSequence;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSTimeZone *timeZone;

+ (BOOL)supportsSecureCoding;
+ (id)finalizedTextProviderWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2;
+ (id)textProviderWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2;
+ (id)textProviderWithStartDate:(id)a0 endDate:(id)a1;
+ (id)finalizedTextProviderWithStartDate:(id)a0 endDate:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (unsigned long long)hash;
- (BOOL)_validate;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_fallbackSequence;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfAnnontatedTime:(id)a0 matchingPattern:(id /* block */)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfDesignatorInAnnotatedTime:(id)a0;
- (id)_stringByRemovingDesignatorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromString:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfHoursInAnnotatedTime:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2;
- (id)_attributedTextForSequenceItem:(long long)a0 style:(id)a1;
- (id)_timeIntervalFullAttributedTextWithStyle:(id)a0;
- (id)_timeIntervalDropMinutesAttributedTextWithStyle:(id)a0;
- (id)_startTimeFullAttributedTextWithStyle:(id)a0;
- (id)_startTimeDropMinutesAttributedTextWithStyle:(id)a0;
- (id)_dateIntervalWideAttributedTextWithStyle:(id)a0;
- (id)_dateIntervalNarrowAttributedTextWithStyle:(id)a0;
- (id)_timeIntervalAttributedTextWithStyle:(id)a0 dropMinutes:(BOOL)a1 onlyStartDate:(BOOL)a2;
- (id)_dateIntervalAttributedTextWithStyle:(id)a0 narrow:(BOOL)a1;

@end
