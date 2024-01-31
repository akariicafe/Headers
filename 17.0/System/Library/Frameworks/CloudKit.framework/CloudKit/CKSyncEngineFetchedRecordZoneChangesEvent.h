@class NSArray;

@interface CKSyncEngineFetchedRecordZoneChangesEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) NSArray *modifications;
@property (readonly, copy, nonatomic) NSArray *deletions;

- (void)CKDescribePropertiesUsing:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithModifications:(id)a0 deletions:(id)a1;

@end
