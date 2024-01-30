@interface TSCERegionAllocator : NSObject {
    struct TSCERegionNode { unsigned long long x0; struct TSCERegionNode *x1; void *x2; } *_head;
    struct TSCERegionNode { unsigned long long x0; struct TSCERegionNode *x1; void *x2; } *_curBlock;
    unsigned int _blockOffset;
    struct vector<TSCEASTNodeArrayChunk *, std::__1::allocator<TSCEASTNodeArrayChunk *> > { struct TSCEASTNodeArrayChunk **__begin_; struct TSCEASTNodeArrayChunk **__end_; struct __compressed_pair<TSCEASTNodeArrayChunk **, std::__1::allocator<TSCEASTNodeArrayChunk *> > { struct TSCEASTNodeArrayChunk **__value_; } __end_cap_; } _nodeArrayChunks;
}

- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithInitialCapacity:(unsigned long long)a0;
- (void *)calloc:(unsigned long long)a0;
- (void *)malloc:(unsigned long long)a0;
- (struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; id x3; BOOL x4; } *)managedNodeArrayWithCapacity:(unsigned long long)a0;

@end
