@class NSData, NSDate;

@interface PHAssetSceneAnalysisProperties : PHAssetPropertySet

@property (readonly, nonatomic) short sceneAnalysisVersion;
@property (readonly, nonatomic) NSDate *sceneAnalysisTimestamp;
@property (readonly, nonatomic) NSData *distanceIdentity;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
