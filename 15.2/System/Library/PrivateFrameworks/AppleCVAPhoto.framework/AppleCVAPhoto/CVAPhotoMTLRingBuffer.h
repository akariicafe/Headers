@protocol MTLBuffer;

@interface CVAPhotoMTLRingBuffer : NSObject {
    struct array<id<MTLBuffer>, 3> { id<MTLBuffer> __elems_[3]; } _buffers;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getBufferAt:(unsigned long long)a0;
- (id)initWithLength:(unsigned long long)a0 options:(unsigned long long)a1 device:(id)a2;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 options:(unsigned long long)a2 device:(id)a3;
- (id)currentBuffer;
- (id)advancedBuffer;

@end
