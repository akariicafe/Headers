@class VCPImageMotionFlowAnalyzer;

@interface VCPMotionFlowSubtleMotionAnalyzer : VCPVideoAnalyzer {
    float *_flow;
    float *_block;
    BOOL _scale;
    struct Scaler { struct __CVPixelBufferPool *pool_; int width_; int height_; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } crop_rect_; struct __IOSurfaceAccelerator *hw_scaler_; struct OpaqueVTPixelTransferSession *sw_scaler_; } _scaler;
    VCPImageMotionFlowAnalyzer *_motionFlowAnalyzer;
    struct vector<__CVBuffer *, std::__1::allocator<__CVBuffer *> > { struct __CVBuffer **__begin_; struct __CVBuffer **__end_; struct __compressed_pair<__CVBuffer **, std::__1::allocator<__CVBuffer *> > { struct __CVBuffer **__value_; } __end_cap_; } _frameArray;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    int _frameWidth;
    int _frameHeight;
    int _downScaleWidth;
    int _downScaleHeight;
    int _flowWidth;
    int _flowHeight;
    int _blockSize;
    int _frameNum;
    int _sceneType;
    BOOL _initialized;
}

@property (readonly) float subtleMotionScore;

- (id)init;
- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 withFrame:(struct Frame { int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct Translation { float x0; float x1; float x2; } x3; struct Translation { float x0; float x1; float x2; } x4; float x5; unsigned long long x6; float x7; struct Translation { float x0; float x1; float x2; } x8; unsigned int x9; BOOL x10; struct Translation { float x0; float x1; float x2; } x11; float x12; struct MotionResult { float x0[6]; float x1[6]; float x2; float x3; float x4; float x5; float x6; BOOL x7; int x8; float x9; BOOL x10; BOOL x11; int x12; float x13; float x14[2]; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; float x16; float x17; struct Vector<ma::Object *> { struct __CFArray *x0; } x18; struct Vector<ma::Object *> { struct __CFArray *x0; } x19; struct Vector<ma::Object *> { struct __CFArray *x0; } x20; } x13; float x14; float x15; float x16; struct Histogram { float x0; float x1; int *x2[3]; int *x3[2]; } x17; } *)a1 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 hasSubtleScene:(int)a4;
- (void)dealloc;
- (int)convertPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer **)a1 withPixelFormat:(int)a2;
- (int)prepareAnalyzerWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (int)preProcessing:(struct __CVBuffer { } *)a0;
- (int)generateMotionFlow;
- (int)generateSubleMotionScore:(struct Frame { int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct Translation { float x0; float x1; float x2; } x3; struct Translation { float x0; float x1; float x2; } x4; float x5; unsigned long long x6; float x7; struct Translation { float x0; float x1; float x2; } x8; unsigned int x9; BOOL x10; struct Translation { float x0; float x1; float x2; } x11; float x12; struct MotionResult { float x0[6]; float x1[6]; float x2; float x3; float x4; float x5; float x6; BOOL x7; int x8; float x9; BOOL x10; BOOL x11; int x12; float x13; float x14[2]; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; float x16; float x17; struct Vector<ma::Object *> { struct __CFArray *x0; } x18; struct Vector<ma::Object *> { struct __CFArray *x0; } x19; struct Vector<ma::Object *> { struct __CFArray *x0; } x20; } x13; float x14; float x15; float x16; struct Histogram { float x0; float x1; int *x2[3]; int *x3[2]; } x17; } *)a0;
- (id).cxx_construct;
- (int)createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(int)a2 pixelBuffer:(struct __CVBuffer **)a3;

@end
