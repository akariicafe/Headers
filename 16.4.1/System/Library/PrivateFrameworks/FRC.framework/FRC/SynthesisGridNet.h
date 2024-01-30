@interface SynthesisGridNet : EspressoModel {
    struct __CVPixelBufferPool *_bufferPools[3];
    struct { struct __CVBuffer *features[5]; } _intermediateBuffer;
}

- (id)initWithMode:(long long)a0;
- (void)dealloc;
- (BOOL)synthesizeFrameFromFeatureForward:(struct { struct __CVBuffer *x0[5]; } *)a0 backward:(struct { struct __CVBuffer *x0[5]; } *)a1 destination:(struct __CVBuffer { } *)a2 pyramidStartLevel:(unsigned long long)a3 callback:(id /* block */)a4;

@end
