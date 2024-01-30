@class VCPMotionFlowRequest;

@interface VCPMotionFlowAnalyzer : VCPVideoAnalyzer {
    float *_flow;
    BOOL _scale;
    struct Scaler { struct __CVPixelBufferPool *pool_; int width_; int height_; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } crop_rect_; struct __IOSurfaceAccelerator *hw_scaler_; struct OpaqueVTPixelTransferSession *sw_scaler_; } _scaler;
    VCPMotionFlowRequest *_moflowRequest;
    struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> { struct __CVBuffer **__begin_; struct __CVBuffer **__end_; struct __compressed_pair<__CVBuffer **, std::allocator<__CVBuffer *>> { struct __CVBuffer **__value_; } __end_cap_; } _frameArray;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    int _frameWidth;
    int _frameHeight;
    int _downScaleWidth;
    int _downScaleHeight;
    int _flowWidth;
    int _flowHeight;
    int _frameNum;
    BOOL _initialized;
}

- (int)createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(int)a2 pixelBuffer:(struct __CVBuffer **)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 withFrame:(void *)a1 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (int)convertPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer **)a1 withPixelFormat:(int)a2;
- (int)convertFlow:(struct __CVBuffer { } *)a0;
- (int)prepareAnalyzerWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (int)preProcessing:(struct __CVBuffer { } *)a0;
- (int)generateMotionFlow;

@end
