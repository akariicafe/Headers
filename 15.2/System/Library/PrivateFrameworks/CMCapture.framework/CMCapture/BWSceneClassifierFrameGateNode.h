@interface BWSceneClassifierFrameGateNode : BWNode {
    BOOL _discardsBlurryFrames;
    int _maxFrameRate;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastEmittedPTS;
    int _inputFrameCount;
}

+ (void)initialize;

- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithMaxOutputFrameRate:(int)a0;
- (void)setDiscardsBlurryFrames:(BOOL)a0;
- (BOOL)discardsBlurryFrames;

@end
