@class MIOPixelBufferPool;

@interface L008ToNonPlanarPostProcessor : DefaultPostProcessor <MOVStreamPostProcessorSizeAdjusting> {
    MIOPixelBufferPool *_pool;
}

- (void).cxx_destruct;
- (unsigned long long)adjustedWidthForWidth:(unsigned long long)a0;
- (struct __CVBuffer { } *)processedPixelBufferFrom:(struct __CVBuffer { } *)a0 metadata:(id)a1 error:(id *)a2;
- (unsigned int)processedPixelFormat;

@end
