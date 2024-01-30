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

- (double)yesterday;
- (BOOL)isToday:(double)a0;
- (double)nextWeek;
- (void)_resetAndConfigure;
- (double)today;
- (BOOL)isYesterday:(double)a0;
- (void)dealloc;
- (BOOL)isWithinNextWeek:(double)a0;
- (double)prevWeek;
- (double)tomorrow;
- (BOOL)isTomorrow:(double)a0;
- (id)init;
- (BOOL)isWithinPrevWeek:(double)a0;
- (id)description;
- (BOOL)isWithinPrevWeek:(double)a0 includeToday:(BOOL)a1;

@end
