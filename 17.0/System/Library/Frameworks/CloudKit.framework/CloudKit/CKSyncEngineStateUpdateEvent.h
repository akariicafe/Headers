@class CKSyncEngineStateSerialization;

@interface CKSyncEngineStateUpdateEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) CKSyncEngineStateSerialization *stateSerialization;

- (void)CKDescribePropertiesUsing:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithStateSerialization:(id)a0;

@end
