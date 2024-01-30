@class NSTimeZone, NSCalendar, NSLocale;

@interface BaseDateProvider : NSObject

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSTimeZone *timeZone;

- (id)updateInterval;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 andRemovingDesignator:(BOOL)a1 designatorExists:(BOOL *)a2;
- (id)formattedString;
- (void).cxx_destruct;
- (void)_endSession;
- (void)_startSessionWithDate:(id)a0;
- (long long)_updateFrequency;
- (id)_sessionTextForIndex:(long long)a0;
- (id)initWithCalendar:(id)a0 locale:(id)a1 timeZone:(id)a2;
- (id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)a0;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 designatorExists:(BOOL *)a1;

@end
