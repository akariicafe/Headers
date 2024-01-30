@class MTAlarm, NSMutableArray;

@interface MTAlarmCache : NSObject

@property (copy, nonatomic) id /* block */ updateBlock;
@property (retain, nonatomic) NSMutableArray *orderedAlarms;
@property (retain, nonatomic) NSMutableArray *sleepAlarms;
@property (retain, nonatomic) MTAlarm *nextAlarm;
@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } cacheLock;

- (void)getCachedAlarmsWithCompletion:(id /* block */)a0;
- (void)_getCachedAlarmsWithCompletion:(id /* block */)a0 doSynchronous:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)_isUpdateNeeded;
- (void)_withLock:(id /* block */)a0;
- (void)getCachedAlarmsSyncWithCompletion:(id /* block */)a0;
- (void)markNeedsUpdate;
- (id)initWithUpdateBlock:(id /* block */)a0;

@end
