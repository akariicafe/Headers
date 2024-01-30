@class NSArray, NSDictionary, CKRecordZoneID, CKQuery, CKQueryCursor;

@interface CKQueryOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKQuery *query;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKQueryCursor *cursor;
@property (nonatomic) unsigned long long resultsLimit;
@property (retain, nonatomic) NSArray *desiredKeys;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (nonatomic) BOOL fetchAllResults;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByKey;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
