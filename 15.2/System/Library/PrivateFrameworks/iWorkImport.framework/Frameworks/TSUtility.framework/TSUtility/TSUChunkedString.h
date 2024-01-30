@interface TSUChunkedString : NSMutableString {
    unsigned long long _length;
    struct vector<std::shared_ptr<TSUStringChunk>, std::allocator<std::shared_ptr<TSUStringChunk>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<TSUStringChunk> *, std::allocator<std::shared_ptr<TSUStringChunk>>> { void *__value_; } __end_cap_; } _chunks;
    unsigned long long _chunkLength;
}

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)compact;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (void)appendString:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithChunkLength:(unsigned long long)a0;
- (void)p_appendRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromString:(id)a1;
- (void)p_insertCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromString:(id)a1 atIndex:(unsigned long long)a2 chunkIndex:(unsigned long long)a3;
- (void)p_deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 chunkIndex:(unsigned long long)a1;
- (void)p_compactChunksInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
