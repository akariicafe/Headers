@class CKTransactionalComponentDataSourceState;
@protocol CKTransactionalComponentDataSourceStateModifying;

@interface CKTransactionalComponentDataSourceModificationPair : NSObject

@property (readonly, nonatomic) id<CKTransactionalComponentDataSourceStateModifying> modification;
@property (readonly, nonatomic) CKTransactionalComponentDataSourceState *state;

- (void).cxx_destruct;
- (id)initWithModification:(id)a0 state:(id)a1;

@end
