@class NSSet, NSDictionary;

@interface CKRecordFetchAggregatorOperationInfo : CKDatabaseOperationInfo

@property (nonatomic) BOOL fetchAssetContents;
@property (nonatomic) BOOL preserveOrdering;
@property (retain, nonatomic) NSSet *desiredKeys;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) BOOL forceDecryptionAttempt;

- (void).cxx_destruct;
- (id)init;

@end
