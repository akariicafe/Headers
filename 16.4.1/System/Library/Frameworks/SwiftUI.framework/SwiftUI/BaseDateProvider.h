@class NSTimeZone, NSCalendar, NSLocale, NSDate;

@interface BaseDateProvider : NSObject

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) long long updateType;
@property (readonly, nonatomic) unsigned long long updateWallClockAlignment;
@property (readonly, nonatomic) NSDate *timerEndDate;

- (id)_sessionTextForIndex:(long long)a0 context:(id)a1;
- (id)updateInterval;
- (id)formattedString;
- (void)_endSession;
- (void).cxx_destruct;
- (void)_startSessionWithDate:(id)a0;
- (id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)a0;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 andRemovingDesignator:(BOOL)a1 designatorExists:(BOOL *)a2;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 designatorExists:(BOOL *)a1;
- (long long)_updateFrequency;
- (id)formattedStringInContext:(id)a0;
- (id)initWithCalendar:(id)a0 locale:(id)a1 timeZone:(id)a2;

@end
