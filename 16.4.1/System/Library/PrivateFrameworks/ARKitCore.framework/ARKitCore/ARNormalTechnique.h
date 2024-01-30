@interface ARNormalTechnique : ARTechnique {
    struct __CVPixelBufferPool { } *_normalPixelBufferPool;
    struct CV3DNormalEstimationSession { } *_session;
}

- (void)dealloc;
- (id)processData:(id)a0;
- (id)init;

@end
