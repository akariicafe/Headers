@class NSString, NSDateComponents, NSDate, NSDateComponentsFormatter;

@interface CLKRelativeDateTextProvider : CLKTextProvider {
    NSDateComponentsFormatter *_formatter;
    NSDateComponents *_sessionComponents;
    unsigned long long _sessionVisibleUnits;
    NSString *_sessionCacheKey;
    long long _sessionTimePeriod;
    double _elapsedTime;
    BOOL _sessionInProgress;
}

@property (retain, nonatomic) NSDate *overrideDate;
@property (nonatomic) BOOL disableSmallCapUnits;
@property (nonatomic) BOOL shrinkUnitsInCJK;
@property (nonatomic) BOOL disableOffsetPrefix;
@property (nonatomic) BOOL twoDigitMinuteZeroPadding;
@property (nonatomic) BOOL showLeadingMinutes;
@property (nonatomic) BOOL wantsSubseconds;
@property (nonatomic) BOOL pauseTimerAtZero;
@property (nonatomic) long long tritiumDateStyle;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *relativeToDate;
@property (nonatomic) long long relativeDateStyle;
@property (nonatomic) unsigned long long calendarUnits;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_configureFormatter:(id)a0 fallbackIndex:(unsigned long long)a1 style:(long long)a2;
+ (id)textProviderWithDate:(id)a0 style:(long long)a1 units:(unsigned long long)a2;
+ (id)textProviderWithDate:(id)a0 relativeToDate:(id)a1 style:(long long)a2 units:(unsigned long long)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)_validate;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)finalize;
- (void)_endSession;
- (void)_startSessionWithDate:(id)a0;
- (long long)_updateFrequency;
- (BOOL)_timerIsPausedAtZero;
- (long long)_timePeriodForElapsedTime:(double)a0;
- (id)_componentsForDate:(id)a0 visibleUnits:(unsigned long long *)a1;
- (void)_configureFormatterForTimerStyle;
- (void)encodeWithCoder:(id)a0;
- (id)_signPrefixString;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)_sessionCacheKey;
- (id)initWithDate:(id)a0 relativeToDate:(id)a1 style:(long long)a2 units:(unsigned long long)a3;
- (id)initWithDate:(id)a0 style:(long long)a1 units:(unsigned long long)a2;

@end
