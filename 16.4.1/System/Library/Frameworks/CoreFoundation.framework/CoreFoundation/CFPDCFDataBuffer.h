@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } *data;
}

- (id)initWithCFData:(struct __CFData { } *)a0;
- (void *)bytes;
- (id)copyXPCData;
- (struct __CFData { } *)copyCFData;
- (unsigned long long)length;
- (void)dealloc;

@end
