@interface CFPDPurgeableBuffer : CFPDDataBuffer {
    struct __CFData { } *handle;
    unsigned long long allocSize;
    BOOL safe;
    BOOL usedMalloc;
}

- (unsigned long long)length;
- (id)initWithPropertyList:(void *)a0;
- (void *)bytes;
- (BOOL)purgable;
- (id)initWithFileDescriptor:(int)a0 size:(unsigned long long)a1;
- (BOOL)beginAccessing;
- (void)endAccessing;
- (void)dealloc;

@end
