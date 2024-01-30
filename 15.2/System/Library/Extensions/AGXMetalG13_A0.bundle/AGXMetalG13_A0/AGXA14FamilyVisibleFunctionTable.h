@interface AGXA14FamilyVisibleFunctionTable : IOGPUMetalVisibleFunctionTable {
    struct VisibleFunctionTable { struct Allocation { unsigned int index; void *pool; BOOL directly_assigned; } resource_indirection_heap_allocation; } _impl;
    int _type;
    id _pipelineState;
}

- (void)setValue:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)resourceIndex;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setValue:(unsigned long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)uniqueIdentifier;
- (void).cxx_destruct;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)dealloc;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setFunction:(id)a0 atIndex:(unsigned long long)a1;
- (id).cxx_construct;
- (void)setFunctions:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithDevice:(id)a0 functionCount:(long long)a1 options:(unsigned long long)a2 isSuballocDisabled:(BOOL)a3 resourceIndex:(unsigned long long)a4 pipelineState:(id)a5 type:(int)a6;
- (id)initWithDevice:(id)a0 functionCount:(long long)a1 options:(unsigned long long)a2 isSuballocDisabled:(BOOL)a3 clonedResourceIndex:(unsigned long long)a4 clonedVisibleFunctionHeap:(void *)a5 type:(int)a6;
- (id)clone:(id)a0 clonedResourceIndex:(unsigned long long)a1 clonedVisibleFunctionHeap:(void *)a2 cloneHandleMap:(void *)a3;

@end
