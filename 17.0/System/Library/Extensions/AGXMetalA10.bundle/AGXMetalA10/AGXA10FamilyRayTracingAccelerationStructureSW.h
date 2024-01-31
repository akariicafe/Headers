@interface AGXA10FamilyRayTracingAccelerationStructureSW : IOGPUMetalAccelerationStructure {
    struct AGXARayTracingAccelerationStructureSW { struct Allocation { unsigned int index; void *pool; BOOL directly_assigned; } bvh_heap_allocation; unsigned long long size; } _impl;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)accelerationStructureUniqueIdentifier;
- (id)initWithBuffer:(id)a0 offset:(unsigned long long)a1 device:(id)a2;
- (id)initWithBuffer:(id)a0 offset:(unsigned long long)a1 device:(id)a2 resourceIndex:(unsigned long long)a3;
- (id)initWithDevice:(id)a0 length:(unsigned long long)a1 resourceIndex:(unsigned long long)a2 storageMode:(unsigned long long)a3;
- (id)initWithDevice:(id)a0 src:(id)a1;

@end
