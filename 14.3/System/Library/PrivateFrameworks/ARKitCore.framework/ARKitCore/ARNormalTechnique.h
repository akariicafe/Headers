@interface ARNormalTechnique : ARTechnique {
    struct __CVPixelBufferPool { } *_normalPixelBufferPool;
    struct CV3DNormalEstimationSession { } *_session;
}

- (id)init;
- (id)processData:(id)a0;
- (void)dealloc;

@end
