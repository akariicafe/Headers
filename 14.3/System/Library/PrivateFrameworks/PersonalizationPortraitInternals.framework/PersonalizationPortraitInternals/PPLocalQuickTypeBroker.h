@class _PASLock, PPQuickTypeNavigationServant, PPQuickTypeConnectionsServant, PPQuickTypeEventsServant, PPQuickTypeContactsServant;

@interface PPLocalQuickTypeBroker : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {
    PPQuickTypeNavigationServant *_navigationServant;
    PPQuickTypeContactsServant *_contactsServant;
    PPQuickTypeEventsServant *_eventsServant;
    PPQuickTypeConnectionsServant *_connectionsServant;
    _PASLock *_cacheLock;
}

+ (id)sharedInstance;

- (void)processfeedbackItems:(id)a0 scoringDate:(id)a1 clientIdentifier:(id)a2 clientBundleId:(id)a3 mappingId:(id)a4;
- (void)_registerForNotifications;
- (BOOL)_shouldUseCacheWithCacheEntry:(id)a0 query:(id)a1;
- (void)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)warmUpWithCompletion:(id /* block */)a0;
- (id)_cachedQuickTypeItemsWithQuery:(id)a0;
- (id)init;
- (id)_recipientItemCacheKeyForRecipients:(id)a0;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)_quickTypeItemsFromServantsWithQuery:(id)a0 limit:(unsigned long long)a1 explanationSet:(id)a2;
- (void)_clearCaches;
- (id)_cacheEntryWithRecipients:(id)a0;
- (void)recentQuickTypeItemsForRecipients:(id)a0 completion:(id /* block */)a1;
- (id)_cachedQuickTypeItemsWithRecipients:(id)a0;
- (id)filterFeedback:(id)a0;
- (void)hibernateWithCompletion:(id /* block */)a0;
- (void)quickTypeItemsWithLanguageModelingTokens:(id)a0 localeIdentifier:(id)a1 recipients:(id)a2 bundleIdentifier:(id)a3 limit:(unsigned long long)a4 completion:(id /* block */)a5;

@end
