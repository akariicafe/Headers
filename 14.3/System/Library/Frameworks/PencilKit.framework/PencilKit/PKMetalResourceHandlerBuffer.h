@class PKMetalBuffer, NSMutableArray;
@protocol MTLDevice;

@interface PKMetalResourceHandlerBuffer : NSObject {
    id<MTLDevice> _device;
    PKMetalBuffer *_buffer;
    unsigned long long _currentOffset;
    unsigned long long _bufferSize;
    unsigned long long _options;
    BOOL _purgeable;
    NSMutableArray *_reusableBuffers;
}

- (void).cxx_destruct;
- (void)deallocateReusableBuffers;
- (id)newBufferWithLength:(unsigned long long)a0 bytes:(const void *)a1 outOffset:(unsigned long long *)a2;
- (id)initWithSize:(unsigned long long)a0 options:(unsigned long long)a1 device:(id)a2 purgeable:(BOOL)a3;
- (id)newBufferWithLength:(unsigned long long)a0 bytes:(const void *)a1 outOffset:(unsigned long long *)a2 outReusableMetalBuffer:(id *)a3;
- (void)addReusableBuffer:(id)a0;

@end
