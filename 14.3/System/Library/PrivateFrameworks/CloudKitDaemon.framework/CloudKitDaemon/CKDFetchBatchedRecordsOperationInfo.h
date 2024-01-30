@class NSArray, NSDictionary;

@interface CKDFetchBatchedRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) BOOL shouldFetchAssetContents;
@property (nonatomic) BOOL fetchAllChanges;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) BOOL shouldReportAllPerItemFailures;
@property (nonatomic) BOOL forcePCSDecryptionAttempt;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
