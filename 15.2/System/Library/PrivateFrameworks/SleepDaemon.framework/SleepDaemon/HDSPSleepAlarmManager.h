@class NSString, HDSPEnvironment;
@protocol HDSPSource, HDSPSleepAlarmProvider;

@interface HDSPSleepAlarmManager : NSObject <HDSPSource, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver>

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

- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0 sleepAlarmProvider:(id)a1;
- (id)initWithEnvironment:(id)a0;
- (id)currentSleepAlarmWithIdentifier:(id)a0;
- (void)resetSleepAlarmSnoozeState;
- (id)currentSleepAlarms;

@end
