@class NSXPCListener, NSString, ATXRSWidgetSuggestionProducer, ATXInformationEngine, ATXInfoSuggestionCriterionRegistry, ATXInformationHeuristics;

@interface ATXInfoSuggestionServer : NSObject <NSXPCListenerDelegate, ATXInfoSuggestionXPCInterface, ATXInformationHeuristicsDelegate> {
    NSXPCListener *_xpcListener;
    ATXInformationEngine *_engine;
    ATXRSWidgetSuggestionProducer *_relevantShortcutSuggestionProducer;
    ATXInfoSuggestionCriterionRegistry *_criterionRegistry;
    ATXInformationHeuristics *_informationHeuristics;
}

@property (readonly, nonatomic) ATXInformationEngine *infoEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)timelineDidReloadForWidget:(id)a0 parentApp:(id)a1 withEntries:(id)a2 completion:(id /* block */)a3;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resetSuggestionsTo:(id)a0 forInfoSourceIdentifier:(id)a1 errorHandler:(id /* block */)a2;
- (void)retrieveAvailableCriterionIdentifiersForSourceIdentifier:(id)a0 reply:(id /* block */)a1;
- (id)_processIncomingSuggestions:(id)a0 sourceIdentifier:(id)a1 error:(id *)a2;
- (void)clearSuggestionsForInfoSourceIdentifier:(id)a0 errorHandler:(id /* block */)a1;
- (id)_processIncomingSuggestion:(id)a0 sourceIdentifier:(id)a1 error:(id *)a2;
- (void)getSuggestionsForInfoSourceIdentifier:(id)a0 withReply:(id /* block */)a1;
- (id)initWithInfoEngine:(id)a0 rsSuggestionProducer:(id)a1 infoHeuristics:(id)a2 criterionRegistry:(id)a3 xpcListener:(id)a4;
- (void)stackDidRotateProactivelyForInfoSuggestion:(id)a0 isStalenessRotation:(BOOL)a1;
- (void)dealloc;
- (void)informationHeuristics:(id)a0 didUpdateSuggestions:(id)a1 forHeuristic:(id)a2;
- (void)insertSuggesions:(id)a0 forInfoSourceIdentifier:(id)a1 errorHandler:(id /* block */)a2;
- (id)init;
- (void)_addSuggestions:(id)a0 forSourceIdentifier:(id)a1 needReset:(BOOL)a2 errorHandler:(id /* block */)a3;
- (void)refreshInfoSuggestionsWithCompletionHandler:(id /* block */)a0;
- (void)overwriteSuggestionsWithProactiveSuggestions:(id)a0 forClientModelIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)userDidDismissSuggestion:(id)a0 isDismissalLongTerm:(BOOL)a1 completion:(id /* block */)a2;

@end
