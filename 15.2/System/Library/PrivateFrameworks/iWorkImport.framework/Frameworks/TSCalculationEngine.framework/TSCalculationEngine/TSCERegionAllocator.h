@interface TSCERegionAllocator : NSObject {
    struct TSCERegionNode { unsigned long long x0; struct TSCERegionNode *x1; void *x2; } *_head;
    struct TSCERegionNode { unsigned long long x0; struct TSCERegionNode *x1; void *x2; } *_curBlock;
    unsigned int _blockOffset;
    struct vector<TSCEASTNodeArray *, std::allocator<TSCEASTNodeArray *>> { struct TSCEASTNodeArray **__begin_; struct TSCEASTNodeArray **__end_; struct __compressed_pair<TSCEASTNodeArray **, std::allocator<TSCEASTNodeArray *>> { struct TSCEASTNodeArray **__value_; } __end_cap_; } _managedNodeArrays;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id).cxx_construct;
- (struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)managedNodeArrayWithCapacity:(unsigned long long)a0;
- (id)initWithInitialCapacity:(unsigned long long)a0;
- (void *)malloc:(unsigned long long)a0;

@end
