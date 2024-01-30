@class NSString, HDSPEnvironment;

@interface HDSPSleepScheduleModelMigrationManager : NSObject <HDSPSource, HDSPEnvironmentAware>

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (BOOL)needDataMigration;
- (id)initWithEnvironment:(id)a0;
- (id)_migrateHomeScreenPage;
- (id)_migrateSleepFocus;
- (id)_migrateToCloudKit;
- (id)_migrateSleepScheduleFromMobileTimer;
- (id)_migrateOnboardingSettings;
- (id)performDataMigration;
- (void).cxx_destruct;

@end
