@class _PASLock, PPSocialHighlightCache, PPSocialHighlightStorageUtilities;

@interface PPSocialHighlightStorage : NSObject {
    _PASLock *_lock;
    PPSocialHighlightCache *_cache;
    PPSocialHighlightStorageUtilities *_socialHighlightStorageUtils;
    _PASLock *_lsAppLinkCache;
}

+ (id)appLinksForResourceURL:(id)a0 resolvedURL:(id)a1;
+ (int)attributionFeedbackTypeForAttributionFeedbackType:(unsigned long long)a0;
+ (unsigned long long)entitlementStatusForClient:(id)a0 applicationIdentifiers:(id)a1;
+ (id)feedbackPruningPolicy;
+ (int)unifiedFeedbackTypeForHighlightFeedbackType:(unsigned long long)a0;

- (id)attributionForIdentifier:(id)a0 error:(id *)a1;
- (id)rankedHighlightsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 applicationIdentifiers:(id)a3 error:(id *)a4;
- (id)autoDonatingChatsWithShouldContinueBlock:(id /* block */)a0 error:(id *)a1;
- (id)cachedRankedHighlightsForClient:(id)a0 variant:(id)a1 queriedHighlights:(id)a2;
- (id)_screenTimeConversation;
- (id)attributionsForIdentifiers:(id)a0 error:(id *)a1;
- (void)deleteVendedMatchingPredicate:(id)a0;
- (id)allSupportedHighlightsForAutoDonatingChats:(id)a0 error:(id *)a1;
- (void)deleteAllRecordsFromBundleId:(id)a0 matchingDomainSelection:(id)a1;
- (id)autoDonatingChatsWithError:(id *)a0;
- (void)deleteFeedbackMatchingPredicate:(id)a0;
- (void)resetLSAppLinkCache;
- (void)clearStreams;
- (void)_writeEnrichedFeedbackForHighlightIdentifier:(id)a0 client:(id)a1 feedbackType:(int)a2;
- (id)deduplicateAndSortRankedHighlights:(id)a0 attributionLookup:(id)a1 limit:(unsigned long long)a2 client:(id)a3;
- (void)cleanUpFeedbackWithShouldContinueBlock:(id /* block */)a0 ttl:(double)a1 onDeleteBlock:(id /* block */)a2;
- (id)sharedContentFromChats:(id)a0 dateRange:(double)a1 applicationIdentifiers:(id)a2 error:(id *)a3;
- (void)syncFeedback;
- (void)clearRankedStream;
- (void)saveOrderedBatch:(id)a0;
- (BOOL)isClientEntitledForItem:(id)a0 client:(id)a1 applicationIdentifiers:(id)a2 blockedHosts:(id)a3 iTunesOverrideChecker:(id)a4;
- (void)freezeAppLinksCache;
- (id)sharedContentForClient:(id)a0 variant:(id)a1 applicationIdentifiers:(id)a2 limit:(unsigned long long)a3 autoDonatingChatIdentifiers:(id)a4 error:(id *)a5;
- (unsigned char)automaticSharingEnabled;
- (BOOL)saveFeedbackForHighlightIdentifier:(id)a0 feedbackType:(unsigned long long)a1 client:(id)a2 variant:(id)a3;
- (id)_socialLayerDefaults;
- (id)_rankableItemsForClient:(id)a0 variant:(id)a1 applicationIdentifiers:(id)a2 autoDonatingChatIdentifiers:(id)a3 limit:(unsigned long long)a4 error:(id *)a5;
- (BOOL)saveAttributionFeedbackForAttributionIdentifier:(id)a0 feedbackType:(unsigned long long)a1 client:(id)a2 variant:(id)a3;
- (id)feedbackItemsInInterval:(double)a0 includingRemote:(BOOL)a1;
- (id)unserializedRankedHighlightsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 applicationIdentifiers:(id)a3 error:(id *)a4;
- (BOOL)isClientEntitledForItem:(id)a0 client:(id)a1 applicationIdentifiers:(id)a2 blockedHosts:(id)a3;
- (void)_performFeedbackSessionLoggingForEnrichedFeedback:(id)a0 client:(id)a1;
- (void)saveFeedbackItems:(id)a0;
- (BOOL)rerankingEnabled;
- (id)lastCacheInvalidationDateForClient:(id)a0;
- (unsigned long long)countDistinctRankedItemsMatchingBatchIdentifier:(id)a0;
- (id)highlightFromRankableHighlight:(id)a0 attributionIdentifiers:(id)a1 earliestAttributionIdentifiers:(id)a2;
- (id)initWithFeedbackStream:(id)a0 rankedStream:(id)a1 database:(id)a2;
- (BOOL)_isCollaborationEntitlementPresentForApplicationIdentifiers:(id)a0;
- (unsigned char)automaticSharingEnabledForClient:(id)a0 error:(id *)a1;
- (id)_socialAttributionFromAttributeValues:(id)a0 fetchAttributes:(id)a1;
- (id)init;
- (id)feedbackItems;
- (void)_writeEnrichedFeedbackForAttributionIdentifier:(id)a0 client:(id)a1 feedbackType:(int)a2;
- (void)deleteAllRecordsFromBundleId:(id)a0;
- (void)clearFeedbackStream;
- (double)_sessionLoggingRate;
- (BOOL)isValidHighlight:(id)a0;
- (id)rankedItems;
- (void)invalidateCacheForClient:(id)a0;
- (id)_rankableItemsForClient:(id)a0 variant:(id)a1 applicationIdentifiers:(id)a2 limit:(unsigned long long)a3 error:(id *)a4;
- (id)feedbackPublisherWithInterval:(double)a0 includingRemote:(BOOL)a1;
- (void).cxx_destruct;
- (void)deleteAllRecordsFromBundleId:(id)a0 matchingAttributionIdentifiers:(id)a1;
- (id)applicationIdentifiersForResourceURL:(id)a0 resolvedURL:(id)a1;
- (id)_mostRecentRankedHighlightsMatchingTest:(id /* block */)a0 client:(id)a1;
- (id)rankedHighlightsForSyncedItems:(id)a0 client:(id)a1 variant:(id)a2 applicationIdentifiers:(id)a3 error:(id *)a4;
- (void)handleAppLinkChangeNotification:(id)a0;
- (id)featurizeRankedHighlights:(id)a0;

@end
