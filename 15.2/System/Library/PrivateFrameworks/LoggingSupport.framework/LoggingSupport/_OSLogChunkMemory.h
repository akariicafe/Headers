@interface _OSLogChunkMemory : _OSLogChunkStore {
    id /* block */ _deallocator;
}

- (id)initWithBytes:(const void *)a0 size:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
