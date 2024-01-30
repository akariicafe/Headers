@class CNManagedConfiguration, NSString, CNiOSAddressBook, CNManagedAccountsCache, CNAuthorization, CNContactsEnvironment;
@protocol CNContactsLogger;

@interface CNiOSAddressBookDataMapper : NSObject <CNDataMapper> {
    CNiOSAddressBook *_addressBook;
    CNContactsEnvironment *_environment;
    id<CNContactsLogger> _logger;
    CNManagedConfiguration *_managedConfiguration;
    CNManagedAccountsCache *_managedAccountsCache;
    CNAuthorization *_authorization;
}

@property (readonly) BOOL shouldLogContactsAccess;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property (readonly, nonatomic) BOOL shouldLogPrivacyAccountingAccessEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)encodedPeopleFetcherForForFetchRequest:(id)a0 addressBook:(void *)a1 managedConfiguration:(id)a2 addressBookCompletionHandler:(id /* block */)a3 cursorCompletionHandler:(id /* block */)a4 environment:(id)a5;
+ (id)contactBuffersDecoderForFetchRequest:(id)a0;

- (id)matchingDictionaryForContact:(id)a0;
- (int)saveSequenceCount;
- (id)executeFetchRequest:(id)a0 progressiveResults:(id /* block */)a1 completion:(id /* block */)a2;
- (id)usedLabelsForPropertyWithKey:(id)a0 error:(id *)a1;
- (id)sectionListOffsetsForSortOrder:(long long)a0 error:(id *)a1;
- (id)defaultContainerIdentifier;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (BOOL)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (id)userActivityUserInfoForContact:(id)a0;
- (id)contactIdentifierWithMatchingDictionary:(id)a0;
- (BOOL)hasMultipleGroupsOrAccounts;
- (BOOL)setDefaultAccountIdentifier:(id)a0 error:(id *)a1;
- (id)policyForContainerWithIdentifier:(id)a0 error:(id *)a1;
- (id)currentHistoryAnchor;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)setBestMeIfNeededForGivenName:(id)a0 familyName:(id)a1 email:(id)a2 error:(id *)a3;
- (BOOL)resetSortDataIfNeededWithError:(id *)a0;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)setMeContact:(id)a0 forContainer:(id)a1 error:(id *)a2;
- (BOOL)moveContacts:(id)a0 fromContainer:(id)a1 toContainer:(id)a2 error:(id *)a3;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)meContactIdentifiers:(id *)a0;
- (id)currentHistoryToken;
- (BOOL)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)contactCountForFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (id)unifiedContactCountWithError:(id *)a0;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)contactWithUserActivityUserInfo:(id)a0 keysToFetch:(id)a1;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)identifierWithError:(id *)a0;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;
- (id)contactObservableForFetchRequest:(id)a0;
- (id)encodedContactsCursorForFetchRequest:(id)a0 cursorCleanupBlock:(id /* block */)a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)authorizedKeysForContactKeys:(id)a0 error:(id *)a1;
- (BOOL)fetchContactsForFetchRequest:(id)a0 error:(id *)a1 batchHandler:(id /* block */)a2;
- (id)groupsWithIdentifiers:(id)a0 error:(id *)a1;

@end
