@class NSArray, NSDictionary, NSURL, NSNumber;

@interface DESDodMLTaskSchedulingPolicy : NSObject {
    NSDictionary *_recipes;
}

@property (readonly, copy, nonatomic) NSArray *allRecipeIDs;
@property (readonly, nonatomic) unsigned long long recipeCountLimit;
@property (readonly, nonatomic) double timeLimit;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) BOOL originReturnRouteEnabled;
@property (readonly, nonatomic) BOOL parsecReturnRouteEnabled;
@property (readonly, nonatomic) BOOL dediscoReturnRouteEnabled;
@property (readonly, copy, nonatomic) NSURL *postbackBaseURL;
@property (readonly, copy, nonatomic) NSURL *telemetryURL;
@property (readonly, copy, nonatomic) NSNumber *telemetrySamplingRate;

- (id)init;
- (void).cxx_destruct;
- (id)_policyForRecipeID:(id)a0 error:(id *)a1;
- (id)initWithAssetURL:(id)a0 error:(id *)a1;
- (id)initWithPolicyDict:(id)a0;
- (id)predicateForRecipeID:(id)a0 error:(id *)a1;
- (id)samplingRateForRecipeID:(id)a0 error:(id *)a1;

@end
