@class NSArray, CKRecordZone;

@interface CKAggregateZonePCSOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *sourceZoneIDs;
@property (retain, nonatomic) CKRecordZone *targetZone;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
