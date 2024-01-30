@class NSString, MTXPCConnectionProvider, MTMetrics, NSNotificationCenter, MTTimerManagerExportedObject, MTTimerCache;
@protocol MTTimerManagerIntentSupport;

@interface MTTimerManager : NSObject <MTTimerManagerIntentSupport, MTTimerManagerProviding, MTUserDefaultNotificationObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MTTimerManagerIntentSupport> timerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MTTimerManagerExportedObject *exportedObject;
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider;
@property (retain, nonatomic) MTMetrics *metrics;
@property (retain, nonatomic) MTTimerCache *cache;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id notificationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)warmUp;
+ (void)setDefaultDuration:(double)a0;
+ (double)defaultDuration;

- (id)nextTimer;
- (void)checkIn;
- (id)timers;
- (void)reconnect;
- (id)stopCurrentTimer;
- (id)_updateTimer:(id)a0 doSynchronous:(BOOL)a1;
- (id)_updateCurrentTimerWithState:(unsigned long long)a0;
- (BOOL)stopCurrentTimerSync;
- (id)init;
- (id)addTimer:(id)a0;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1;
- (void).cxx_destruct;
- (id)resumeCurrentTimer;
- (id)getCurrentTimerSync;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)pauseCurrentTimer;
- (void)dealloc;
- (id)startCurrentTimerWithDuration:(double)a0;
- (id)repeatTimerWithIdentifier:(id)a0;
- (void)_getCachedTimersWithFuture:(id)a0 finishBlock:(id /* block */)a1;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)updateTimer:(id)a0;
- (id)_validateCanStartTimer:(id)a0;
- (BOOL)resumeCurrentTimerSync;
- (BOOL)startCurrentTimerWithDurationSync:(double)a0;
- (id)currentTimer;
- (id)_runningTimerFromCurrentTimer:(id)a0 withDuration:(double)a1;
- (id)nextTimersForDate:(id)a0 maxCount:(unsigned long long)a1;
- (id)dismissTimerWithIdentifier:(id)a0;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1;
- (BOOL)pauseCurrentTimerSync;
- (id)initWithMetrics:(id)a0;
- (id)timersSync;
- (BOOL)_updateCurrentTimerWithStateSync:(unsigned long long)a0;
- (id)removeTimer:(id)a0;

@end
