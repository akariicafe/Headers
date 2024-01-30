@class NSString, NSPersistentContainer, NSError;

@interface APOdmlFeatureStorage : NSObject

@property (nonatomic) int deploymentID;
@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSString *treatmentID;
@property (retain, nonatomic) NSString *trialNamespace;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSError *coreDataError;

- (id)initWithExperimentID:(id)a0 treatmentID:(id)a1 deploymentID:(int)a2 trialNamespace:(id)a3;
- (id)featureForName:(id)a0 backgroundContext:(id)a1;
- (void)setContainerDescriptionClient;
- (void)setContainerDescriptionDaemon;
- (id)featureForName:(id)a0;
- (id)featuresForName:(id)a0 fetchLimit:(unsigned long long)a1 backgroundContext:(id)a2;
- (void)makeApplicationSupportDirectory;
- (void)initializeCoreDataStackForDaemon;
- (void)launchContainer;
- (void).cxx_destruct;
- (id)saveFeatureFromObject:(id)a0 withName:(id)a1;
- (void)initializeCoreDataStackForClient;
- (void)createContainer;
- (void)deleteExpiredFeaturesForName:(id)a0;

@end
