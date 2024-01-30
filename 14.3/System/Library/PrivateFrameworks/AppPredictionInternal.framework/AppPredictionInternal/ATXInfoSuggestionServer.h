@class NSXPCListener, NSString, ATXInformationEngine, ATXInfoSuggestionCriterionRegistry, ATXInformationHeuristics;

@interface ATXInfoSuggestionServer : NSObject <NSXPCListenerDelegate, ATXInfoSuggestionXPCInterface, ATXInformationHeuristicsDelegate> {
    NSXPCListener *_xpcListener;
    ATXInformationEngine *_engine;
    ATXInfoSuggestionCriterionRegistry *_criterionRegistry;
    ATXInformationHeuristics *_informationHeuristics;
}

@property (readonly, nonatomic) ATXInformationEngine *infoEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)retrieveAvailableCriterionIdentifiersForSourceIdentifier:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)informationHeuristics:(id)a0 didUpdateSuggestions:(id)a1 forHeuristic:(id)a2;
- (void)timelineDidReloadForWidget:(id)a0 parentApp:(id)a1 withEntries:(id)a2 completion:(id /* block */)a3;
- (void)dealloc;
- (id)initWithInfoEngine:(id)a0 infoHeuristics:(id)a1 criterionRegistry:(id)a2 xpcListener:(id)a3;
- (id)_processIncomingSuggestions:(id)a0 sourceIdentifier:(id)a1 error:(id *)a2;
- (void)overwriteSuggestionsWithProactiveSuggestions:(id)a0 forClientModelIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)userDidDismissSuggestion:(id)a0 isDismissalLongTerm:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_attemptToFindCompatibleWidgetKindForSuggestion:(id)a0;
- (id)_processIncomingSuggestion:(id)a0 sourceIdentifier:(id)a1 error:(id *)a2;
- (void)stackDidRotateProactivelyForInfoSuggestion:(id)a0 isStalenessRotation:(BOOL)a1;
- (void)insertSuggesions:(id)a0 forInfoSourceIdentifier:(id)a1 errorHandler:(id /* block */)a2;
- (void)getSuggestionsForInfoSourceIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)_addSuggestions:(id)a0 forSourceIdentifier:(id)a1 needReset:(BOOL)a2 errorHandler:(id /* block */)a3;
- (void)clearSuggestionsForInfoSourceIdentifier:(id)a0 errorHandler:(id /* block */)a1;
- (void)resetSuggestionsTo:(id)a0 forInfoSourceIdentifier:(id)a1 errorHandler:(id /* block */)a2;
- (void)refreshInfoSuggestionsWithCompletionHandler:(id /* block */)a0;

@end
