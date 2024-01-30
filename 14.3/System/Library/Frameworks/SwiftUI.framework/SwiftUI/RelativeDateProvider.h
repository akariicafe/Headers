@class NSDateComponents, NSDateComponentsFormatter, NSDate;

@interface RelativeDateProvider : BaseDateProvider {
    double _elapsedTime;
    NSDateComponents *_sessionComponents;
    long long _sessionTimePeriod;
    unsigned long long _sessionVisibleUnits;
    BOOL _sessionInProgress;
    NSDate *_mostRecentSessionDate;
}

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *relativeDate;
@property (nonatomic) unsigned long long calendarUnits;
@property (nonatomic) long long relativeDateStyle;
@property (retain, nonatomic) NSDateComponentsFormatter *formatter;
@property (nonatomic) BOOL disableOffsetPrefix;
@property (nonatomic) BOOL twoDigitMinuteZeroPadding;
@property (nonatomic) BOOL wantsSubseconds;
@property (nonatomic) BOOL showLeadingMinutes;
@property (nonatomic) BOOL pauseTimerAtZero;

+ (BOOL)_configureFormatter:(id)a0 fallbackIndex:(unsigned long long)a1 style:(long long)a2;

- (id)formattedString;
- (void).cxx_destruct;
- (void)_endSession;
- (void)_startSessionWithDate:(id)a0;
- (long long)_updateFrequency;
- (id)_sessionTextForIndex:(long long)a0;
- (BOOL)_timerIsPausedAtZero;
- (id)initWithDate:(id)a0 relativeToDate:(id)a1 units:(unsigned long long)a2 style:(long long)a3 calendar:(id)a4 locale:(id)a5;
- (long long)_timePeriodForElapsedTime:(double)a0;
- (id)_componentsForDate:(id)a0 visibleUnits:(unsigned long long *)a1;
- (void)_configureFormatterForTimerStyle;
- (id)_signPrefixString;
- (id)initWithDate:(id)a0 units:(unsigned long long)a1 style:(long long)a2 calendar:(id)a3 locale:(id)a4;

@end
