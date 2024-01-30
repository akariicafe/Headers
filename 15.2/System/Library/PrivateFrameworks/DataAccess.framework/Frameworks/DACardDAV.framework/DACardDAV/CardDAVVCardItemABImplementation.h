@class NSString, NSMutableDictionary, NSData, NSURL, NSNumber;
@protocol DACardDAVRecord;

@interface CardDAVVCardItemABImplementation : CardDAVVCardItem {
    NSData *_dataPayload;
    id<DACardDAVRecord> _cardDAVRecordItem;
    NSString *_syncKey;
    NSMutableDictionary *_UUIDToPersonCache;
    NSURL *_serverID;
    NSNumber *_clientID;
}

@property (nonatomic) void *abRecord;
@property (nonatomic) unsigned int abRecordType;

- (id)clientID;
- (id)syncKey;
- (void).cxx_destruct;
- (void)setClientID:(id)a0;
- (id)serverID;
- (void)dealloc;
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
- (id)cardDAVRecordItem;
- (id)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned int *)a0;
- (void)loadClientIDs;
- (unsigned long long)saveWithLocalObject:(id)a0 toContainer:(id)a1 containerURL:(id)a2 shouldMergeProperties:(BOOL)a3 outMergeDidChooseLocalProperties:(BOOL *)a4 account:(id)a5 shouldSaveGroups:(BOOL)a6;
- (BOOL)saveIfGroupWithLocalObject:(id)a0 toContainer:(id)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;
- (BOOL)deleteFromContainer:(void *)a0 account:(id)a1;
- (id)UUIDToPersonCache;
- (void)setUUIDToPersonCache:(id)a0;
- (id)initWithABRecord:(void *)a0 addressBook:(void *)a1 outNeedsDBSave:(BOOL *)a2 maxImageSize:(long long)a3 maxResourceSize:(long long)a4 inContainerWithURL:(id)a5;

@end
