@class CKDOperation, CKDMMCSItem, NSMapTable, CKDMMCS, NSNumber, CKDMMCSItemGroup;

@interface CKDMMCSItemGroupContext : NSObject <CKDCancelling, CKDMMCSItemReaderWriterDelegateProtocol>

@property (retain, nonatomic) NSNumber *hasConformingOperation;
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
@property (retain, nonatomic) id operationInfo;

- (BOOL)shouldFetchAssetContentInMemory;
- (void)didCompleteRequestWithError:(id)a0;
- (void)updateProgressForItemID:(unsigned long long)a0 state:(int)a1 progress:(double)a2 results:(id)a3;
- (BOOL)willCloseItemReaderWriter:(id)a0 error:(id *)a1;
- (void)didGetItemID:(unsigned long long)a0 signature:(id)a1 path:(id)a2 error:(id)a3 results:(id)a4;
- (BOOL)_setupGetMMCSItemsWithError:(id *)a0;
- (void)_startTrackingMMCSItems:(id)a0;
- (void)didPutSectionWithSignature:(id)a0 results:(id)a1;
- (void)updateProgressForItemID:(unsigned long long)a0 state:(int)a1 progress:(double)a2 error:(id)a3;
- (id)findTrackedMMCSItemByItemID:(unsigned long long)a0;
- (void)_cleanupMMCSRegisterItems;
- (void)didPutItemID:(unsigned long long)a0 signature:(id)a1 results:(id)a2;
- (void)start;
- (void)didGetMetricsForRequest:(id)a0;
- (void)_cleanupMMCSItems;
- (BOOL)_setupPutContentMetadataMMCSItemsWithError:(id *)a0;
- (void).cxx_destruct;
- (id)didGetFileMetadataItemReaderWriter:(id)a0 fileMetadata:(id)a1 error:(id)a2;
- (void)didOpenItemReaderWriter:(id)a0 result:(BOOL)a1 error:(id)a2;
- (BOOL)_setupPutMMCSItemsWithError:(id *)a0;
- (void)handleCommand:(id)a0 forItem:(id)a1;
- (BOOL)_setupRegisterMMCSItemsWithError:(id *)a0;
- (void)_stopTrackingMMCSItems:(id)a0;
- (BOOL)willGetFileMetadataItemReaderWriter:(id)a0 error:(id *)a1;
- (id)getCKDMMCSItemReaderByPathForMMCSItem:(id)a0 error:(id *)a1;
- (struct MMCSItemReaderWriter { } *)getMMCSItemReaderForItemID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)willReadFromItemReaderWriter:(id)a0 offset:(unsigned long long)a1 bytes:(char *)a2 length:(unsigned long long)a3 bytesRead:(unsigned long long *)a4 error:(id *)a5;
- (BOOL)_setupMMCSItemsWithError:(id *)a0;
- (id)initWithMMCS:(id)a0 itemGroup:(id)a1 operation:(id)a2 progress:(id /* block */)a3 command:(id /* block */)a4 start:(id /* block */)a5 groupCompletion:(id /* block */)a6;
- (void)updateProgressForPackageSectionState:(int)a0 progress:(double)a1 results:(id)a2;
- (void)cancel;
- (BOOL)willOpenItemReaderWriter:(id)a0 error:(id *)a1;
- (void)didCloseItemReaderWriter:(id)a0 result:(BOOL)a1 error:(id)a2;
- (id)conformingOperation;
- (BOOL)didReadFromItemReaderWriter:(id)a0 offset:(unsigned long long)a1 bytes:(char *)a2 length:(unsigned long long)a3 bytesRead:(unsigned long long *)a4 error:(id *)a5;

@end
