@class NSArray, HMDCloudChangeTree, NSMutableArray, HMDCloudGroup;

@interface HMDCloudGroupChange : HMFObject

@property (readonly, weak, nonatomic) HMDCloudGroup *cloudGroup;
@property (nonatomic) BOOL decryptionFailed;
@property (nonatomic) BOOL encryptionFailed;
@property (nonatomic) BOOL controllerIdentifierChanged;
@property (retain, nonatomic) HMDCloudChangeTree *cloudChangeTree;
@property (retain, nonatomic) NSMutableArray *cloudChanges;
@property (retain, nonatomic) NSMutableArray *processingCloudChanges;
@property (retain, nonatomic) NSMutableArray *processedCloudChanges;
@property (readonly, nonatomic, getter=isRootRecordRequired) BOOL rootRecordRequired;
@property (readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property (readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property (readonly, nonatomic, getter=isTemporaryCache) BOOL temporaryCache;
@property (readonly, nonatomic) BOOL hasValidChanges;
@property (readonly) BOOL doRecordsExistInCache;
@property (readonly, nonatomic) NSArray *objectChanges;

+ (id)shortDescription;

- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)description;
- (id)changeWithObjectID:(id)a0;
- (id)cachedCloudRecordWithObjectID:(id)a0;
- (id)cloudRecordWithObjectID:(id)a0;
- (id)changeWithRecordName:(id)a0;
- (id)cloudRecordWithName:(id)a0;
- (BOOL)isRootRecord:(id)a0;
- (void)_addChangeWithDeletedCloudRecord:(id)a0;
- (void)_loadTreeWithRecordMapping:(id)a0;
- (void)_initializeCloudChanges;
- (void)loadCloudRecordsFromCache:(id /* block */)a0;
- (void)loadCloudChangeTreeFromCache:(id /* block */)a0;
- (id)rootRecordModelObject;
- (void)addChange:(id)a0 setAsProcessing:(BOOL)a1;
- (void)addRootRecordChange;
- (void)_removeChange:(id)a0;
- (void)collectRecordsForBatch;
- (void)setAsProcessedChange:(id)a0;
- (BOOL)isRootRecordName:(id)a0;
- (id)initWithGroup:(id)a0 temporaryCache:(BOOL)a1;
- (void)cachedCloudRecordWithObjectID:(id)a0 completionHandler:(id /* block */)a1;
- (void)addChangeWithObjectChange:(id)a0;
- (void)addChangeWithRecord:(id)a0;
- (void)addChangeWithDeletedRecordID:(id)a0;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(id /* block */)a0;
- (BOOL)moreChangesToProcess;
- (void)setAllChangedAsProcessed;
- (void)removeChangeWithObjectID:(id)a0;
- (void)fetchBatchToUpload:(id /* block */)a0;
- (void)setSaveAsProcessedWithRecord:(id)a0;
- (void)resetRecordWithRecordID:(id)a0;
- (void)setDeleteAsProcessedWithRecordID:(id)a0;
- (void)flushAllChangesToCache;

@end
