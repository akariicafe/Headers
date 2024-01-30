@interface CFPDPurgeableBuffer : CFPDDataBuffer {
    struct __CFData { } *handle;
    unsigned long long allocSize;
    BOOL safe;
    BOOL usedMalloc;
}

- (void *)bytes;
- (BOOL)purgable;
- (id)initWithPropertyList:(void *)a0;
- (unsigned long long)length;
- (void)endAccessing;
- (void)dealloc;
- (BOOL)beginAccessing;
- (id)initWithFileDescriptor:(int)a0 size:(unsigned long long)a1;

@end
