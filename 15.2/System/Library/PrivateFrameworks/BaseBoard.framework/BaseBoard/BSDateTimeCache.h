@interface BSDateTimeCache : NSObject {
    double _yesterday;
    double _today;
    double _tomorrow;
    double _2daysFromNow;
    double _6daysAgo;
    double _prevWeek;
    double _nextWeek;
    double _lastAttemptedResetTime;
    double _lastSuccessfulResetTime;
    BOOL _isResetting;
}

+ (id)sharedInstance;

- (BOOL)isWithinPrevWeek:(double)a0 includeToday:(BOOL)a1;
- (double)tomorrow;
- (BOOL)isWithinNextWeek:(double)a0;
- (double)prevWeek;
- (id)description;
- (double)today;
- (id)init;
- (BOOL)isToday:(double)a0;
- (double)nextWeek;
- (BOOL)isTomorrow:(double)a0;
- (void)_resetAndConfigure;
- (void)dealloc;
- (BOOL)isYesterday:(double)a0;
- (BOOL)isWithinPrevWeek:(double)a0;
- (double)yesterday;

@end
