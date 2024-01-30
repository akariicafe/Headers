@class TIKeyboardApplicationStateMonitor, NSString, NSTimer, NSHashTable, NSObject;
@protocol OS_os_transaction, OS_dispatch_source;

@interface TIKeyboardActivityController : NSObject <TIKeyboardAssertionManagerDelegate, TIKeyboardActivityControlling, TIKeyboardApplicationStateResponses> {
    BOOL _hadRecentActivity;
    BOOL _hasBackgroundActivity;
    unsigned long long _activityState;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    long long _inactiveMemoryPressureCount;
}

@property (nonatomic) BOOL isDirty;
@property (retain, nonatomic) NSObject<OS_os_transaction> *isDirtyTransaction;
@property (retain, nonatomic) NSTimer *inactivityTimer;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) TIKeyboardApplicationStateMonitor *appMonitor;
@property (readonly, nonatomic) unsigned long long activityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultKeyboardIdleTimeoutInterval;
+ (void)setSharedController:(id)a0;
+ (double)keyboardIdleTimeoutInterval;
+ (void)setKeyboardIdleTimeoutInterval:(double)a0;
+ (id)singletonInstance;
+ (id)sharedController;

- (void)generateMemgraphsIfNeeded;
- (void)handleMemoryStatusPressure:(unsigned long long)a0;
- (unsigned long long)getExcessMemoryInBytes;
- (void)touchInactivityTimer;
- (BOOL)shouldBecomeClean;
- (void)setKeyboardDirtyIfNecessaryWithReason:(id)a0;
- (void)addActivityObserver:(id)a0;
- (BOOL)canGoEarlyClean;
- (id)createMemoryPressureSource;
- (void)dealloc;
- (void)keyboardAssertionsDidChange;
- (void)updateActivityState;
- (BOOL)atexitHandler;
- (BOOL)shouldBecomeDirty;
- (void)setKeyboardCleanIfNecessary;
- (void)inactivityTimerFired:(id)a0;
- (id)init;
- (void)notifyTransitionWithContext:(id)a0;
- (void)notifyMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (void)releaseInputManagers;
- (void)backgroundActivityAssertionsDidChange;
- (void).cxx_destruct;
- (void)removeActivityObserver:(id)a0;

@end
