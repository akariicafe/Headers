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

+ (id)singletonInstance;
+ (void)setKeyboardIdleTimeoutInterval:(double)a0;
+ (double)defaultKeyboardIdleTimeoutInterval;
+ (void)setSharedController:(id)a0;
+ (double)keyboardIdleTimeoutInterval;
+ (id)sharedController;

- (void)removeActivityObserver:(id)a0;
- (void)keyboardAssertionsDidChange;
- (id)init;
- (void).cxx_destruct;
- (void)backgroundActivityAssertionsDidChange;
- (void)dealloc;
- (unsigned long long)getExcessMemoryInBytes;
- (BOOL)shouldBecomeDirty;
- (id)createMemoryPressureSource;
- (BOOL)atexitHandler;
- (BOOL)canGoEarlyClean;
- (void)notifyTransitionWithContext:(id)a0;
- (void)inactivityTimerFired:(id)a0;
- (void)notifyMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (void)releaseInputManagers;
- (void)touchInactivityTimer;
- (void)addActivityObserver:(id)a0;
- (BOOL)shouldBecomeClean;
- (void)handleMemoryStatusPressure:(unsigned long long)a0;
- (void)updateActivityState;
- (void)setKeyboardDirtyIfNecessaryWithReason:(id)a0;
- (void)setKeyboardCleanIfNecessary;

@end
