@class NSString;
@protocol HDSPSource;

@interface HDSPDemoModeEnvironment : HDSPEnvironment <HDSPNotificationObserver, HDSPSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, nonatomic) id<HDSPSource> targetSource;

- (void)environmentDidBecomeReady;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (BOOL)isDemoEnvironment;
- (id)init;
- (void)setInitialSchedule;
- (void)resetDemoMode;
- (id)demoScheduleModel;
- (id)demoSleepSchedule;
- (id)demoSleepSettings;
- (id)demoEventRecord;

@end
