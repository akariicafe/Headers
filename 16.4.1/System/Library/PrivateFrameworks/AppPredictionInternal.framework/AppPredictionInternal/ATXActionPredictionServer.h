@class NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface ATXActionPredictionServer : NSObject <NSXPCListenerDelegate, ATXActionPredictionInterface, ATXProactiveSuggestionRealTimeProviderDelegateProtocol> {
    NSXPCListener *_listener;
    BOOL _checkEntitlements;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)registerForRealTimeRequestsWithBlendingLayerServer:(id)a0;
- (id)behavioralModelSuggestionsForRequest:(id)a0;
- (void)pingWithCompletion:(id /* block */)a0;
- (id)initAnonymousListener;
- (void)dealloc;
- (void)getActionPredictionsForCandidateBundleIdentifiers:(id)a0 candidateActionTypes:(id)a1 consumerType:(unsigned long long)a2 consumerSubType:(unsigned char)a3 limit:(int)a4 reply:(id /* block */)a5;
- (void)suggestionsForIntentSuggestionRequest:(id)a0 clientModelId:(id)a1 reply:(id /* block */)a2;
- (id)init;
- (void)removeActionPredictionNotificationsMatchingSuggestion:(id)a0 reply:(id /* block */)a1;
- (void)getActionPredictionsForContext:(id)a0 includeBundleIds:(id)a1 excludeBundleIds:(id)a2 includeActionTypes:(id)a3 excludeActionTypes:(id)a4 limit:(unsigned long long)a5 reply:(id /* block */)a6;
- (id)initWithListener:(id)a0 checkEntitlements:(BOOL)a1;
- (id)filteredCachedIntentSuggestionsForClientModelId:(id)a0 request:(id)a1;
- (void).cxx_destruct;
- (void)shouldDisplayDailyRoutineForContext:(id)a0 reply:(id /* block */)a1;

@end
