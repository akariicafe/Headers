@class NSString, NSDictionary, ATXBlendingLayerHyperParameters;

@interface ATXSuggestionReranker : NSObject <ATXSuggestionRerankerProtocol> {
    NSDictionary *_clientModelSuggestions;
    NSString *_promotedClientModelId;
    ATXBlendingLayerHyperParameters *_blendingLayerHyperParameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)constructConfidenceCategoryDictionaryForClientModelSuggestions;
- (id)initWithClientModelSuggestions:(id)a0 promoteSuggestionsFromClientModel:(id)a1;
- (id)clientModelPriorityOrder;
- (id)initWithProactiveSuggestions:(id)a0;
- (id)convertConfidenceCategoryDictionaryToArray:(id)a0;
- (id)rerankedSuggestions;
- (id)initializeConfidenceCategoryToSuggestionsDictionary;

@end
