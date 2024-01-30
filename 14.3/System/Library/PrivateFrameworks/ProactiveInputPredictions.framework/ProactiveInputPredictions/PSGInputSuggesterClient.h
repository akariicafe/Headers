@class _PASLRUCache, _PASXPCClientHelper, PSGStructuredInfoSuggestionCache;

@interface PSGInputSuggesterClient : NSObject <PSGInputSuggesterProtocol> {
    _PASXPCClientHelper *_clientHelper;
    PSGStructuredInfoSuggestionCache *_structuredSuggestionCache;
    _PASLRUCache *_triggeringCache;
}

+ (id)sharedInstance;
+ (BOOL)_shouldGenerateWordBoundaryPredictionsForContext:(id)a0 localeIdentifier:(id)a1;
+ (id)_getContactsAutocompleteItemForQueryField:(id)a0 searchTerm:(id)a1 localeIdentifier:(id)a2;
+ (id)_getQueryFieldFromTextContentType:(id)a0;
+ (BOOL)_allowSingleCharacterContactsAutocompleteTriggerForLanguage:(id)a0;

- (id)_textualSuggestionsAndTriggersForRequest:(id)a0 explanationSet:(id)a1;
- (void)warmUpWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)inputSuggestionsWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_getWordBoundaryResultForRequest:(id)a0 explanationSet:(id)a1;
- (id)_wordBoundaryPredictionsForContext:(id)a0 localeIdentifier:(id)a1 textContentType:(id)a2 recipientNames:(id)a3 availableApps:(id)a4 request:(id)a5 explanationSet:(id)a6;
- (id)initWithStructuredInfoCache:(id)a0;
- (id)_fillSuggestionsForResponseItems:(id)a0 localeIdentifier:(id)a1 recipients:(id)a2 recipientNames:(id)a3 bundleIdentifier:(id)a4 timeoutSeconds:(double)a5 structuredInfoFetchLimit:(unsigned long long)a6 availableApps:(id)a7 textualResponseLimit:(unsigned long long)a8 structuredInfoLimit:(unsigned long long)a9 totalSuggestionsLimit:(unsigned long long)a10 explanationSet:(id)a11 error:(id *)a12;
- (id)_rkResponsesForContext:(id)a0 conversationTurns:(id)a1 languageID:(id)a2 maximumResponses:(unsigned long long)a3 shouldDisableAutoCaps:(BOOL)a4 adaptationContextID:(id)a5;
- (void)logPrediction:(id)a0 request:(id)a1 latencyMillis:(double)a2;
- (id)_appConnectionTriggerForTextContentType:(id)a0;
- (id)_cachedStructuredSuggestionsForContext:(id)a0 localeIdentifier:(id)a1 maxSuggestions:(unsigned long long)a2;
- (void)logImpression:(id)a0 request:(id)a1;
- (void)logSpeedMetricForLocaleIdentifier:(id)a0 messageDurationMilliseconds:(int)a1 messageLength:(int)a2 messageWords:(int)a3;
- (id)_getZKWResultsForRequest:(id)a0 explanationSet:(id)a1;
- (void)logErrorForRequest:(id)a0 trigger:(id)a1 errorType:(unsigned char)a2;
- (id)_responseKitPredictionsForContext:(id)a0 conversationTurns:(id)a1 languageID:(id)a2 adaptationContextID:(id)a3 shouldDisableAutoCaps:(BOOL)a4 maximumResponses:(unsigned long long)a5 isBlacklisted:(BOOL)a6;
- (id)_logTriggerForItems:(id)a0 request:(id)a1;
- (void)logEngagement:(id)a0 request:(id)a1 position:(unsigned long long)a2;
- (id)_remoteObjectProxy;
- (id)_combineMLAndRKItems:(id)a0 mlItems:(id)a1;
- (id)_rewriteMoneyAttributes:(id)a0;
- (void)logTrigger:(id)a0 request:(id)a1;

@end
