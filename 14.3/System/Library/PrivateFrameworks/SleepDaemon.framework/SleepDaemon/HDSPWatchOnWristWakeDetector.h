@class NSString, HDSPEnvironment;
@protocol HDSPWakeDetectorDelegate;

@interface HDSPWatchOnWristWakeDetector : NSObject <HDSPWatchOnWristObserver, HDSPWakeDetector, HDSPEnvironmentAware>

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
- (void)startDetecting;
- (void)stopDetecting;
- (id)onWristMonitor;
- (void)detectedOnWristOnDate:(id)a0;
- (void)detectedOffWristOnDate:(id)a0;

@end
