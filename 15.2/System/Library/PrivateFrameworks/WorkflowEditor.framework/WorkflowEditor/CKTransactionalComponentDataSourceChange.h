@class CKTransactionalComponentDataSourceAppliedChanges, CKTransactionalComponentDataSourceState;

@interface CKTransactionalComponentDataSourceChange : NSObject

@property (readonly, nonatomic) CKTransactionalComponentDataSourceState *state;
@property (readonly, nonatomic) CKTransactionalComponentDataSourceAppliedChanges *appliedChanges;

- (void).cxx_destruct;
- (id)initWithState:(id)a0 appliedChanges:(id)a1;

@end
