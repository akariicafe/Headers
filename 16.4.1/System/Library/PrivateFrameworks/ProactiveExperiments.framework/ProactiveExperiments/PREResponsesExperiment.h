@class _PASLock, RKMessageResponseManager, _PASLRUCache, TIPreferencesController, NSUserDefaults;
@protocol PREExperimentResolverProtocol, PREResponsesMetricsProtocol, PREResponsesProtocol;

@interface PREResponsesExperiment : NSObject {
    id<PREExperimentResolverProtocol> _experimentResolver;
    id<PREResponsesMetricsProtocol> _metrics;
    id<PREResponsesProtocol> _xpcClient;
    RKMessageResponseManager *_rkClient;
    TIPreferencesController *_tiPreferencesController;
    NSUserDefaults *_defaults;
    _PASLRUCache *_responsesGeneratedCache;
    _PASLock *_guardedCachedResponsesGeneratedEvent;
}

@property (nonatomic) BOOL registerDisplayed;
@property (nonatomic) BOOL includeCannedResponses;
@property (nonatomic) BOOL includeCustomResponses;
@property (nonatomic) BOOL includeResponsesToRobots;
@property (nonatomic) BOOL useResponseKitAsFallback;

+ (id)sharedManager;
+ (BOOL)_isStringEmpty:(id)a0;
+ (id)_cannedRepliesForLanguage:(id)a0 inputPreferences:(id)a1;
+ (id)_getConversationHistoryFromRequest:(id)a0;
+ (id)_getFormattedPREResponseItems:(id)a0 inputPreferences:(id)a1;
+ (id)_inputMethodStringFrom:(int)a0;
+ (int)_preInputMethodFrom:(id)a0;
+ (id)_rawStringsForMessages:(id)a0 excludingTapBacks:(BOOL)a1;
+ (BOOL)_shouldInsertSuggestion:(id)a0 forExistingSuggestions:(id)a1;
+ (id)_suggestionsWithDynamicResponseItems:(id)a0 cannedResponseItems:(id)a1 inputPreferences:(id)a2;
+ (id)stringArrayFromPreResponseItems:(id)a0;

- (unsigned long long)mode;
- (id)init;
- (void).cxx_destruct;
- (id)fullNonEditableSuggestionsListForMessage:(id)a0 context:(id)a1 additionalSenderMessages:(id)a2 date:(id)a3 keyboardLanguageID:(id)a4 keyboardLanguageLastChangedDate:(id)a5 recipients:(id)a6 includeDynamicSuggestions:(BOOL)a7;
- (void)fullNonEditableSuggestionsListForMessage:(id)a0 context:(id)a1 additionalSenderMessages:(id)a2 date:(id)a3 keyboardLanguageID:(id)a4 keyboardLanguageLastChangedDate:(id)a5 recipients:(id)a6 includeDynamicSuggestions:(BOOL)a7 completion:(id /* block */)a8;
- (void)primeResponsesExperimentsIfNeeded;
- (id)suggestionsForRequest:(id)a0;
- (void)suggestionsForRequest:(id)a0 withCompletion:(id /* block */)a1;
- (id)_responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 outgoingMessageHistory:(id)a2 forConversationHistory:(id)a3 forContext:(id)a4 time:(id)a5 withLanguage:(id)a6 languageLastChangedDate:(id)a7 recipientHandles:(id)a8 options:(unsigned long long)a9 preferredLocale:(id)a10;
- (void)_responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 outgoingMessageHistory:(id)a2 forConversationHistory:(id)a3 forContext:(id)a4 time:(id)a5 withLanguage:(id)a6 languageLastChangedDate:(id)a7 recipientHandles:(id)a8 options:(unsigned long long)a9 preferredLocale:(id)a10 completionBlock:(id /* block */)a11;
- (id)activeExperimentNameForLanguage:(id)a0;
- (id)cacheKeyForMessage:(id)a0 maxResponses:(unsigned long long)a1 time:(id)a2 language:(id)a3;
- (id)cachedResponsesGeneratedEvent;
- (id)clippedMessageIfNecessary:(id)a0;
- (id)handlesFromRecipients:(id)a0;
- (id)initWithExperimentResolver:(id)a0 metricsClient:(id)a1 xpcClient:(id)a2 rkClient:(id)a3 tiPreferencesController:(id)a4;
- (id)nonEditableSuggestionsForMessage:(id)a0 messageDate:(id)a1 senderID:(id)a2 recipientHandles:(id)a3 outgoingMessageHistory:(id)a4 keyboardLanguageID:(id)a5 keyboardLanguageLastChangedDate:(id)a6 includeDynamicSuggestions:(BOOL)a7;
- (void)nonEditableSuggestionsForMessage:(id)a0 messageDate:(id)a1 senderID:(id)a2 recipientHandles:(id)a3 outgoingMessageHistory:(id)a4 keyboardLanguageID:(id)a5 keyboardLanguageLastChangedDate:(id)a6 includeDynamicSuggestions:(BOOL)a7 completion:(id /* block */)a8;
- (id)nonEditableSuggestionsForMessage:(id)a0 messageDate:(id)a1 senderID:(id)a2 recipients:(id)a3 outgoingMessageHistory:(id)a4 keyboardLanguageID:(id)a5 keyboardLanguageLastChangedDate:(id)a6 includeDynamicSuggestions:(BOOL)a7;
- (void)nonEditableSuggestionsForMessage:(id)a0 messageDate:(id)a1 senderID:(id)a2 recipients:(id)a3 outgoingMessageHistory:(id)a4 keyboardLanguageID:(id)a5 keyboardLanguageLastChangedDate:(id)a6 includeDynamicSuggestions:(BOOL)a7 completion:(id /* block */)a8;
- (void)performWithResolvedModelAssetPathsUsingLanguage:(id)a0 block:(id /* block */)a1;
- (void)preResponseItemsForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 time:(id)a4 withLanguage:(id)a5 recipientHandles:(id)a6 options:(unsigned long long)a7 completionBlock:(id /* block */)a8;
- (void)registerGenerationWithPreResponseItems:(id)a0 language:(id)a1 isCached:(BOOL)a2 responseTimePerf:(unsigned long long)a3 promptMessage:(id)a4 generationStatus:(int)a5;
- (void)registerResponse:(id)a0 forMessage:(id)a1 time:(id)a2 metadata:(id)a3 withLanguage:(id)a4;
- (void)registerResponseDisplayedAtIndex:(id)a0;
- (id)responsesCache;
- (id)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 time:(id)a4 withLanguage:(id)a5 recipientHandles:(id)a6 options:(unsigned long long)a7;
- (void)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 time:(id)a4 withLanguage:(id)a5 recipientHandles:(id)a6 options:(unsigned long long)a7 completionBlock:(id /* block */)a8;
- (id)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 time:(id)a4 withLanguage:(id)a5 recipients:(id)a6 options:(unsigned long long)a7;
- (void)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 time:(id)a4 withLanguage:(id)a5 recipients:(id)a6 options:(unsigned long long)a7 completionBlock:(id /* block */)a8;
- (void)setCachedResponsesGeneratedEvent:(id)a0;
- (BOOL)shouldUseDefaultRKTreatment;
- (BOOL)shouldUseDefaultRKTreatmentForLanguage:(id)a0;
- (id)waitForPreResponseItemsForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 time:(id)a4 withLanguage:(id)a5 recipientHandles:(id)a6 options:(unsigned long long)a7;

@end
