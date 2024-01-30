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
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithRotationDegrees:(int)a0 separateDepthComponentsEnabled:(BOOL)a1 depthProvidedAsAttachedMedia:(BOOL)a2;

@end
