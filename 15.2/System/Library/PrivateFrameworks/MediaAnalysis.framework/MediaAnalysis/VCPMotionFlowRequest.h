@class VCPModelR2D2;

@interface VCPMotionFlowRequest : VCPRequest {
    VCPModelR2D2 *_model;
    int _numLevels;
    int _startLevel;
    int _preferredWidth;
    int _preferredHeight;
    unsigned int _preferredFormat;
    struct __CVBuffer { } *_firstBuffer;
    struct __CVBuffer { } *_secondBuffer;
    struct __CVBuffer { } *_outputFlow;
}

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (unsigned int)preferredPixelFormat;
- (struct CGSize { double x0; double x1; })preferredInputSizeWithOptions:(id)a0 error:(id *)a1;
- (BOOL)updateWithOptions:(id)a0 error:(id *)a1;
- (BOOL)cleanupWithOptions:(id)a0 error:(id *)a1;
- (id)estimateMotionBetweenFirstImage:(struct __CVBuffer { } *)a0 andSecondImage:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (int)allocateInputAndOutputBuffers;
- (int)copyImage:(struct __CVBuffer { } *)a0 toBuffer:(struct __CVBuffer { } *)a1 withChannels:(int)a2;
- (int)createInput:(struct __CVBuffer { } *)a0 withImage:(struct __CVBuffer { } *)a1 modelInputHeight:(int)a2 modelInputWidth:(int)a3;
- (int)releaseInputAndOutputBuffers;

@end
