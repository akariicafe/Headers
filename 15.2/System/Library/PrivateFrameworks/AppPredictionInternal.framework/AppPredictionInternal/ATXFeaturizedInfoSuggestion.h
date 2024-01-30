@class ATXInformationFeatureSet, ATXInfoSuggestion;

@interface ATXFeaturizedInfoSuggestion : NSObject

@property (readonly, nonatomic) ATXInfoSuggestion *suggestion;
@property (readonly, nonatomic) ATXInformationFeatureSet *featureSet;

- (void).cxx_destruct;
- (double)scoreWithFeatureWeights:(id)a0;
- (id)init;
- (id)initWithSuggestion:(id)a0 featureSet:(id)a1;

@end
