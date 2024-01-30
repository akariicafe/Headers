@class NSTimer, NSDate;

@interface NADecayingTimer : NSObject

@property (readonly, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) unsigned long long minimumUnit;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSTimer *timer;

+ (id)scheduledTimerWithReferenceDate:(id)a0 minimumUnit:(unsigned long long)a1 block:(id /* block */)a2;

- (id)_nextFireDate;
- (void)_scheduleNextTimer;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithReferenceDate:(id)a0 minimumUnit:(unsigned long long)a1 block:(id /* block */)a2;
- (unsigned long long)_mostSignificantUnitForDateComponents:(id)a0;
- (void)_timerEvent;

@end
