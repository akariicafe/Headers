@class MIOPixelBufferPool;

@interface y416ToRawBayerPostProcessor : DefaultPostProcessor {
    MIOPixelBufferPool *_pool;
}

- (void).cxx_destruct;
- (struct __CVBuffer { } *)processedPixelBufferFrom:(struct __CVBuffer { } *)a0 metadata:(id)a1 error:(id *)a2;
- (unsigned int)processedPixelFormat;

@end
