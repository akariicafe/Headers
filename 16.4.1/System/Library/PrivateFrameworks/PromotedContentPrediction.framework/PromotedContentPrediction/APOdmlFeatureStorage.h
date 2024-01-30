@class NSString;

@interface APOdmlFeatureStorage : APOdmlCoreDataStorage

@property (nonatomic) int deploymentID;
@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSString *treatmentID;
@property (retain, nonatomic) NSString *trialNamespace;

- (id)initWithExperimentID:(id)a0 treatmentID:(id)a1 deploymentID:(int)a2 trialNamespace:(id)a3;
- (id)featuresForName:(id)a0 fetchLimit:(unsigned long long)a1 backgroundContext:(id)a2;
- (id)saveFeatureFromObject:(id)a0 withName:(id)a1;
- (id)featureForName:(id)a0 backgroundContext:(id)a1;
- (void)deleteExpiredFeaturesForName:(id)a0;
- (id)featureForName:(id)a0;
- (void).cxx_destruct;

@end
