@interface ARNormalTechnique : ARTechnique {
    struct __CVPixelBufferPool { } *_normalPixelBufferPool;
    struct CV3DNormalEstimationSession { } *_session;
}

- (id)processData:(id)a0;
- (id)init;
- (void)dealloc;

@end
