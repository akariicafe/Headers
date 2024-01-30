@interface BWDepthRotatorNode : BWNode {
    struct opaqueCMFormatDescription { } *_outputDepthFormatDescription;
    struct opaqueCMFormatDescription { } *_outputDYFormatDescription;
    unsigned int _inputDepthFormat;
    struct { int width; int height; } _inputDepthDimensions;
    int _rotationDegrees;
    long long _bufferSerialNumber;
    BOOL _separateDepthComponentsEnabled;
    BOOL _depthProvidedAsAttachedMedia;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_updateDepthOutputFormatRequirementsForInputFormat:(id)a0 pixelFormat:(unsigned int)a1 attachedMediaKey:(id)a2;
- (id)initWithRotationDegrees:(int)a0 separateDepthComponentsEnabled:(BOOL)a1 depthProvidedAsAttachedMedia:(BOOL)a2;
- (void)_setupDepthMediaConfigurationForOutput:(id)a0 attachedMediaKey:(id)a1;

@end
