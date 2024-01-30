@class NSString;

@interface CAXSuggestionProvider : NSObject <ATXProactiveSuggestionRealTimeProviderDelegateProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordShortcutsEditorEvent:(id)a0;
- (id)predictWithPredictionContext:(id)a0 candidateActions:(id)a1 maxSuggestions:(unsigned long long)a2;
- (void)pingWithCompletion:(id /* block */)a0;
- (void)suggestionsForContextualActionSuggestionRequest:(id)a0 clientModelId:(id)a1 reply:(id /* block */)a2;
- (void)registerModelForRealTimeRequestsWithBlendingLayerServer:(id)a0;
- (id)proactiveSuggestionForCaxContextualAction:(id)a0 clientModelSpec:(id)a1;

@end
