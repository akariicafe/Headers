@interface HMDBackingStoreCacheFetchZonesOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id /* block */ fetchResult;

- (void).cxx_destruct;
- (id)initWithFetchResult:(id /* block */)a0;
- (id)mainReturningError;

@end
