@interface MTLIOCompressor : NSObject {
    void *context;
}

- (void)appendData:(id)a0;
- (void)dealloc;
- (long long)close;
- (id)initWithType:(long long)a0 dst:(id)a1 chunkSize:(unsigned long long)a2;

@end
