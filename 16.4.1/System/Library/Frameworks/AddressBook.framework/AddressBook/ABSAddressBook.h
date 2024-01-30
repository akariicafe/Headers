@class CNContactStore, ABSAddressBookContextStorage, CNFuture, ABSBulkFaultHandler, ABSChangeCallbacks;

@interface ABSAddressBook : NSObject

@property (readonly, nonatomic) CNFuture *storeFuture;
@property (readonly, nonatomic) ABSBulkFaultHandler *faultHandler;
@property (retain, nonatomic) ABSAddressBookContextStorage *contacts;
@property (retain, nonatomic) ABSAddressBookContextStorage *groups;
@property (retain, nonatomic) ABSAddressBookContextStorage *sources;
@property (readonly, nonatomic) CNContactStore *store;
@property (readonly) BOOL hasUnsavedChanges;
@property (readonly) ABSChangeCallbacks *changeCallbacks;

+ (void)initialize;
+ (id)localizedLabelForLabel:(id)a0;
+ (long long)authorizationStatus;
+ (void)ABInitialize;
+ (void)callLocalChangeCallbacks:(BOOL)a0;
+ (BOOL)eraseAllDataAtLocationName:(id)a0 error:(id *)a1;
+ (void)requestAccessWithCompletion:(id /* block */)a0;

- (BOOL)save:(id *)a0;
- (unsigned long long)_cfTypeID;
- (long long)groupCount;
- (id)allGroups;
- (int)saveSequenceCount;
- (long long)personCount;
- (id)init;
- (id)mePerson;
- (void).cxx_destruct;
- (id)allPeople;
- (id)defaultSource;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)localSource;
- (void)revert;
- (id)allSources;
- (BOOL)addRecord:(id)a0 error:(id *)a1;
- (void)completePerson:(id)a0 withKeysToFetch:(id)a1;
- (id)findPersonMatchingEmailAddress:(id)a0;
- (id)groupsInSource:(id)a0;
- (id)uniqueDatabaseVersionIdentifier;
- (id)_peoplePreferringExistingRecordsForFetchRequest:(id)a0;
- (id)_resultRecordsFromFetchedCNImpls:(id)a0 mergedWithStorage:(id)a1 creationBlock:(id /* block */)a2;
- (id)_sourcesPreferringExistingRecordsFetchedWithPredicate:(id)a0;
- (id)_storageForRecordClass:(Class)a0;
- (BOOL)addMember:(id)a0 toGroup:(id)a1 error:(id *)a2;
- (id)contactsWithIdentifiers:(id)a0 keysToFetch:(id)a1;
- (id)findPersonMatchingPhoneNumber:(id)a0 country:(id)a1;
- (id)findPersonMatchingURL:(id)a0;
- (id)groupWithRecordID:(int)a0;
- (id)initWithOptions:(id)a0 policy:(int)a1 error:(id *)a2;
- (id)initWithSettings:(id)a0 error:(id *)a1;
- (BOOL)linkPerson:(id)a0 toPerson:(id)a1;
- (id)peopleInGroup:(id)a0 sortOrder:(unsigned int)a1;
- (id)peopleInSource:(id)a0 sortOrder:(unsigned int)a1;
- (id)peopleLinkedToPerson:(id)a0;
- (id)peopleMatchingNameString:(id)a0;
- (id)peopleWithCNIdentifiers:(id)a0;
- (id)personWithRecordID:(int)a0;
- (BOOL)recordUpdated:(id)a0;
- (void)registerExternalChangeCallback:(void /* function */ *)a0 context:(void *)a1;
- (BOOL)removeMember:(id)a0 fromGroup:(id)a1 error:(id *)a2;
- (BOOL)removeRecord:(id)a0 error:(id *)a1;
- (id)sourceForRecord:(id)a0;
- (id)sourceWithRecordID:(int)a0;
- (BOOL)unlinkPerson:(id)a0;
- (void)unregisterExternalChangeCallback:(void /* function */ *)a0 context:(void *)a1;
- (void)updateFetchingAllPropertiesForGroups:(id)a0;
- (void)updateFetchingAllPropertiesForSources:(id)a0;
- (void)updatePeople:(id)a0 refetchingProperties:(id)a1;

@end
