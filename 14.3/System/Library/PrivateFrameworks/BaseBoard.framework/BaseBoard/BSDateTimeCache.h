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

- (double)today;
- (id)init;
- (void)dealloc;
- (double)tomorrow;
- (double)prevWeek;
- (double)nextWeek;
- (BOOL)isToday:(double)a0;
- (void)_resetAndConfigure;
- (BOOL)isWithinPrevWeek:(double)a0 includeToday:(BOOL)a1;
- (BOOL)isYesterday:(double)a0;
- (BOOL)isWithinPrevWeek:(double)a0;
- (BOOL)isWithinNextWeek:(double)a0;
- (id)description;
- (double)yesterday;
- (BOOL)isTomorrow:(double)a0;

@end
