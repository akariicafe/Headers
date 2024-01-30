@class NSString, NSMutableDictionary;

@interface APOdmlFeatureStorage : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedFeatures;
@property (readonly, nonatomic) int deploymentID;
@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *treatmentID;

- (void).cxx_destruct;
- (void)saveFeatureFromObject:(id)a0 withName:(id)a1;
- (id)getKeyFromName:(id)a0;
- (id)getFeatureFromKeychainForKey:(id)a0;
- (id)getCurrentKeyForFeature:(id)a0;
- (void)saveCurrentKey:(id)a0 ForFeature:(id)a1;
- (id)initWithExperimentID:(id)a0 treatmentID:(id)a1 deploymentID:(int)a2;
- (id)getFeatureVectorForName:(id)a0;

@end
