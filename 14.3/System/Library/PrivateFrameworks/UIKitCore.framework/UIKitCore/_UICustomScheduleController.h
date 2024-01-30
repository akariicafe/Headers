@class NSTimer, NSMapTable;

@interface _UICustomScheduleController : NSObject {
    NSMapTable *_observers;
    BOOL _inScheduleTime;
    NSTimer *_nextEventTimer;
}

@property (nonatomic) struct { struct { long long hour; long long minute; } beginTime; struct { long long hour; long long minute; } endTime; } schedule;
@property (readonly, nonatomic, getter=isInScheduleTime) BOOL inScheduleTime;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)_notifyChange;
- (void)_significantTimeChange;
- (id)nextTransition:(BOOL)a0;
- (void)forceUpdate;
- (void)_updateTimeMonitoring:(BOOL)a0;
- (void)_updateWithDate:(id)a0;
- (void)_updateTimeMonitoring;
- (void)addObserver:(id)a0 changeHandler:(id /* block */)a1;
- (void)_updateStatus:(BOOL)a0;

@end
