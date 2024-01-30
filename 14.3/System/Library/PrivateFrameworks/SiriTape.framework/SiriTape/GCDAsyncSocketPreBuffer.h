@interface GCDAsyncSocketPreBuffer : NSObject {
    char *preBuffer;
    unsigned long long preBufferSize;
    char *readPointer;
    char *writePointer;
}

- (void)reset;
- (void)dealloc;
- (unsigned long long)availableBytes;
- (char *)readBuffer;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)availableSpace;
- (void)ensureCapacityForWrite:(unsigned long long)a0;
- (void)getReadBuffer:(char **)a0 availableBytes:(unsigned long long *)a1;
- (void)didRead:(unsigned long long)a0;
- (char *)writeBuffer;
- (void)getWriteBuffer:(char **)a0 availableSpace:(unsigned long long *)a1;
- (void)didWrite:(unsigned long long)a0;

@end
