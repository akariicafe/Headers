@class CKDFetchRecordsOperation, NSArray, CKRecordID, CKDModifyRecordsOperation, CKRecord;

@interface CKDUpdateMissingAssetStatusOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CKRecordID *repairRecordID;
@property (nonatomic) BOOL recovered;
@property (nonatomic) BOOL isPackage;
@property (retain, nonatomic) NSArray *assetSizes;
@property (retain, nonatomic) NSArray *assetPutReceipts;
@property (retain, nonatomic) CKDFetchRecordsOperation *fetchOperation;
@property (retain, nonatomic) CKDModifyRecordsOperation *modifyOperation;
@property (retain, nonatomic) CKRecord *record;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)main;
- (int)operationType;
- (void)_updateMissingAssetStatus;

@end
