@class NSString, HDSPEnvironment;
@protocol HDSPWakeDetectorDelegate;

@interface HDSPSleepScreenUnlockDetector : NSObject <HDSPSleepActionObserver, HDSPSleepModeObserver, HDSPWakeDetector, HDSPEnvironmentAware>

@property (nonatomic) unsigned long long numberOfTimesDismissed;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dismissCounterLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isDetecting;
@property (readonly, nonatomic) unsigned long long detectionWindowMinutes;
@property (weak, nonatomic) id<HDSPWakeDetectorDelegate> wakeDetectorDelegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)environmentDidBecomeReady:(id)a0;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)_resetCounter;
- (void)sleepLockWasDismissed:(id)a0;
- (void)startDetecting;
- (void)stopDetecting;

@end
