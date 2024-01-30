@interface HMDBackingStoreLogChangesExistFetchOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id /* block */ fetchBlock;
@property (nonatomic) long long maskValue;
@property (nonatomic) long long compareValue;

- (void).cxx_destruct;
- (id)initWithNeedsPushTo:(unsigned long long)a0 result:(id /* block */)a1;
- (id)mainReturningError;

@end
