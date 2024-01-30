@class APOdmlFeatureStorage, NSString, APOdmlUnfairLock, TRIClient, TRIExperimentIdentifiers, NSCache;

@interface APOdmlAssetManager : NSObject

@property (readonly, nonatomic) TRIClient *trialClient;
@property (readonly, nonatomic) TRIExperimentIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) NSString *trialNamespace;
@property (retain, nonatomic) APOdmlFeatureStorage *featureStorage;
@property (readonly, nonatomic) NSCache *modelCache;
@property (readonly, nonatomic) APOdmlUnfairLock *modelCacheLock;
@property (readonly, nonatomic) int deploymentID;
@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *treatmentID;
@property (readonly, nonatomic) NSString *odmlNamespace;
@property (readonly, nonatomic) int odmlVersion;

- (id)booleanValueForFactor:(id)a0;
- (id)initWithNamespace:(id)a0 andClient:(id)a1;
- (id)pathForFactor:(id)a0 isDirectory:(BOOL)a1;
- (id)longValueForFactor:(id)a0;
- (id)featureForName:(id)a0;
- (id)doubleValueForFactor:(id)a0;
- (void).cxx_destruct;
- (id)saveFeatureFromObject:(id)a0 withName:(id)a1;
- (id)stringValueForFactor:(id)a0;
- (void)deleteExpiredFeaturesForName:(id)a0;
- (id)currentMLModel;

@end
