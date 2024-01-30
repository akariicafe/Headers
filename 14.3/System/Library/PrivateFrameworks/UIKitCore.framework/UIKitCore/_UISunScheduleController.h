@class NSTimer, NSMapTable, GEOAlmanac;

@interface _UISunScheduleController : NSObject {
    NSMapTable *_observers;
    GEOAlmanac *_almanac;
    BOOL _hasTimeZoneLocation;
    struct { double latitude; double longitude; } _timeZoneLocation;
    BOOL _inScheduleTime;
    NSTimer *_nextEventTimer;
    double _sunsetAbsolute;
    double _sunriseAbsolute;
}

@property (readonly, nonatomic, getter=isInScheduleTime) BOOL inScheduleTime;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)_timeZoneChange;
- (void)_updateGeoCity;
- (void)_invalidateNextEventTimer;
- (void)_updateStatusWithAbsoluteTime:(double)a0;
- (void)_updateSunriseSunsetTimesRelativeTo:(double)a0;
- (void)_updateInScheduleTime:(BOOL)a0;
- (void)_setNextEventTimerToAbsoluteTime:(double)a0;
- (void)_updateStatus;
- (void)_notifyChange;
- (void)_significantTimeChange;
- (id)nextTransition:(BOOL)a0;
- (void)forceUpdate;
- (void)addObserver:(id)a0 changeHandler:(id /* block */)a1;

@end
