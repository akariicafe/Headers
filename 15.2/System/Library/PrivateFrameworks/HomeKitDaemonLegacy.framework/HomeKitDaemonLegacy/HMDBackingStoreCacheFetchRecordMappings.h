@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchRecordMappings : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreCacheGroup *group;
@property (copy, nonatomic) id /* block */ fetchResult;

- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithGroup:(id)a0 fetchResult:(id /* block */)a1;

@end
