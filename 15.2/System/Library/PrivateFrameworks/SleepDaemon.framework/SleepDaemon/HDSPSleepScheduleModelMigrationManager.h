@class NSString, HDSPEnvironment;
@protocol NAScheduler, HDSPSource;

@interface HDSPSleepScheduleModelMigrationManager : NSObject <HDSPSource, HDSPEnvironmentAware>

@property (readonly, nonatomic) id<NAScheduler> scheduler;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, nonatomic) id<HDSPSource> targetSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (id)performDataMigration;
- (id)_migrateSleepFocusMode;
- (id)_migrateOnboardingSettings;
- (id)_migrateSleepScheduleFromMobileTimer;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0 scheduler:(id)a1;
- (id)initWithEnvironment:(id)a0;
- (BOOL)needDataMigration;

@end
