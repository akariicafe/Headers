@class NSOrderedSet, NSUbiquitousKeyValueStore;

@interface IMPinnedConversationsController : NSObject

@property (class, readonly, nonatomic) unsigned long long maximumNumberOfPinnedConversations;

@property (readonly, nonatomic) NSUbiquitousKeyValueStore *dataStore;
@property (retain, nonatomic) NSOrderedSet *pinnedConversationIdentifierSet;
@property (nonatomic) BOOL hasCompletedInitialization;
@property (nonatomic) BOOL hasDefferedPinnedConversationsDidChangeNotification;
@property (nonatomic) long long numberOfPendingForceSyncs;

+ (id)sharedInstance;
+ (id)requiredKeys;
+ (long long)currentPinConfigurationVersion;
+ (id)_forceSyncDispatchQueue;
+ (id)_ubiquitousDispatchQueue;

- (id)init;
- (void).cxx_destruct;
- (id)pinnedConversationIdentifiers;
- (void)conversationsWereDeletedWithIdentifiers:(id)a0;
- (BOOL)shouldSync;
- (void)setPinnedConversationIdentifiers:(id)a0 withUpdateReason:(id)a1;
- (void)fetchPinnedConversationIdentifiersFromLocalStore;
- (void)_postDeferredPinnedConversationsDidChangeNotificationIfNecessary;
- (void)handleNSUbiquitousKeyValueStoreDidChangeExternallyNotification:(id)a0;
- (void)imCloudKitHooksSetEnabledDidReturn:(id)a0;
- (void)performOneTimeFetchIfNecessary;
- (void)synchronizeLocalDataStore;
- (id)_ubiquitousPinConfigurationInStore:(id)a0;
- (id)_locallyStoredPinConfiguration;
- (id)mostUpToDatePinConfigurationByComparingPinConfiguration:(id)a0 toOtherPinConfiguration:(id)a1;
- (id)pinnedConversationIdentifiersFromPinConfiguration:(id)a0;
- (void)setPinnedConversationIdentifiers:(id)a0 withUpdateReason:(id)a1 shouldUpdateStores:(BOOL)a2;
- (void)_updateLocalStoreWithPinConfiguration:(id)a0;
- (id)_dictionaryWithPinnedConversationIdentifiers:(id)a0 updateReason:(id)a1 timestamp:(id)a2;
- (BOOL)pinnedConversationsContainsPinningIdentifier:(id)a0;
- (id)dictionaryWithPinnedConversationIdentifiers:(id)a0 updateReason:(id)a1;
- (void)updateStoresWithPinConfiguration:(id)a0;
- (void)_postPinnedConversationsDidChangeNotification;
- (BOOL)pinConfigurationIsValid:(id)a0;
- (BOOL)pinConfigurationHasCurrentVersion:(id)a0;
- (void)fetchMostUpToDatePinConfiguration:(id /* block */)a0;
- (void)_updateUbiquitousStoreWithPinConfiguration:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldWriteProposedPinConfiguration:(id)a0 toUbiquitousStoreWithExistingPinConfiguration:(id)a1;
- (BOOL)shouldUpdateExistingPinConfig:(id)a0 withProposedPinConfig:(id)a1;
- (void)forceSynchronizeUbiquitousStore;
- (void)_fetchUbiquitousPinConfiguration:(id /* block */)a0;
- (id)pinConfigurationWithCurrentVersionForPinConfiguration:(id)a0;
- (BOOL)pinConfigurationHasCompatibleVersion:(id)a0;
- (void)_updatePinningIdentifiersUsingOldToNewPinningIdentifierMapIfNecessary:(id)a0;
- (BOOL)pinnedConversationsContainsChat:(id)a0;
- (void)conversationWasDeletedWithIdentifier:(id)a0;

@end
