@class CNContactStore, NSString, NSMutableDictionary, NSData, NSURL, NSNumber;
@protocol DACardDAVRecord;

@interface CardDAVVCardItemCNImplementation : CardDAVVCardItem {
    NSData *_dataPayload;
    id<DACardDAVRecord> _cardDAVRecordItem;
    NSString *_syncKey;
    NSMutableDictionary *_UUIDToPersonCache;
    NSURL *_serverID;
    NSNumber *_clientID;
}

@property (retain, nonatomic) CNContactStore *contactStore;

+ (id)keysToFetch;

- (id)clientID;
- (id)syncKey;
- (void).cxx_destruct;
- (void)setClientID:(id)a0;
- (id)serverID;
- (void)setServerID:(id)a0;
- (void)setSyncKey:(id)a0;
- (id)convertToDAContactSearchResultElement;
- (id)dataPayload;
- (BOOL)loadLocalItemWithAccount:(id)a0;
- (void)setDataPayload:(id)a0;
- (void)setLocalItem:(void *)a0;
- (id)initWithURL:(id)a0 eTag:(id)a1 dataPayload:(id)a2 inContainerWithURL:(id)a3 withAccountInfoProvider:(id)a4;
- (BOOL)saveWithLocalObject:(void *)a0 toContainer:(void *)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;
- (BOOL)saveServerIDToExistingItem;
- (BOOL)deleteFromContainer:(void *)a0;
- (void)setCardDAVRecordItem:(id)a0;
- (id)_localItemAsContact;
- (id)_contactFromDataPayload;
- (void)_setEmailAddress:(id)a0 contact:(id)a1;
- (void)_setStreetAddress:(id)a0 contact:(id)a1;
- (void)_setPhoneNumbers:(id)a0 contact:(id)a1;
- (void)_setInstantMessage:(id)a0 contact:(id)a1;
- (id)_containerForAccount:(id)a0;
- (BOOL)_createContact:(id)a0 inContainer:(id)a1 databaseHelper:(id)a2;
- (BOOL)_commitChangesToContact:(id)a0 databaseHelper:(id)a1;
- (id)cardDAVRecordItem;
- (id)initWithDACardDAVRecord:(id)a0 contactStore:(id)a1 outNeedsDBSave:(BOOL *)a2 maxImageSize:(long long)a3 maxResourceSize:(long long)a4 inContainerWithURL:(id)a5;
- (id)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned int *)a0;
- (void)loadClientIDs;
- (unsigned long long)saveWithLocalObject:(id)a0 toContainer:(id)a1 containerURL:(id)a2 shouldMergeProperties:(BOOL)a3 outMergeDidChooseLocalProperties:(BOOL *)a4 account:(id)a5 shouldSaveGroups:(BOOL)a6;
- (BOOL)saveIfGroupWithLocalObject:(id)a0 toContainer:(id)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;
- (BOOL)deleteFromContainer:(void *)a0 account:(id)a1;
- (id)_localItemAsGroup;
- (id)UUIDToPersonCache;
- (void)setUUIDToPersonCache:(id)a0;

@end
