@protocol CNRegulatoryLogger, CNDataMapper, CNContactsLogger;

@interface CNDataMapperContactStore : CNContactStore

@property (readonly, nonatomic) id<CNContactsLogger> logger;
@property (readonly, nonatomic) id<CNRegulatoryLogger> regulatoryLogger;
@property (readonly, retain, nonatomic) id<CNDataMapper> mapper;

+ (Class)dataMapperClassForOptions:(unsigned long long)a0;
+ (BOOL)enableContactsOutOfProcess;

- (void)setLegacyTetheredSyncDeviceAnchor:(id)a0;
- (id)sectionListOffsetsForSortOrder:(long long)a0 error:(id *)a1;
- (id)contactCountForFetchRequest:(id)a0 error:(id *)a1;
- (id)unifiedContactCountWithError:(id *)a0;
- (id)membersOfGroupWithIdentifier:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)currentHistoryAnchor;
- (id)userActivityUserInfoForContact:(id)a0;
- (id)requestAccessForEntityType:(long long)a0;
- (id)currentHistoryToken;
- (BOOL)setDefaultAccountIdentifier:(id)a0 error:(id *)a1;
- (void)setLegacyTetheredSyncComputerAnchor:(id)a0;
- (BOOL)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)iOSMapper;
- (id)legacyTetheredSyncDeviceAnchor;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (id)legacyTetheredSyncComputerAnchor;
- (BOOL)resetSortDataIfNeededWithError:(id *)a0;
- (BOOL)moveContacts:(id)a0 fromContainer:(id)a1 toContainer:(id)a2 error:(id *)a3;
- (id)identifierWithError:(id *)a0;
- (BOOL)setMeContact:(id)a0 forContainer:(id)a1 error:(id *)a2;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)executeFetchRequest:(id)a0 progressiveResults:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (int)saveSequenceCount;
- (id)policyForContainerWithIdentifier:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithEnvironment:(id)a0 options:(unsigned long long)a1 managedConfiguration:(id)a2;
- (id)meContactIdentifiers:(id *)a0;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)_customPropertyValuesForRecordWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)defaultContainerIdentifier;
- (id)contactsInContainerWithIdentifier:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)contactsForFetchRequest:(id)a0 matchInfos:(id *)a1 error:(id *)a2;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (id)initWithEnvironment:(id)a0;
- (BOOL)_saveCustomPropertyValuesForRemoteRecords:(id)a0 error:(id *)a1;
- (id)contactIdentifierWithMatchingDictionary:(id)a0;
- (id)_infosForAccountsWithIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)_smartGroupsMatchingPredicate:(id)a0;
- (id)_allCustomProperties;
- (id)_persistentStoreURLForRecordWithIdentifier:(id)a0;
- (id)usedLabelsForPropertyWithKey:(id)a0 error:(id *)a1;
- (id)initWithDataMapper:(id)a0 environment:(id)a1;
- (id)matchingDictionaryForContact:(id)a0;
- (id)description;
- (BOOL)setBestMeIfNeededForGivenName:(id)a0 familyName:(id)a1 email:(id)a2 error:(id *)a3;
- (id)contactWithUserActivityUserInfo:(id)a0 keysToFetch:(id)a1;
- (BOOL)hasMultipleGroupsOrAccounts;
- (BOOL)isValidSaveRequest:(id)a0 authorizationContext:(id)a1 error:(id *)a2;
- (id)_smartGroupsForAccountsWithIdentifiers:(id)a0;
- (BOOL)_saveAddedCustomProperties:(id)a0 deletedCustomProperties:(id)a1 error:(id *)a2;
- (id)_createInfo;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)initWithEnvironment:(id)a0 managedConfiguration:(id)a1;
- (id)_groupsMatchingCoreDataPredicate:(id)a0 error:(id *)a1;
- (id)groupWithIdentifier:(id)a0 error:(id *)a1;

@end
