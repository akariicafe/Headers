@class NSString, NSObject;
@protocol OS_dispatch_queue, CMWakeGestureDelegate;

@interface CMWakeGestureManager : NSObject {
    NSObject<OS_dispatch_queue> *fDispatchQ;
    BOOL gestureUpdatesStarted;
    struct Dispatcher { void /* function */ **x0; id x1; } *fWakeDispatcher;
    struct Dispatcher { void /* function */ **x0; id x1; } *fPowerStateDispatcher;
    struct unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor> > { struct __compressed_pair<CMWakeGestureVisitor *, std::__1::default_delete<CMWakeGestureVisitor> > { struct CMWakeGestureVisitor *__value_; } __ptr_; } fWakeGestureVisitor;
    long long fCurrentState;
    int fMeasureLatencyState;
    double fWakePacketTimestamp;
    struct IONotificationPort { } *fIoNotifyPort;
    unsigned int fIoNotification;
    unsigned int backlightService;
    double fLastNotificationTime;
    int fScreenDimmingNotificationToken;
    int fLockScreenToken;
    double fLastDisplayOnTime;
    NSString *fProcessName;
    BOOL fIsRunningInPrimaryProcess;
    BOOL fEnableLatencyAlert;
    BOOL fEnableAudioAlert;
    int fLatencyAlertThreshold;
    char fDisplayState;
    int fSelector;
    id<CMWakeGestureDelegate> fUpdatedDelegate;
    id<CMWakeGestureDelegate> fDelegate;
}

@property (nonatomic) id<CMWakeGestureDelegate> delegate;

+ (id)stringForViewPose:(unsigned char)a0;
+ (BOOL)hasSlowBootArgs;
+ (BOOL)isWakeGestureAvailable;
+ (id)stringForNotification:(unsigned char)a0;
+ (long long)toState:(unsigned char)a0;
+ (BOOL)isWakeGestureOverrideEnabled;
+ (id)stringForMode:(unsigned char)a0;
+ (id)sharedManager;
+ (id)stringForGestureState:(long long)a0;
+ (unsigned char)toRaw:(long long)a0;
+ (id)stringForStartPose:(unsigned char)a0;

- (void)playAlert;
- (void)forceDetected;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)logWakeLatency;
- (void)startWakeGestureUpdates;
- (void)onBacklightServiceUpdated:(unsigned int)a0;
- (void)dealloc;
- (BOOL)simulateGestureWithDelay:(double)a0 Duration:(double)a1;
- (void)invokeDelegateWithState:(long long)a0;
- (void)loadPreferences;
- (void)onNotificationControl:(id)a0;
- (void)onPowerStateUpdated:(const struct Sample { unsigned int x0; } *)a0;
- (id).cxx_construct;
- (void)stopWakeGestureUpdates;
- (void)simulateGesture:(long long)a0 after:(double)a1;
- (void)reenableDetectedStateRecognition;
- (void)onWakeUpdated:(const struct Sample { unsigned long long x0; struct GestureReport *x1; } *)a0;
- (void)sendWakeTriggerAnalytics:(unsigned char)a0 withDisplay:(int)a1;

@end
