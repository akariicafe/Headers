@class ATXSuggestionDeduplicator, NSString, NSArray, ATXHomeScreenSuggestionSender, NSDictionary, ATXSuggestionPreprocessor, NSObject, ATXEngagementRecordManager;
@protocol OS_os_transaction;

@interface ATXBlendingLayer : NSObject {
    NSDictionary *_clientModelSuggestions;
    NSArray *_rerankedValidSuggestions;
    NSString *_promotedClientModelId;
    NSObject<OS_os_transaction> *_txn;
    ATXSuggestionDeduplicator *_suggestionDeduplicator;
    ATXSuggestionPreprocessor *_preprocessor;
    ATXHomeScreenSuggestionSender *_homeScreenSuggestionSender;
    ATXEngagementRecordManager *_engagementRecordManager;
}

+ (void)logLongDescriptionForBlendingLayerString:(id)a0 prefix:(id)a1 shouldUseDefaultLogLevel:(BOOL)a2 limit:(unsigned long long)a3;

- (void)pushUpdateIfNeededForConsumerSubType:(unsigned char)a0 suggestionLayouts:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)selectedLayoutForUIConsumer:(unsigned char)a0;
- (BOOL)updateCachedSuggestionLayoutsForHomeScreen:(id)a0;
- (void)rerankSuggestions;
- (id)selectedLayoutsForHomeScreen;
- (BOOL)updateSuggestionsForConsumerSubType:(unsigned char)a0;
- (id)initWithClientModelSuggestions:(id)a0 suggestionDeduplicator:(id)a1 homeScreenSuggestionSender:(id)a2 engagementRecordManager:(id)a3;
- (BOOL)updateCachedSuggestionLayout:(id)a0 uiConsumer:(unsigned char)a1;
- (void)promoteSuggestionsFromClientModelWithIdentifier:(id)a0;
- (void)filterOutSuggestionsForUninstalledOrRestrictedApps;
- (void)donateBlendingModelUICacheUpdate:(id)a0 uiConsumer:(unsigned char)a1;
- (void)updateSuggestionsForAllConsumerSubTypes;
- (id)rerankedValidSuggestions;
- (id)initWithClientModelSuggestions:(id)a0 homeScreenSuggestionSender:(id)a1;
- (id)bundleIdAssociatedWithSuggestion:(id)a0;
- (id)homeScreenPageConfigs;
- (void)updateSuggestionsForConsumerSubTypes:(id)a0;
- (void)filterOutRecentlyEngagedSuggestions;

@end
