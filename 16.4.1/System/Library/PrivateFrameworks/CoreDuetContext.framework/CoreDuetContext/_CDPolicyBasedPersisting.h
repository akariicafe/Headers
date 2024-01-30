@protocol _CDContextPersisting;

@interface _CDPolicyBasedPersisting : NSObject <_CDContextPersisting>

@property (readonly, nonatomic) id<_CDContextPersisting> persistenceSurvivingReboot;
@property (readonly, nonatomic) id<_CDContextPersisting> persistenceSurvivingRelaunch;

+ (id)persistenceWithPersistenceSurvivingReboot:(id)a0 persistenceSurvivingRelaunch:(id)a1;

- (void)saveValue:(id)a0 forKeyPath:(id)a1;
- (void)deleteAllData;
- (id)loadValues;
- (void)deleteRegistration:(id)a0;
- (void)deleteDataCreatedBefore:(id)a0;
- (id)initWithPersistenceSurvivingReboot:(id)a0 persistenceSurvivingRelaunch:(id)a1;
- (void).cxx_destruct;
- (id)loadRegistrations;
- (void)saveRegistration:(id)a0;

@end
