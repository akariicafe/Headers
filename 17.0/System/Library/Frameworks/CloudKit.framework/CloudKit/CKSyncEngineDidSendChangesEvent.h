@class CKSyncEngineSendChangesContext;

@interface CKSyncEngineDidSendChangesEvent : CKSyncEngineEvent

@property (readonly, nonatomic) CKSyncEngineSendChangesContext *context;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (long long)type;

@end
