@class NSDate, NSHashTable;

@interface HFExecutionEnvironment : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) NSDate *appForegroundStartTime;
@property (readonly, nonatomic) unsigned long long runningState;
@property (readonly, nonatomic) long long hostProcess;

+ (id)sharedInstance;
+ (id)stringForHFExecutionEnvironmentRunningState:(unsigned long long)a0;
+ (BOOL)isWatchApp;
+ (BOOL)isHomeUIService;
+ (BOOL)isHomeControlService;
+ (BOOL)isCarousel;
+ (BOOL)isSettings;
+ (BOOL)isHomeApp;
+ (BOOL)isSpringBoard;

- (id)init;
- (void).cxx_destruct;
- (void)_recordMetricsForAppRunningState;
- (void)dispatchMessageToObserversWithBlock:(id /* block */)a0;
- (void)setRunningState:(unsigned long long)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)executionEnvironmentWillEnterForeground;
- (void)executionEnvironmentDidBecomeActive;
- (void)executionEnvironmentWillResignActive;
- (void)executionEnvironmentDidEnterBackground;

@end
