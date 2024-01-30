@class CKDMMCSItemGroup, CKDOperation, CKDMMCSItem, NSMapTable, CKDMMCS, NSNumber, CKSignpost;

@interface CKDMMCSItemGroupContext : NSObject <CKDCancelling, CKDMMCSItemReaderWriterDelegateProtocol>

@property (retain, nonatomic) NSNumber *hasConformingOperation;
@property (readonly, nonatomic) CKSignpost *signpost;
@property (retain, nonatomic) CKDMMCS *MMCS;
@property (retain, nonatomic) CKDMMCSItemGroup *itemGroup;
@property (weak, nonatomic) CKDOperation *operation;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ commandBlock;
@property (copy, nonatomic) id /* block */ startBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) CKDMMCSItem *MMCSPackageSectionItem;
@property (retain, nonatomic) NSMapTable *MMCSItemsByItemID;
@property (nonatomic) long long mmcsOperationType;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;
@property (retain, nonatomic) id operationInfo;

- (void)didOpenItemReaderWriter:(id)a0 result:(BOOL)a1 error:(id)a2;
- (BOOL)shouldFetchAssetContentInMemory;
- (void)didCompleteRequestWithError:(id)a0;
- (void)didPutSectionWithSignature:(id)a0 results:(id)a1;
- (void)didGetItemID:(unsigned long long)a0 signature:(id)a1 path:(id)a2 error:(id)a3 results:(id)a4;
- (BOOL)_setupGetMMCSItemsWithError:(id *)a0;
- (BOOL)shouldFetchAssetContentUsingAssetDownloadStagingManager;
- (BOOL)_setupRegisterMMCSItemsWithError:(id *)a0;
- (BOOL)willGetFileMetadataItemReaderWriter:(id)a0 error:(id *)a1;
- (BOOL)didReadFromItemReaderWriter:(id)a0 offset:(unsigned long long)a1 bytes:(char *)a2 length:(unsigned long long)a3 bytesRead:(unsigned long long *)a4 error:(id *)a5;
- (id)didGetFileMetadataItemReaderWriter:(id)a0 fileMetadata:(id)a1 error:(id)a2;
- (void)cancel;
- (id)findTrackedMMCSItemByItemID:(unsigned long long)a0;
- (void)_stopTrackingMMCSItems:(id)a0;
- (void)didGetMetricsForRequest:(id)a0;
- (void)handleCommand:(id)a0 forItem:(id)a1;
- (void)_cleanupMMCSItems;
- (void)updateProgressForPackageSectionState:(int)a0 progress:(double)a1 results:(id)a2;
- (id)conformingOperation;
- (BOOL)_setupMMCSItemsWithError:(id *)a0;
- (void)_startTrackingMMCSItems:(id)a0;
- (BOOL)shouldFetchAssetContentWithReaderWriter;
- (BOOL)_setupPutMMCSItemsWithError:(id *)a0;
- (void)start;
- (void)updateProgressForItemID:(unsigned long long)a0 state:(int)a1 progress:(double)a2 error:(id)a3;
- (id)initWithMMCS:(id)a0 itemGroup:(id)a1 operation:(id)a2 progress:(id /* block */)a3 command:(id /* block */)a4 start:(id /* block */)a5 groupCompletion:(id /* block */)a6;
- (id)getCKDMMCSItemReaderByPathForMMCSItem:(id)a0 error:(id *)a1;
- (void)didCloseItemReaderWriter:(id)a0 result:(BOOL)a1 error:(id)a2;
- (BOOL)willOpenItemReaderWriter:(id)a0 error:(id *)a1;
- (BOOL)willReadFromItemReaderWriter:(id)a0 offset:(unsigned long long)a1 bytes:(char *)a2 length:(unsigned long long)a3 bytesRead:(unsigned long long *)a4 error:(id *)a5;
- (void)didPutItemID:(unsigned long long)a0 signature:(id)a1 results:(id)a2;
- (void)updateProgressForItemID:(unsigned long long)a0 state:(int)a1 progress:(double)a2 results:(id)a3;
- (struct MMCSItemReaderWriter { } *)getMMCSItemReaderForItemID:(unsigned long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)_cleanupMMCSRegisterItems;
- (BOOL)_setupPutContentMetadataMMCSItemsWithError:(id *)a0;
- (BOOL)willCloseItemReaderWriter:(id)a0 error:(id *)a1;

@end
