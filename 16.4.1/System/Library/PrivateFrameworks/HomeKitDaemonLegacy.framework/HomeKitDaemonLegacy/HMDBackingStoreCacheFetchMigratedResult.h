@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchMigratedResult : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreCacheGroup *group;
@property (readonly) BOOL update;
@property (readonly) BOOL migration;
@property (copy, nonatomic) id /* block */ fetchResult;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 update:(BOOL)a1 migration:(BOOL)a2 fetchResult:(id /* block */)a3;
- (id)mainReturningError;

@end
