@protocol CNRegulatoryLogger, CNDataMapper, CNContactsLogger;

@interface CNDataMapperContactStore : CNContactStore

@property (readonly, nonatomic) id<CNContactsLogger> logger;
@property (readonly, nonatomic) id<CNRegulatoryLogger> regulatoryLogger;
@property (readonly, nonatomic) BOOL shouldLogPrivacyAccountingAccessEvents;
@property (readonly, retain, nonatomic) id<CNDataMapper> mapper;

+ (Class)dataMapperClassForConfiguration:(id)a0;
+ (BOOL)enableContactsOutOfProcess;

- (BOOL)setBestMeIfNeededForGivenName:(id)a0 familyName:(id)a1 email:(id)a2 error:(id *)a3;
- (id)legacyTetheredSyncDeviceAnchor;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)unifiedContactCountWithError:(id *)a0;
- (id)currentHistoryAnchor;
- (id)policyWithDescription:(id)a0 error:(id *)a1;
- (BOOL)resetSortDataIfNeededWithError:(id *)a0;
- (BOOL)hasGroups;
- (id)sectionListOffsetsForSortOrder:(long long)a0 error:(id *)a1;
- (id)matchingDictionaryForContact:(id)a0;
- (BOOL)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)defaultContainerIdentifier;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)meContactIdentifiers:(id *)a0;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)contactCountForFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (id)contactIdentifierWithMatchingDictionary:(id)a0;
- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)initWithEnvironment:(id)a0;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (id)requestAccessForEntityType:(long long)a0;
- (id)userActivityUserInfoForContact:(id)a0;
- (BOOL)setMeContact:(id)a0 forContainer:(id)a1 error:(id *)a2;
- (BOOL)setDefaultAccountIdentifier:(id)a0 error:(id *)a1;
- (BOOL)requestMetadataAccessWithError:(id *)a0;
- (BOOL)isValidSaveRequest:(id)a0 authorizationContext:(id)a1 error:(id *)a2;
- (id)membersOfGroupWithIdentifier:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (BOOL)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (BOOL)_requestDataMapperAccessType:(unsigned long long)a0 error:(id *)a1;
- (BOOL)requestContactsReadAccessWithError:(id *)a0;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (BOOL)moveContacts:(id)a0 fromContainer:(id)a1 toContainer:(id)a2 error:(id *)a3;
- (id)iOSMapper;
- (void)_logContactsAccessWasDeniedForAccessType:(unsigned long long)a0 error:(id)a1;
- (BOOL)requestContactsWriteAccessWithError:(id *)a0;
- (int)saveSequenceCount;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (void)setLegacyTetheredSyncDeviceAnchor:(id)a0;
- (id)executeFetchRequest:(id)a0 progressiveResults:(id /* block */)a1 completion:(id /* block */)a2;
- (void)setLegacyTetheredSyncComputerAnchor:(id)a0;
- (id)identifierWithError:(id *)a0;
- (id)initWithEnvironment:(id)a0 managedConfiguration:(id)a1;
- (void)requestReadAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (id)contactsForFetchRequest:(id)a0 matchInfos:(id *)a1 error:(id *)a2;
- (void)_logPrivacyAccountingForAccessType:(unsigned long long)a0;
- (void)_logContactsAccessWasGrantedForAccessType:(unsigned long long)a0;
- (id)contactWithUserActivityUserInfo:(id)a0 keysToFetch:(id)a1;
- (id)legacyTetheredSyncComputerAnchor;
- (id)groupWithIdentifier:(id)a0 error:(id *)a1;
- (id)description;
- (id)contactsInContainerWithIdentifier:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0;
- (id)initWithDataMapper:(id)a0 dataMapperConfiguration:(id)a1;
- (void)_logGreenTeaForAccessType:(unsigned long long)a0;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)hasMultipleGroupsOrAccounts;
- (void).cxx_destruct;
- (id)usedLabelsForPropertyWithKey:(id)a0 error:(id *)a1;
- (id)currentHistoryToken;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;

@end
