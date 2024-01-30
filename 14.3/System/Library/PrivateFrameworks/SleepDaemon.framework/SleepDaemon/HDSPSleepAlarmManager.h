@class NSString, HDSPEnvironment, HKSPObserverSet;
@protocol HDSPSource, HDSPSleepAlarmProvider;

@interface HDSPSleepAlarmManager : NSObject <HDSPSource, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver>

@property (readonly, nonatomic) HKSPObserverSet *sleepAlarmObservers;
@property (readonly, nonatomic) id<HDSPSleepAlarmProvider> sleepAlarmProvider;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, nonatomic) id<HDSPSource> targetSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 source:(id)a1 didUpdateSleepScheduleModel:(id)a2;
- (id)initWithEnvironment:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithEnvironment:(id)a0 sleepAlarmProvider:(id)a1;
- (id)currentSleepAlarms;
- (void)environmentWillBecomeReady:(id)a0;
- (id)currentSleepAlarmWithIdentifier:(id)a0;
- (void)resetSleepAlarmSnoozeState;

@end
