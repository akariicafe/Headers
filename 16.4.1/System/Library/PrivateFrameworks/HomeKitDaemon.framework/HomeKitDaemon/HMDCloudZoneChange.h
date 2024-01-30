@class NSUUID, HMDCloudGroupChange, CKRecordID, NSArray, HMDCloudZone;

@interface HMDCloudZoneChange : HMFObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) HMDCloudZone *cloudZone;
@property (retain, nonatomic) HMDCloudGroupChange *rootGroupChange;
@property (readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property (readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property (readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property (readonly, nonatomic, getter=isTemporaryCache) BOOL temporaryCache;
@property (readonly, nonatomic) BOOL decryptionFailed;
@property (readonly, nonatomic) BOOL encryptionFailed;
@property (readonly, nonatomic) BOOL controllerIdentifierChanged;
@property (readonly, nonatomic) NSArray *objectChanges;
@property (readonly, nonatomic) BOOL hasValidChanges;
@property (readonly) BOOL doRecordsExistInCache;

+ (id)shortDescription;

- (id)shortDescription;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addChangeWithDeletedRecordID:(id)a0;
- (void)addChangeWithObjectChange:(id)a0;
- (void)addChangeWithRecord:(id)a0;
- (id)cachedCloudRecordWithObjectID:(id)a0;
- (void)cachedCloudRecordWithObjectID:(id)a0 completionHandler:(id /* block */)a1;
- (id)changeWithObjectID:(id)a0;
- (id)changeWithRecordName:(id)a0;
- (BOOL)doesRecordExistInCacheWithObjectID:(id)a0;
- (BOOL)doesRecordExistWithObjectID:(id)a0;
- (void)fetchBatchToUpload:(id /* block */)a0;
- (void)flushAllChangesToCache;
- (id)initWithZone:(id)a0 temporaryCache:(BOOL)a1;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(id /* block */)a0;
- (BOOL)moreChangesToProcess;
- (void)removeChangeWithObjectID:(id)a0;
- (void)resetRecordWithRecordID:(id)a0;
- (void)setAllChangedAsProcessed;
- (void)setDeleteAsProcessedWithRecordID:(id)a0;
- (void)setSaveAsProcessedWithRecord:(id)a0;

@end
