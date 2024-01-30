@interface MTLBVHBuilder : NSObject

- (id)init;
- (void)getCapacitiesForDescriptor:(id)a0 fragmentCapacity:(unsigned long long *)a1 innerNodeCapacity:(unsigned long long *)a2 leafNodeCapacity:(unsigned long long *)a3;
- (void)getCapacitiesForDescriptor:(id)a0 fragmentCapacity:(unsigned long long *)a1 innerNodeCapacity:(unsigned long long *)a2 leafNodeCapacity:(unsigned long long *)a3 primitiveDataCapacity:(unsigned long long *)a4;

@end
