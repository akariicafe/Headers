@interface CFPDPurgeableBuffer : CFPDDataBuffer {
    struct __CFData { } *handle;
    unsigned long long allocSize;
    BOOL safe;
    BOOL usedMalloc;
}

- (void *)bytes;
- (unsigned long long)length;
- (void)endAccessing;
- (BOOL)beginAccessing;
- (void)dealloc;
- (id)initWithPropertyList:(void *)a0;
- (BOOL)purgable;
- (id)initWithFileDescriptor:(int)a0 size:(unsigned long long)a1;

@end
