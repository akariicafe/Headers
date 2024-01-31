@class NSError, CKRecordZoneID;

@interface CKSyncEngineDidFetchRecordZoneChangesEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, copy, nonatomic) NSError *error;

- (void)CKDescribePropertiesUsing:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithZoneID:(id)a0 error:(id)a1;

@end
