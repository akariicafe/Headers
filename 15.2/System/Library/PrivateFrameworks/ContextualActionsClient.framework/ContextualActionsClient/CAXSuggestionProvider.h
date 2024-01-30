@class NSString, ATXProactiveSuggestionClientModel;

@interface CAXSuggestionProvider : NSObject <ATXProactiveSuggestionRealTimeProviderDelegateProtocol> {
    ATXProactiveSuggestionClientModel *_clientModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)suggestionsForContextualActionSuggestionRequest:(id)a0 reply:(id /* block */)a1;
- (void)pingWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)predictWithPredictionContext:(id)a0 candidateActions:(id)a1 maxSuggestions:(unsigned long long)a2;
- (id)proactiveSuggestionForCaxContextualAction:(id)a0 clientModelSpec:(id)a1;
- (void)registerModelForRealTimeRequestsWithBlendingLayerServer:(id)a0;
- (void)recordShortcutsEditorEvent:(id)a0;

@end
