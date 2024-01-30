@class NSString, HDSPEnvironment;
@protocol HDSPBiomeInterface;

@interface HDSPBiomeManager : NSObject <HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPEnvironmentAware>

@property (readonly, nonatomic) id<HDSPBiomeInterface> biomeInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

+ (unsigned long long)biomeSleepModeStateForSleepModeState:(long long)a0;
+ (unsigned long long)biomeSleepModeChangeReasonForSleepModeChangeReason:(unsigned long long)a0;
+ (id)sleepModePublisher;

- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (id)subscribe:(id)a0 callback:(id /* block */)a1;
- (void)_writeSleepModeToBiome:(long long)a0 reason:(unsigned long long)a1;
- (void)unsubscribe:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (id)initWithEnvironment:(id)a0 biomeInterface:(id)a1;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;

@end
