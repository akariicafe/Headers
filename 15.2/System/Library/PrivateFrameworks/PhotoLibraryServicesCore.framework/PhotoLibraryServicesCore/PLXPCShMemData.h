@interface PLXPCShMemData : NSData {
    void *_buffer;
    unsigned long long _dataLength;
    unsigned long long _bufferLength;
}

- (unsigned long long)length;
- (id)description;
- (const void *)bytes;
- (void)dealloc;
- (id)initWithXPCShmem:(id)a0;
- (id)initWithXPCShmem:(id)a0 length:(long long)a1;

@end
