@class _PASNotificationToken, PETEventTracker2, SGSuggestHistory, SGFuture, NSDictionary, SGSqlEntityStore, NSMutableDictionary, SGDManagerForCTS, SGEKEventStoreProvider, NSString, _PASLock, CNContactStore, NSOperationQueue, SGServiceContext, SGSearchableItemIdTriple, NSXPCConnection, NSLock, SGXpcTransaction;

@interface SGDSuggestManager : NSObject <SGDSuggestManagerAllProtocol> {
    SGSqlEntityStore *_harvestStore;
    NSXPCConnection *_connection;
    SGSuggestHistory *_history;
    _PASNotificationToken *_assetUpdateToken;
    NSOperationQueue *_messageHarvestQueue;
    SGDManagerForCTS *_ctsManager;
    SGEKEventStoreProvider *_ekStoreProvider;
    CNContactStore *_contactStore;
    NSDictionary *_bundleIdToPET;
    NSLock *_dirtyLock;
    SGXpcTransaction *_dirtyTransaction;
    SGSearchableItemIdTriple *_lastSuggestionsFromMessageRequest;
    SGFuture *_lastSuggestionsFromMessageResponse;
    NSLock *_lastSuggestionsFromMessageLock;
    int _settingsChangeToken;
    PETEventTracker2 *_pet2Tracker;
    _PASLock *_recentlyHarvestedDetailLock;
    BOOL _keepRealtimeAsLost;
    NSMutableDictionary *_bufferedInteractionsForBundle;
}

@property (readonly, nonatomic) SGServiceContext *context;
@property (readonly, nonatomic) NSString *clientName;

+ (void)initialize;
+ (void)clearChangeHistory:(id)a0;
+ (id)fetchChangeHistory;
+ (void)clearRequestCache;

- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1 completion:(id /* block */)a2;
- (id)initWithStore:(id)a0;
- (void)allContactsWithSnippets:(BOOL)a0 limitTo:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)logMetricAutocompleteUserSelectedRecordId:(id)a0 contactIdentifier:(id)a1 bundleId:(id)a2;
- (void)sleepWithCompletion:(id /* block */)a0;
- (void)contactMatchesByPhoneNumber:(id)a0 withCompletion:(id /* block */)a1;
- (void)reportMessagesFound:(id)a0 lost:(id)a1 withCompletion:(id /* block */)a2;
- (void)allDeliveriesWithLimit:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)reminderTitleForContent:(id)a0 withCompletion:(id /* block */)a1;
- (void)cnContactMatchesForRecordId:(id)a0 withCompletion:(id /* block */)a1;
- (void)emailAddressIsSignificant:(id)a0 withCompletion:(id /* block */)a1;
- (void)daemonExitWithCompletion:(id /* block */)a0;
- (void)foundInStringForRecordId:(id)a0 style:(unsigned char)a1 withCompletion:(id /* block */)a2;
- (void)drainQueueCompletelyWithCompletion:(id /* block */)a0;
- (void)evaluateRecipe:(id)a0 attachments:(id)a1 completion:(id /* block */)a2;
- (void)prepareForRealtimeExtraction:(id /* block */)a0;
- (void)deleteCloudKitZoneWithCompletion:(id /* block */)a0;
- (void)addInteractions:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
- (void)clearCachesFully:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)ipsosMessagesWithSearchableItems:(id)a0 withCompletion:(id /* block */)a1;
- (void)realtimeSuggestionsFromURL:(id)a0 title:(id)a1 HTMLPayload:(id)a2 extractionDate:(id)a3 withCompletion:(id /* block */)a4;
- (void)fullDownloadRequestBatch:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)removeAllStoredPseudoContactsWithCompletion:(id /* block */)a0;
- (void)resolveFullDownloadRequests:(id)a0 withCompletion:(id /* block */)a1;
- (void)cnContactMatchesForRecordIds:(id)a0 withCompletion:(id /* block */)a1;
- (void)planReceivedFromServerWithPayload:(id)a0 completion:(id /* block */)a1;
- (void)contactMatchesWithContactIdentifier:(id)a0 limitTo:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)messagesToRefreshWithCompletion:(id /* block */)a0;
- (void)contactMatchesByEmailAddress:(id)a0 withCompletion:(id /* block */)a1;
- (void)logMetricSuggestedContactDetailShown:(id)a0 contactIdentifier:(id)a1 bundleId:(id)a2;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)contactMatchesWithContact:(id)a0 limitTo:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)logEventInteractionForEventWithExternalIdentifier:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (void)allEventsLimitedTo:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)suggestionsFromURL:(id)a0 title:(id)a1 HTMLPayload:(id)a2 withCompletion:(id /* block */)a3;
- (void)launchAppForSuggestedEventUsingLaunchInfo:(id)a0 completion:(id /* block */)a1;
- (void)confirmContact:(id)a0 completion:(id /* block */)a1;
- (void)confirmEventByRecordId:(id)a0 completion:(id /* block */)a1;
- (void)clearContactAggregator;
- (void)registerForCoreSpotlightIndexing;
- (void)noopWithCompletion:(id /* block */)a0;
- (void)_performAction:(id)a0 onContactDetailRecord:(id)a1 completion:(id /* block */)a2 confirmRejectUI:(int)a3;
- (void)logSuggestionInteractionForRecordId:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (void)rejectReminderByRecordId:(id)a0 completion:(id /* block */)a1;
- (id)initWithStore:(id)a0 ctsManager:(id)a1 ekStoreProvider:(id)a2 contactStore:(id)a3 pet2Tracker:(id)a4;
- (void)_confirmReminderByRecordId:(id)a0 completion:(id /* block */)a1;
- (id)realtimeContactsFromEntity:(id)a0 enrichments:(id)a1 sourceTextMessage:(id)a2 store:(id)a3;
- (id)storageContactFromRecordId:(id)a0;
- (void)_rejectReminderByRecordId:(id)a0 completion:(id /* block */)a1;
- (void)recentURLsWithLimit:(unsigned int)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isSearchableItemPartOfReimportWithGetterBlock:(id /* block */)a0 bundleIdentifier:(id)a1;
- (void)logMetricSuggestedContactDetailUsed:(id)a0 contactIdentifier:(id)a1 bundleId:(id)a2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)bumptTTLForNLEvent:(id)a0;
- (void)suggestionsFromSearchableItem:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)_sendChatChangedNotificationWithDomainIdentifier:(id)a0;
- (id)_mapToPseudoEvents:(id)a0;
- (void)rejectContact:(id)a0 completion:(id /* block */)a1 rejectionUI:(int)a2;
- (void)originFromRecordId:(id)a0 completion:(id /* block */)a1;
- (void)allRemindersLimitedTo:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)dealloc;
- (id)initWithMessagesConnection:(id)a0 store:(id)a1;
- (void)namesForDetail:(id)a0 limitTo:(unsigned long long)a1 prependMaybe:(BOOL)a2 onlySignificant:(BOOL)a3 withCompletion:(id /* block */)a4;
- (void)_performAction:(id)a0 onRecord:(id)a1 completion:(id /* block */)a2 withParentConfirmation:(BOOL)a3 confirmRejectUI:(int)a4;
- (BOOL)_clientIsMessages;
- (void)suggestionsFromMessage:(id)a0 options:(unsigned long long)a1 completionDelivery:(unsigned long long)a2 completionHandler:(id /* block */)a3 fullCompletionHandler:(id /* block */)a4;
- (void)addSearchableItems:(id)a0 completion:(id /* block */)a1;
- (id)shortNamesAndRealtimeEventsFromEntity:(id)a0 enrichments:(id)a1 store:(id)a2;
- (void)_suggestionsFromMessageWithIdentifier:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2 completionDelivery:(unsigned long long)a3 providedBy:(id /* block */)a4 searchableItem:(id)a5 dissectIfNecessary:(BOOL)a6;
- (void)rejectRealtimeReminder:(id)a0 completion:(id /* block */)a1;
- (void)urlsFoundBetweenStartDate:(id)a0 endDate:(id)a1 excludingBundleIdentifiers:(id)a2 limit:(unsigned int)a3 withCompletion:(id /* block */)a4;
- (void)logMetricContactSearchResult:(int)a0 recordId:(id)a1 contactIdentifier:(id)a2 bundleId:(id)a3;
- (void)_performAction:(id)a0 onRecord:(id)a1 completion:(id /* block */)a2 rejectionUI:(int)a3;
- (void)confirmRealtimeReminder:(id)a0 completion:(id /* block */)a1;
- (void)suggestionsFromMessage:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)logMetricAutocompleteResult:(int)a0 recordId:(id)a1 contactIdentifier:(id)a2 bundleId:(id)a3;
- (void)eventsStartingAt:(id)a0 endingAt:(id)a1 prefix:(id)a2 limitTo:(unsigned long long)a3 options:(unsigned int)a4 withCompletion:(id /* block */)a5;
- (void)predictedToEmailAddressesWithToAddresses:(id)a0 ccAddresses:(id)a1 fromAddress:(id)a2 date:(double)a3 bounds:(id)a4 completion:(id /* block */)a5;
- (id)filterRealtimeEvents:(id)a0;
- (void)_suggestionsFromSearchableItem:(id)a0 options:(unsigned long long)a1 dissectIfNecessary:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)contactMatchesWithFullTextSearch:(id)a0 limitTo:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)reminderAlarmTriggeredForRecordId:(id)a0 completion:(id /* block */)a1;
- (void)isEnabledWithCompletion:(id /* block */)a0;
- (unsigned short)interfaceForRealtimeReminder:(id)a0;
- (void)logEventInteractionForEntity:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (void)launchInfoForSuggestedEventWithUniqueIdentifier:(id)a0 sourceURL:(id)a1 clientLocale:(id)a2 ignoreUserActivitySupport:(BOOL)a3 ignoreMailCheck:(BOOL)a4 completion:(id /* block */)a5;
- (id)_pmlTraining;
- (id)createLaunchIntentForStorageEvent:(id)a0;
- (void)eventsStartingAt:(id)a0 endingAt:(id)a1 limitTo:(unsigned long long)a2 options:(unsigned int)a3 withCompletion:(id /* block */)a4;
- (void)keepDirty:(BOOL)a0;
- (void)powerStateWithCompletion:(id /* block */)a0;
- (id)_showInFormatStringWithLocalization:(id)a0;
- (void)clearContactAggregatorConversation:(id)a0;
- (void)harvestedSuggestionsFromSearchableItem:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)addSearchableItemMetadata:(id)a0 htmlData:(id)a1 completion:(id /* block */)a2;
- (void)eventsInFutureLimitTo:(unsigned long long)a0 options:(unsigned int)a1 withCompletion:(id /* block */)a2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 domainIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)a0;
- (void)contactMatchesWithContactIdentifiers:(id)a0 limitTo:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)namesForDetailCacheSnapshotsWithCompletion:(id /* block */)a0;
- (BOOL)isSGEntity:(id)a0 duplicateOfEKEvent:(id)a1 withStore:(id)a2;
- (id)_maybeFormatString;
- (void)waitForEventWithIdentifier:(id)a0 toAppearInEventStoreWithLastModificationDate:(id)a1 completion:(id /* block */)a2;
- (void)schemaOrgToEvents:(id)a0 completion:(id /* block */)a1;
- (void)geocodeEnrichmentsInPipelineEntity:(id)a0 withCompletion:(id /* block */)a1;
- (void)logUnknownContactInformationShownCount:(unsigned long long)a0 notShownCount:(unsigned long long)a1 bundleId:(id)a2;
- (id)curatedEventKeyForExactMatchOfPseudoEvent:(id)a0 candidates:(id)a1;
- (id)getPet2Tracker;
- (void)rejectContactDetailRecord:(id)a0 completion:(id /* block */)a1 rejectionUI:(int)a2;
- (void)updateMessages:(id)a0 state:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_storeAndGeocodeEntity:(id)a0 spotlightBundleIdentifier:(id)a1 spotlightUniqueIdentifier:(id)a2 spotlightDomainIdentifier:(id)a3 store:(id)a4 afterCallbackQueue:(id)a5 finalize:(id /* block */)a6;
- (id)filterRealtimeReminders:(id)a0;
- (id)initWithConnection:(id)a0 store:(id)a1;
- (void)deleteEventByRecordId:(id)a0 completion:(id /* block */)a1;
- (BOOL)isSearchableItemPartOfReimport:(id)a0;
- (void)deleteInteractionsWithBundleId:(id)a0 completion:(id /* block */)a1;
- (id)entityFromUniqueKey:(id)a0;
- (void)sendRTCLogsWithCompletion:(id /* block */)a0;
- (void)setupManagerWithConnection:(id)a0 store:(id)a1 ctsManager:(id)a2 ekStoreProvider:(id)a3 contactStore:(id)a4 pet2Tracker:(id)a5;
- (void)predictedCCEmailAddressesWithToAddresses:(id)a0 ccAddresses:(id)a1 fromAddress:(id)a2 date:(double)a3 bounds:(id)a4 completion:(id /* block */)a5;
- (void)eventFromUniqueId:(id)a0 completion:(id /* block */)a1;
- (void)logMetricContactCreated:(id)a0 contactIdentifier:(id)a1 bundleId:(id)a2;
- (void)deleteInteractionsWithBundleId:(id)a0 identifiers:(id)a1 completion:(id /* block */)a2;
- (void)harvestedSuggestionsFromMessage:(id)a0 bundleIdentifier:(id)a1 options:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)suggestionsFromMessage:(id)a0 options:(unsigned long long)a1 fullCompletionHandler:(id /* block */)a2;
- (void)suggestionsFromRFC822Data:(id)a0 source:(id)a1 options:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)rejectEvent:(id)a0 completion:(id /* block */)a1;
- (BOOL)_canBannerUseStoredDissection:(id)a0 options:(unsigned long long)a1;
- (void)resetConfirmationAndRejectionHistory:(id /* block */)a0;
- (void)harvestedSuggestionsFromMessages:(id)a0 bundleIdentifier:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)contactMatchesWithMessagingPrefix:(id)a0 limitTo:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)deleteInteractionsWithBundleId:(id)a0 groupIdentifiers:(id)a1 completion:(id /* block */)a2;
- (BOOL)containsNonCuratedData:(id)a0;
- (void)confirmRecord:(id)a0 completion:(id /* block */)a1;
- (void)harvestedSuggestionsFromMessage:(id)a0 bundleIdentifier:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)shortNamesAndRealtimeEventsFromEntity:(id)a0 message:(id)a1 enrichments:(id)a2 store:(id)a3;
- (void)processInteractions:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
- (void)_suggestionsFromMessage:(id)a0 options:(unsigned long long)a1 dissectIfNecessary:(BOOL)a2 completionDelivery:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)isEventCandidateForURL:(id)a0 title:(id)a1 withCompletion:(id /* block */)a2;
- (void)suggestionsFromSimpleMailMessage:(id)a0 headers:(id)a1 options:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)logEventInteractionForEventWithUniqueKey:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (void)eventFromRecordId:(id)a0 withCompletion:(id /* block */)a1;
- (void)suggestionsFromEmailContent:(id)a0 headers:(id)a1 source:(id)a2 options:(unsigned long long)a3 withCompletion:(id /* block */)a4;
- (struct SGMContactDetailUsedApp_ { unsigned long long x0; })_appEnumForBundleId:(id)a0;
- (void)rejectEventByRecordId:(id)a0 completion:(id /* block */)a1;
- (id)filterPastEvents:(id)a0;
- (BOOL)_clientIsMail;
- (id)cachedResultForKey:(id)a0 generateResult:(id /* block */)a1 validateResults:(id /* block */)a2;
- (void)logEventInteractionForRealtimeEvent:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (void)confirmContactDetailRecord:(id)a0 completion:(id /* block */)a1;
- (void)spotlightReimportFromIdentifier:(id)a0 forPersonHandle:(id)a1 startDate:(id)a2 endDate:(id)a3 completion:(id /* block */)a4;
- (void)confirmReminderByRecordId:(id)a0 completion:(id /* block */)a1;
- (void)confirmEvent:(id)a0 completion:(id /* block */)a1;
- (void)rejectRecord:(id)a0 completion:(id /* block */)a1 rejectionUI:(int)a2;
- (void)contactFromRecordId:(id)a0 withCompletion:(id /* block */)a1;
- (void)logMetricContactSearchResultSelected:(id)a0 contactIdentifier:(id)a1 bundleId:(id)a2;
- (BOOL)_isContactInteresting:(id)a0 emailEntity:(id)a1 enrichments:(id)a2 hasContactCard:(BOOL)a3;
- (void)enqueueSearchableItems:(id)a0 completion:(id /* block */)a1;
- (void)_setupHistoryObserver:(id)a0;

@end
