@class NSArray;

@interface CKFetchRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (nonatomic) BOOL isFetchAllRecordZonesOperation;
@property (nonatomic) BOOL ignorePCSFailures;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
