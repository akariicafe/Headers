@interface MDLMeshBufferMap : NSObject {
    id /* block */ _deallocator;
}

@property (readonly, nonatomic) void *bytes;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBytes:(void *)a0 deallocator:(id /* block */)a1;

@end
