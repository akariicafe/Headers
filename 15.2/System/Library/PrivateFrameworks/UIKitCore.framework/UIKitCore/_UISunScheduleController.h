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

- (void)removeObserver:(id)a0;
- (void)_notifyChange;
- (void)forceUpdate;
- (void)addObserver:(id)a0 changeHandler:(id /* block */)a1;
- (id)nextTransition:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_updateGeoCity;
- (void)_timeZoneChange;
- (void)_invalidateNextEventTimer;
- (void)_updateStatusWithAbsoluteTime:(double)a0;
- (void)_updateSunriseSunsetTimesRelativeTo:(double)a0;
- (void)_updateInScheduleTime:(BOOL)a0;
- (void)_setNextEventTimerToAbsoluteTime:(double)a0;
- (void)_significantTimeChange;
- (void)dealloc;
- (void)_updateStatus;

@end
