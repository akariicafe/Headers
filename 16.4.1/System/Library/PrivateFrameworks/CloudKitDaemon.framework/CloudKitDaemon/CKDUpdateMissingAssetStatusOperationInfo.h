@class NSArray, CKRecordID;

@interface CKDUpdateMissingAssetStatusOperationInfo : CKDatabaseOperationInfo

@property (retain, nonatomic) CKRecordID *repairRecordID;
@property (nonatomic) BOOL recovered;
@property (nonatomic) BOOL isPackage;
@property (retain, nonatomic) NSArray *assetSizes;
@property (retain, nonatomic) NSArray *assetPutReceipts;

- (void).cxx_destruct;

@end
