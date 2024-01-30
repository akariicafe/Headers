@class HMDBackingStoreCacheZone;

@interface HMDBackingStoreCacheDeleteZoneOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id /* block */ creationBlock;
@property (retain, nonatomic) HMDBackingStoreCacheZone *zone;

- (void).cxx_destruct;
- (id)initWithZone:(id)a0 resultBlock:(id /* block */)a1;
- (id)mainReturningError;

@end
