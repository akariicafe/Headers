@class NSDictionary;

@interface PXVideoStabilizationRecipeSource : NSObject {
    long long _recipeLoadSignpost;
}

@property (copy, nonatomic) NSDictionary *debugInfo;
@property (copy, nonatomic) NSDictionary *analyticsPayload;
@property (nonatomic) unsigned long long allowedAnalysisTypes;
@property (nonatomic) BOOL allowsOnDemandPixelAnalysis;

- (id)init;
- (void).cxx_destruct;
- (id)_loadStabilizationRecipe:(id *)a0 analysisType:(out unsigned long long *)a1;
- (id)loadStabilizationRecipe:(id *)a0 analysisType:(out unsigned long long *)a1;

@end
