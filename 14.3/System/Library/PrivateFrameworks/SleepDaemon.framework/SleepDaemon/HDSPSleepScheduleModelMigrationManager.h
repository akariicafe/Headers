@class NSString, HDSPEnvironment;
@protocol HDSPSource;

@interface HDSPSleepScheduleModelMigrationManager : NSObject <HDSPNotificationObserver, HDSPSource, HDSPEnvironmentAware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, nonatomic) id<HDSPSource> targetSource;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (id)_migrateSleepScreen;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (void)environmentDidBecomeReady:(id)a0;
- (void).cxx_destruct;
- (BOOL)needDataMigration;
- (id)initWithEnvironment:(id)a0;
- (id)_migrateSleepDurationFromHealthKit;
- (id)migrateFromHealthKitIfNecessary;
- (id)performDataMigration;
- (void)migrateToMobileTimerIfNecessary;
- (id)_migrateSleepScheduleFromMobileTimer;
- (void)environmentWillBecomeReady:(id)a0;

@end
