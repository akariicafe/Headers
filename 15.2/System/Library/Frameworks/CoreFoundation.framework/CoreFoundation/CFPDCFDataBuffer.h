@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } *data;
}

- (unsigned long long)length;
- (id)copyXPCData;
- (id)initWithCFData:(struct __CFData { } *)a0;
- (void *)bytes;
- (struct __CFData { } *)copyCFData;
- (void)dealloc;

@end
