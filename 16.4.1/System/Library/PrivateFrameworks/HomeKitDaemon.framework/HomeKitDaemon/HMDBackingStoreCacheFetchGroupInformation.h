@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchGroupInformation : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreCacheGroup *group;
@property (copy, nonatomic) id /* block */ fetchResult;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 fetchResult:(id /* block */)a1;
- (id)mainReturningError;

@end
