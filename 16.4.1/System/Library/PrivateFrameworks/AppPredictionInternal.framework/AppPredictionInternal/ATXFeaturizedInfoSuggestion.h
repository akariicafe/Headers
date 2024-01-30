@class ATXInformationFeatureSet, ATXInfoSuggestion;

@interface ATXFeaturizedInfoSuggestion : NSObject

@property (readonly, nonatomic) ATXInfoSuggestion *suggestion;
@property (readonly, nonatomic) ATXInformationFeatureSet *featureSet;

- (id)initWithSuggestion:(id)a0 featureSet:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (double)scoreWithFeatureWeights:(id)a0;

@end
