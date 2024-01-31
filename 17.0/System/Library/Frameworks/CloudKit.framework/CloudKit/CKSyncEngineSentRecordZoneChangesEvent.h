@class NSArray, NSDictionary;

@interface CKSyncEngineSentRecordZoneChangesEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) NSArray *savedRecords;
@property (readonly, copy, nonatomic) NSArray *failedRecordSaves;
@property (readonly, copy, nonatomic) NSArray *deletedRecordIDs;
@property (readonly, copy, nonatomic) NSDictionary *failedRecordDeletes;

- (void)CKDescribePropertiesUsing:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithSavedRecords:(id)a0 failedRecordSaves:(id)a1 deletedRecordIDs:(id)a2 failedRecordDeletes:(id)a3;

@end
