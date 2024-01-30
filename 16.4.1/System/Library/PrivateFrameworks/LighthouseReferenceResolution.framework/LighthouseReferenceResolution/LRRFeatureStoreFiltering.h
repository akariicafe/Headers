@class NSString, NSNumber;

@interface LRRFeatureStoreFiltering : NSObject

@property (retain) NSString *experimentID;
@property (retain) NSNumber *deploymentID;
@property (retain) NSString *treatmentID;

- (void).cxx_destruct;
- (id)readUserDefaultAndFilterSamples;
- (id)filterSamplesAndComputeTimestamps:(id)a0 assetInfo:(id)a1;
- (id)getTrialAssetInfo;
- (id)init:(id)a0 deploymentID:(long long)a1 treatmentID:(id)a2;
- (BOOL)isKeyInUserDefaults:(id)a0;
- (void)manageDeploymentInfoForEvaluation;

@end
