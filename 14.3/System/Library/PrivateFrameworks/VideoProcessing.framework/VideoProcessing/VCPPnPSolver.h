@interface VCPPnPSolver : NSObject {
    float _fu;
    float _fv;
    float _uc;
    float _vc;
    const float *_points2D;
    const float *_points3D;
    int _numPoints;
    float _controlPointsWorld[4][3];
    float _controlPointsCamera[4][3];
    const float *_pointsWorld;
    const float *_pointsImage;
    float *_alphas;
    float *_points3DCamera;
    float _cameraOrientation;
}

@property struct { void /* unknown type, empty encoding */ columns[4]; } pose;

- (void)dealloc;
- (int)estimateExtrinsicsWith:(const float *)a0 andPoints3D:(const float *)a1 andNumPoints:(int)a2;
- (void)computePoints3DCamera;
- (void)computeControlPointsCamera:(const float *)a0 Vt:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a1;
- (int)correctSigns;
- (int)computeRT:(float[3][3])a0 T:(float[3])a1;
- (float)computeProjectionError:(float[3][3])a0 T:(float[3])a1;
- (int)configureGaussNewton:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a0 R6x1:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a1 betas:(float[4])a2 jacobian:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a3 residual:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a4;
- (int)getControlPoints;
- (int)computeBarycentricCoordinates;
- (int)computeSVDVt:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a0 Vt:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a1;
- (int)computeL6x10:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a0 L6x10:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a1;
- (void)computeR6x1:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a0;
- (int)estimateBetasN1:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a0 R6x1:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a1 betas:(float *)a2;
- (int)estimateBetasN2:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a0 R6x1:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a1 betas:(float *)a2;
- (int)estimateBetasN3:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a0 R6x1:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a1 betas:(float *)a2;
- (int)optimizeBetas:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a0 R6x1:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a1 betas:(float[4])a2;
- (int)estimateRT:(struct Matrix<float, 0, 0, false> { float *x0; unsigned long long x1; unsigned int x2; unsigned int x3; } *)a0 betas:(const float *)a1 R:(float[3][3])a2 T:(float[3])a3 projectionError:(float *)a4;
- (int)estimatePose:(float *)a0;
- (id)initWithFocalLengthInPixels:(float)a0 principalPoint:(struct CGPoint { double x0; double x1; })a1 cameraTowardsPositiveZ:(BOOL)a2;
- (void)updateIntrinsic:(float)a0 vc:(float)a1;
- (void)updateFocalLengthInPixels:(float)a0;

@end
