@interface TSUChunkedString : NSMutableString {
    unsigned long long _length;
    struct vector<std::__1::shared_ptr<TSUStringChunk>, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > > { struct shared_ptr<TSUStringChunk> *__begin_; struct shared_ptr<TSUStringChunk> *__end_; struct __compressed_pair<std::__1::shared_ptr<TSUStringChunk> *, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > > { struct shared_ptr<TSUStringChunk> *__value_; } __end_cap_; } _chunks;
    unsigned long long _chunkLength;
}

- (unsigned long long)length;
- (id)init;
- (void)compact;
- (void).cxx_destruct;
- (void)dealloc;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)appendString:(id)a0;
- (id).cxx_construct;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithChunkLength:(unsigned long long)a0;
- (void)p_appendRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromString:(id)a1;
- (void)p_insertCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromString:(id)a1 atIndex:(unsigned long long)a2 chunkIndex:(unsigned long long)a3;
- (void)p_deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 chunkIndex:(unsigned long long)a1;
- (void)p_compactChunksInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
