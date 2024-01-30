@interface BWMonochromeEffectNode : BWNode {
    struct OpaqueVTPixelTransferSession { } *_decompressionSession;
    unsigned int _mode;
}

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)setMode:(unsigned int)a0;
- (id)nodeType;
- (id)init;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (unsigned int)mode;

@end
