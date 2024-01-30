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
+ (double)defaultDuration;
+ (void)setDefaultDuration:(double)a0;

- (id)timers;
- (id)removeTimer:(id)a0;
- (void)checkIn;
- (BOOL)resumeCurrentTimerSync;
- (id)dismissTimerWithIdentifier:(id)a0;
- (id)addTimer:(id)a0;
- (id)updateTimer:(id)a0;
- (id)_updateTimer:(id)a0 doSynchronous:(BOOL)a1;
- (id)resumeCurrentTimer;
- (BOOL)_updateCurrentTimerWithStateSync:(unsigned long long)a0;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)timersSync;
- (id)nextTimer;
- (void).cxx_destruct;
- (BOOL)stopCurrentTimerSync;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1;
- (id)startCurrentTimerWithDuration:(double)a0;
- (id)_validateCanStartTimer:(id)a0;
- (id)init;
- (id)_updateCurrentTimerWithState:(unsigned long long)a0;
- (id)repeatTimerWithIdentifier:(id)a0;
- (BOOL)pauseCurrentTimerSync;
- (void)reconnect;
- (id)stopCurrentTimer;
- (void)dealloc;
- (id)nextTimersForDate:(id)a0 maxCount:(unsigned long long)a1;
- (id)pauseCurrentTimer;
- (id)initWithMetrics:(id)a0;
- (id)getCurrentTimerSync;
- (id)currentTimer;
- (id)_runningTimerFromCurrentTimer:(id)a0 withDuration:(double)a1;
- (void)_getCachedTimersWithFuture:(id)a0 finishBlock:(id /* block */)a1;
- (BOOL)startCurrentTimerWithDurationSync:(double)a0;

@end
