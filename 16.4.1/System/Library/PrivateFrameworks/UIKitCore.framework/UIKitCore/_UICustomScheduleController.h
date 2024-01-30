@class NSTimer, NSMapTable;

@interface _UICustomScheduleController : NSObject {
    NSMapTable *_observers;
    BOOL _inScheduleTime;
    NSTimer *_nextEventTimer;
}

@property (nonatomic) struct { struct { long long hour; long long minute; } beginTime; struct { long long hour; long long minute; } endTime; } schedule;
@property (readonly, nonatomic, getter=isInScheduleTime) BOOL inScheduleTime;

- (void)_significantTimeChange;
- (void)forceUpdate;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateStatus:(BOOL)a0;
- (id)nextTransition:(BOOL)a0;
- (void)_notifyChange;
- (void)_updateTimeMonitoring;
- (void)_updateTimeMonitoring:(BOOL)a0;
- (void)_updateWithDate:(id)a0;
- (void)addObserver:(id)a0 changeHandler:(id /* block */)a1;

@end
