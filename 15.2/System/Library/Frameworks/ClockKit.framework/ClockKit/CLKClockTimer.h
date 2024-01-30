@class NSCalendar, CADisplayLink, NSHashTable, NSDate, NSObject;
@protocol OS_dispatch_source;

@interface CLKClockTimer : NSObject {
    CADisplayLink *_displayLink;
    NSHashTable *_handlersByUpdateFrequency[5];
    NSHashTable *_allHandlers;
    unsigned long long _nextToken;
    NSDate *_lastNow;
    long long _lastHour;
    long long _lastMinute;
    long long _lastSecond;
    long long _last15fps;
    long long _last30fps;
    long long _last60fps;
    BOOL _paused;
    BOOL _isForeground;
    BOOL _backlightOn;
    BOOL _permittedToRun;
    NSObject<OS_dispatch_source> *_signalSource;
    NSDate *_waitTimerScheduledFireTime;
    NSObject<OS_dispatch_source> *_waitForNextEventTimer;
    NSCalendar *_calendar;
}

@property (nonatomic) BOOL ignoreScreenState;

+ (id)sharedInstance;
+ (id)now;
+ (void)_forceDate:(id)a0;

- (void)_updateDisplayLink;
- (void)_onDisplayLink:(id)a0;
- (void)unpause;
- (void).cxx_destruct;
- (id)init;
- (void)pause;
- (void)dealloc;
- (void)_handleTimePassed;
- (id)startUpdatesWithUpdateFrequency:(long long)a0 withHandler:(id /* block */)a1 identificationLog:(id /* block */)a2;
- (void)stopUpdatesForToken:(id)a0;
- (void)_dumpIndentificationLogs;
- (id)_nextTokenWithUpdateFrequency:(long long)a0 wantsCommit:(BOOL)a1 wantsHighAccuracy:(BOOL)a2 identificationLog:(id /* block */)a3 handler:(id /* block */)a4;
- (void)_maybeClearLastSeenTimeComponents;
- (double)_timeUntilNextHighAccuracyEventFromHour:(long long)a0 minute:(long long)a1 second:(long long)a2 nanosecond:(long long)a3;
- (void)_createDisplayLinkIfNeeded;
- (BOOL)_hasHandlers;
- (void)_cancelWaitTimer;
- (void)_setDisplayLinkFrameInterval:(long long)a0;
- (double)_timeUntilNextHighAccuracyEventFromNow;
- (long long)_minimumPossibleUpdateFrequency;
- (void)_updateDisplayLinkWithTimeUntilNextHighAccuracyEvent:(double)a0 withMinimumUpdateFrequency:(long long)a1;
- (void)_updateIsPermittedToRun;
- (void)setHandler:(id)a0 wantsCommit:(BOOL)a1;
- (id)startMinuteUpdatesWithHandler:(id /* block */)a0 identificationLog:(id /* block */)a1;
- (id)startSecondUpdatesWithHandler:(id /* block */)a0 identificationLog:(id /* block */)a1;
- (id)start15fpsUpdatesWithHandler:(id /* block */)a0 identificationLog:(id /* block */)a1;
- (id)start30fpsUpdatesWithHandler:(id /* block */)a0 identificationLog:(id /* block */)a1;
- (id)start60fpsUpdatesWithHandler:(id /* block */)a0 identificationLog:(id /* block */)a1;

@end
