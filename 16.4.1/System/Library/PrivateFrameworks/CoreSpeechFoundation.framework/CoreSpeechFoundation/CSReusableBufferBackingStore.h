@interface CSReusableBufferBackingStore : NSObject {
    void *_buffer;
    unsigned long long _bufferSize;
    id /* block */ _deallocator;
}

@property (readonly, nonatomic) const void *bytes;
@property (nonatomic) unsigned long long recycleHostTime;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)configureWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithBuffer:(void *)a0 bufferSize:(unsigned long long)a1 deallocator:(id /* block */)a2;

@end
