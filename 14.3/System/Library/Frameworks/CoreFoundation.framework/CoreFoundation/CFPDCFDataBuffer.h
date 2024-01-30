@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } *data;
}

- (void *)bytes;
- (unsigned long long)length;
- (id)copyXPCData;
- (void)dealloc;
- (struct __CFData { } *)copyCFData;
- (id)initWithCFData:(struct __CFData { } *)a0;

@end
