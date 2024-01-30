@class NSString, HDSPEnvironment;
@protocol HDSPWakeDetectorDelegate;

@interface HDSPSleepModeExitDetector : NSObject <HDSPSleepModeObserver, HDSPWakeDetector, HDSPEnvironmentAware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isDetecting;
@property (readonly, nonatomic) unsigned long long detectionWindowMinutes;
@property (weak, nonatomic) id<HDSPWakeDetectorDelegate> wakeDetectorDelegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)environmentDidBecomeReady:(id)a0;
- (void)stopDetecting;
- (void).cxx_destruct;
- (void)startDetecting;
- (id)initWithEnvironment:(id)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;

@end
