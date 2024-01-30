@interface L008ToNonPlanarPostProcessor : DefaultPostProcessor {
    struct __CVPixelBufferPool { } *_pool;
}

- (void)dealloc;
- (struct __CVBuffer { } *)processedPixelBufferFrom:(struct __CVBuffer { } *)a0 metadata:(id)a1 error:(id *)a2;
- (unsigned int)processedPixelFormat;

@end
