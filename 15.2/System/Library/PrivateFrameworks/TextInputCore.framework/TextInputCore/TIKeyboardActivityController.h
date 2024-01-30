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

+ (void)setKeyboardIdleTimeoutInterval:(double)a0;
+ (id)singletonInstance;
+ (id)sharedController;
+ (void)setSharedController:(id)a0;
+ (double)keyboardIdleTimeoutInterval;
+ (double)defaultKeyboardIdleTimeoutInterval;

- (BOOL)shouldBecomeClean;
- (void)notifyMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (void)touchInactivityTimer;
- (void)removeActivityObserver:(id)a0;
- (void)releaseInputManagers;
- (unsigned long long)getExcessMemoryInBytes;
- (void)inactivityTimerFired:(id)a0;
- (void)updateActivityState;
- (void)addActivityObserver:(id)a0;
- (void).cxx_destruct;
- (void)setKeyboardCleanIfNecessary;
- (id)init;
- (void)handleMemoryStatusPressure:(unsigned long long)a0;
- (void)keyboardAssertionsDidChange;
- (BOOL)atexitHandler;
- (void)setKeyboardDirtyIfNecessaryWithReason:(id)a0;
- (void)notifyTransitionWithContext:(id)a0;
- (void)dealloc;
- (BOOL)shouldBecomeDirty;
- (id)createMemoryPressureSource;
- (BOOL)canGoEarlyClean;
- (void)backgroundActivityAssertionsDidChange;

@end
