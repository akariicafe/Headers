@class CNManagedConfiguration, NSString, CNiOSAddressBook, CNManagedAccountsCache, CNContactsEnvironment;
@protocol CNContactsLogger;

@interface CNiOSAddressBookDataMapper : NSObject <CNDataMapper> {
    CNiOSAddressBook *_addressBook;
    CNContactsEnvironment *_environment;
    id<CNContactsLogger> _logger;
    CNManagedConfiguration *_managedConfiguration;
    CNManagedAccountsCache *_managedAccountsCache;
}

@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)contactBuffersDecoderForFetchRequest:(id)a0;
+ (id)encodedPeopleFetcherForForFetchRequest:(id)a0 addressBook:(void *)a1 managedConfiguration:(id)a2 completionHandler:(id /* block */)a3 environment:(id)a4;

- (id)sectionListOffsetsForSortOrder:(long long)a0 error:(id *)a1;
- (id)contactCountForFetchRequest:(id)a0 error:(id *)a1;
- (id)unifiedContactCountWithError:(id *)a0;
- (id)currentHistoryAnchor;
- (id)userActivityUserInfoForContact:(id)a0;
- (id)currentHistoryToken;
- (BOOL)setDefaultAccountIdentifier:(id)a0 error:(id *)a1;
- (BOOL)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)resetSortDataIfNeededWithError:(id *)a0;
- (BOOL)moveContacts:(id)a0 fromContainer:(id)a1 toContainer:(id)a2 error:(id *)a3;
- (id)identifierWithError:(id *)a0;
- (BOOL)setMeContact:(id)a0 forContainer:(id)a1 error:(id *)a2;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (id)executeFetchRequest:(id)a0 progressiveResults:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;
- (id)initWithContactsEnvironment:(id)a0 managedConfiguration:(id)a1;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (int)saveSequenceCount;
- (id)policyForContainerWithIdentifier:(id)a0 error:(id *)a1;
- (id)init;
- (id)meContactIdentifiers:(id *)a0;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)authorizedKeysForContactKeys:(id)a0 error:(id *)a1;
- (id)contactObservableForFetchRequest:(id)a0;
- (BOOL)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)defaultContainerIdentifier;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (id)contactIdentifierWithMatchingDictionary:(id)a0;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)usedLabelsForPropertyWithKey:(id)a0 error:(id *)a1;
- (id)matchingDictionaryForContact:(id)a0;
- (BOOL)setBestMeIfNeededForGivenName:(id)a0 familyName:(id)a1 email:(id)a2 error:(id *)a3;
- (id)contactWithUserActivityUserInfo:(id)a0 keysToFetch:(id)a1;
- (BOOL)hasMultipleGroupsOrAccounts;
- (BOOL)fetchContactsForFetchRequest:(id)a0 error:(id *)a1 batchHandler:(id /* block */)a2;
- (id)encodedContactsCursorForFetchRequest:(id)a0 cursorCleanupBlock:(id /* block */)a1 error:(id *)a2;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)groupsWithIdentifiers:(id)a0 error:(id *)a1;

@end
