@class HMDBackingStoreCacheZone;

@interface HMDBackingStoreCacheDeleteZoneOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id /* block */ creationBlock;
@property (retain, nonatomic) HMDBackingStoreCacheZone *zone;

- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithZone:(id)a0 resultBlock:(id /* block */)a1;

@end
