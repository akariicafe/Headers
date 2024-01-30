@class NSString, NSDictionary;
@protocol ATXUniversalBlendingLayerHyperParametersProtocol;

@interface ATXSuggestionReranker : NSObject <ATXSuggestionRerankerProtocol> {
    NSDictionary *_clientModelSuggestions;
    NSString *_promotedClientModelId;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> _blendingLayerHyperParameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initializeConfidenceCategoryToSuggestionsDictionary;
- (id)clientModelPriorityOrder;
- (id)initWithClientModelSuggestions:(id)a0 promoteSuggestionsFromClientModel:(id)a1 hyperParameters:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)constructConfidenceCategoryDictionaryForClientModelSuggestions;
- (id)rerankedSuggestions;
- (id)initWithProactiveSuggestions:(id)a0 hyperParameters:(id)a1;
- (id)convertConfidenceCategoryDictionaryToArray:(id)a0;

@end
