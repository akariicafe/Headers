@class NSArray, CKRecordID;

@interface CKDUpdateMissingAssetStatusURLRequest : CKDURLRequest

@property (copy, nonatomic) CKRecordID *repairRecordID;
@property (nonatomic) BOOL recovered;
@property (nonatomic) BOOL isPackage;
@property (retain, nonatomic) NSArray *assetSizes;
@property (retain, nonatomic) NSArray *assetPutReceipts;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 unrecoveredRepairRecordID:(id)a1;
- (id)initWithOperation:(id)a0 recoveredAssetRepairRecordID:(id)a1 size:(unsigned long long)a2 putReceipt:(id)a3;
- (id)initWithOperation:(id)a0 recoveredPackageRepairRecordID:(id)a1 sizes:(id)a2 putReceipts:(id)a3;
- (id)initWithOperation:(id)a0 repairRecordID:(id)a1 recovered:(BOOL)a2 package:(BOOL)a3 sizes:(id)a4 putReceipts:(id)a5;

@end
