@class CKRecordZoneID;

@interface CKSyncEngineWillFetchRecordZoneChangesEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;

- (void)CKDescribePropertiesUsing:(id)a0;
- (void).cxx_destruct;
- (id)initWithZoneID:(id)a0;
- (long long)type;

@end
