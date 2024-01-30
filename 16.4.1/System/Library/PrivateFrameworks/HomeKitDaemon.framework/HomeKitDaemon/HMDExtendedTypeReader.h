@class HMDStructuredReader;

@interface HMDExtendedTypeReader : HMDTokenBasedStructuredReader {
    HMDStructuredReader *_reader;
    struct _HMDStructuredDataToken { long long type; id value; } _buffer[4];
    unsigned long long _bufferHead;
    unsigned long long _bufferCount;
}

- (void).cxx_destruct;
- (id)initWithReader:(id)a0;
- (struct _HMDStructuredDataToken { long long x0; id x1; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x0; id x1; } *)a0;

@end
