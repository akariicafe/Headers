@class NSString, BMIntentStream, _DKPrivacyPolicyEnforcer, _DKRateLimitPolicyEnforcer, NSMutableDictionary, _DKContactsPrivacyMaintainer, _PASBloomFilterForWriting, NSMutableArray, NSObject, _CDUserActivityCache;
@protocol _CDInteractionDeleting, _DKKnowledgeEventStreamDeleting, OS_dispatch_source, OS_os_transaction, _CDInteractionQuerying, OS_dispatch_queue, _CDInteractionRecording, _DKKnowledgeSaving, _DKKnowledgeQuerying;

@interface _CDSpotlightItemRecorder : NSObject <SpotlightReceiver, CSSearchableIndexObserver> {
    NSObject<OS_dispatch_source> *_batchExecutionSource;
    NSObject<OS_dispatch_queue> *_batchExecutionSourceQueue;
    NSObject<OS_dispatch_queue> *_pendingOperationsQueue;
    NSMutableArray *_pendingOperations;
    NSObject<OS_os_transaction> *_pendingOperationsTransaction;
    NSObject<OS_dispatch_queue> *_activityRateLimiterQueue;
    NSMutableDictionary *_activityPerBundleRateLimit;
    id<_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeEventStreamDeleting> _knowledgeStore;
    _DKRateLimitPolicyEnforcer *_rateLimitEnforcer;
    _DKPrivacyPolicyEnforcer *_privacyEnforcer;
    _DKContactsPrivacyMaintainer *_contactsPrivacyMaintainer;
    _PASBloomFilterForWriting *_calendarAddedItemsFilter;
    _CDUserActivityCache *_userActivityCache;
    id<_CDInteractionQuerying, _CDInteractionRecording, _CDInteractionDeleting> _recorder;
    BMIntentStream *_intentStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spotlightItemRecorderWithInteractionRecorder:(id)a0 knowledgeStore:(id)a1;
+ (id)spotlightItemRecorderWithKnowledgeStore:(id)a0;
+ (id)spotlightItemRecorderWithInteractionRecorder:(id)a0;
+ (id)spotlightItemRecorder;

- (id)supportedContentTypes;
- (void)deleteAllSearchableItemsWithBundleID:(id)a0 withCompletion:(id /* block */)a1;
- (void)addInteractions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 withCompletion:(id /* block */)a3;
- (id)initWithInteractionRecorder:(id)a0 knowledgeStore:(id)a1 rateLimitEnforcer:(id)a2;
- (void)addUserAction:(id)a0 withItem:(id)a1 withCompletion:(id /* block */)a2;
- (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 withCompletion:(id /* block */)a3;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1 withCompletion:(id /* block */)a2;
- (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1;
- (id)supportedINIntentClassNames;
- (void)addInteractions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)deleteAllSearchableItemsWithBundleID:(id)a0;
- (void)registerSpotlightRecorderWithServiceName:(id)a0;
- (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 withCompletion:(id /* block */)a3;
- (void)deleteAllUserActivities:(id)a0;
- (void)startIntentDeletionForContactDeletions;
- (void)addUserAction:(id)a0 withItem:(id)a1;
- (id)initWithInteractionRecorder:(id)a0;
- (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (id)initWithInteractionRecorder:(id)a0 knowledgeStore:(id)a1;
- (void)donateRelevantShortcuts:(id)a0 bundleID:(id)a1;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1;
- (void)deleteSearchableItemsSinceDate:(id)a0 bundleID:(id)a1 withCompletion:(id /* block */)a2;
- (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1 withCompletion:(id /* block */)a2;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1 withCompletion:(id /* block */)a2;
- (id)supportedUTIs;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteSearchableItemsSinceDate:(id)a0 bundleID:(id)a1;
- (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1;
- (void).cxx_destruct;
- (void)addOrUpdateSearchableItems:(id)a0;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 bundleID:(id)a1 withCompletion:(id /* block */)a2;

@end
