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

- (BOOL)isDemoEnvironment;
- (id)demoEventRecord;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (void)environmentDidBecomeReady;
- (id)demoSleepSchedule;
- (id)init;
- (id)demoSleepSettings;
- (id)demoScheduleModel;
- (void)setInitialSchedule;
- (void)resetDemoMode;

@end
