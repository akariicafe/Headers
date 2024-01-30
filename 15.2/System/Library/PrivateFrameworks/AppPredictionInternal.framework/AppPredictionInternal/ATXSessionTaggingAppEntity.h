@class NSString, ATXModeEntityAffinityVector;

@interface ATXSessionTaggingAppEntity : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) ATXModeEntityAffinityVector *affinityVector;
@property (readonly, nonatomic) ATXModeEntityAffinityVector *affinityVector_v2;

+ (id)genreIdForBundleId:(id)a0;
+ (id)keyForBundleId:(id)a0;

- (id)initWithBundleId:(id)a0;
- (void).cxx_destruct;
- (void)_resetAffinityVectorToDefault;
- (void)_resetAffinityVectorToDefault_v2;
- (id)entityKey;

@end
