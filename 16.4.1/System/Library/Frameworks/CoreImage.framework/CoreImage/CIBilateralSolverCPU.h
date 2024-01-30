@interface CIBilateralSolverCPU : NSObject {
    int _width;
    int _height;
    unsigned long long _maxVertices;
    float *_Dn_buf;
    float *_Dm_buf;
    float *_A_buf;
    float *_b_buf;
    float *_x_buf;
    float *_M_buf;
    float *_Sc_buf;
    float *_q_buf;
    float *_r_buf;
    float *_d_buf;
}

@property (nonatomic) BOOL useTrilinearInterpolation;

+ (void)_computeAx:(id)a0 A:(const float *)a1 Dn:(const float *)a2 lambda:(float)a3 x:(const float *)a4 output:(float *)a5;

- (void)dealloc;
- (void)_doBistochastize:(id)a0 nIterations:(int)a1;
- (void)_doSolve:(id)a0 t:(const struct __CVBuffer { } *)a1 c:(const struct __CVBuffer { } *)a2 x:(float *)a3 lambda:(float)a4 pcgMaxIterations:(int)a5;
- (void)_pcg:(id)a0 A:(const float *)a1 lambda:(float)a2 b:(const float *)a3 x:(float *)a4 M:(const float *)a5 tol:(float)a6 maxIterations:(int)a7;
- (int)doSolveWithBilateralGridhash:(id)a0 reference:(struct __IOSurface { } *)a1 disparity:(struct __CVBuffer { } *)a2 confidence:(struct __CVBuffer { } *)a3 output:(struct __CVBuffer { } *)a4 lambda:(float)a5 maxIterations:(int)a6;
- (id)initWithWidth:(int)a0 height:(int)a1 maxVertices:(unsigned long long)a2;

@end
