@class NSString, NSRelativeDateTimeFormatter, NSDate, NSDateComponents, NSDateComponentsFormatter;

@interface CLKRelativeDateTextProvider : CLKTextProvider {
    NSDateComponentsFormatter *_formatter;
    NSRelativeDateTimeFormatter *_relativeDateTimeFormatter;
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
+ (id)textProviderWithDate:(id)a0 style:(long long)a1 units:(unsigned long long)a2;
+ (BOOL)_configureComponentsFormatter:(id)a0 fallbackIndex:(unsigned long long)a1 style:(long long)a2;
+ (BOOL)_configureRelativeFormatter:(id)a0 fallbackIndex:(unsigned long long)a1 style:(long long)a2;
+ (id)textProviderWithDate:(id)a0 relativeToDate:(id)a1 style:(long long)a2 units:(unsigned long long)a3;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)finalize;
- (id)description;
- (void).cxx_destruct;
- (void)_endSession;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_validate;
- (void)_configureFormatterForTimerStyle;
- (id)_componentsForDate:(id)a0 visibleUnits:(unsigned long long *)a1;
- (id)_signPrefixString;
- (void)_startSessionWithDate:(id)a0;
- (long long)_timePeriodForElapsedTime:(double)a0;
- (BOOL)_timerIsPausedAtZero;
- (long long)_updateFrequency;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)_sessionCacheKey;
- (id)initWithDate:(id)a0 relativeToDate:(id)a1 style:(long long)a2 units:(unsigned long long)a3;
- (id)initWithDate:(id)a0 style:(long long)a1 units:(unsigned long long)a2;

@end
