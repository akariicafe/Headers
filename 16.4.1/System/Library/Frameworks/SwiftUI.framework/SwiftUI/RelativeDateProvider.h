@class NSDateInterval, NSDate, NSDateComponents, NSDateComponentsFormatter;

@interface RelativeDateProvider : BaseDateProvider {
    double _elapsedTime;
    NSDateComponents *_sessionComponents;
    long long _sessionTimePeriod;
    unsigned long long _sessionVisibleUnits;
    BOOL _sessionInProgress;
    NSDate *_mostRecentSessionDate;
}

@property (class, readonly, nonatomic) double noPause;

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long calendarUnits;
@property (nonatomic) long long relativeDateStyle;
@property (retain, nonatomic) NSDateComponentsFormatter *formatter;
@property (nonatomic) BOOL disableOffsetPrefix;
@property (retain, nonatomic) NSDateInterval *interval;
@property (nonatomic) BOOL countdown;
@property (nonatomic) double pause;
@property (nonatomic) unsigned long long lowFidelityTimerStyle;
@property (nonatomic) BOOL twoDigitMinuteZeroPadding;
@property (nonatomic) BOOL wantsSubseconds;
@property (nonatomic) BOOL showLeadingMinutes;
@property (nonatomic) BOOL pauseTimerAtZero;

+ (BOOL)_configureFormatter:(id)a0 fallbackIndex:(unsigned long long)a1 style:(long long)a2 context:(id)a3;

- (id)_sessionTextForIndex:(long long)a0 context:(id)a1;
- (long long)updateType;
- (void)_endSession;
- (void).cxx_destruct;
- (void)_configureFormatterForTimerStyle;
- (id)_componentsForDate:(id)a0 visibleUnits:(unsigned long long *)a1;
- (id)_signPrefixString;
- (void)_startSessionWithDate:(id)a0;
- (long long)_timePeriodForElapsedTime:(double)a0;
- (BOOL)_timerIsPausedAtZero;
- (long long)_updateFrequency;
- (id)componentsForGameClock:(id)a0 units:(unsigned long long)a1;
- (double)elapsedTimeForGameClock:(id)a0;
- (id)initWithDate:(id)a0 style:(long long)a1 units:(unsigned long long)a2 calendar:(id)a3 locale:(id)a4 timeZone:(id)a5;
- (id)initWithInterval:(id)a0 countdown:(BOOL)a1 pause:(double)a2 units:(unsigned long long)a3 calendar:(id)a4 locale:(id)a5 timeZone:(id)a6;
- (id)timerEndDate;

@end
