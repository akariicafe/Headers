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
- (int)computeBarycentricCoordinates;
- (void)computeControlPointsCamera:(const float *)a0 Vt:(void *)a1;
- (int)computeL6x10:(void *)a0 L6x10:(void *)a1;
- (void)computePoints3DCamera;
- (float)computeProjectionError:(float[3][3])a0 T:(float[3])a1;
- (void)computeR6x1:(void *)a0;
- (int)computeRT:(float[3][3])a0 T:(float[3])a1;
- (int)computeSVDVt:(void *)a0 Vt:(void *)a1;
- (int)configureGaussNewton:(void *)a0 R6x1:(void *)a1 betas:(float[4])a2 jacobian:(void *)a3 residual:(void *)a4;
- (int)correctSigns;
- (int)estimateBetasN1:(void *)a0 R6x1:(void *)a1 betas:(float *)a2;
- (int)estimateBetasN2:(void *)a0 R6x1:(void *)a1 betas:(float *)a2;
- (int)estimateBetasN3:(void *)a0 R6x1:(void *)a1 betas:(float *)a2;
- (int)estimateExtrinsicsWith:(const float *)a0 andPoints3D:(const float *)a1 andNumPoints:(int)a2;
- (int)estimatePose:(float *)a0;
- (int)estimateRT:(void *)a0 betas:(const float *)a1 R:(float[3][3])a2 T:(float[3])a3 projectionError:(float *)a4;
- (int)getControlPoints;
- (id)initWithFocalLengthInPixels:(float)a0 principalPoint:(struct CGPoint { double x0; double x1; })a1 cameraTowardsPositiveZ:(BOOL)a2;
- (int)optimizeBetas:(void *)a0 R6x1:(void *)a1 betas:(float[4])a2;
- (void)updateFocalLengthInPixels:(float)a0;
- (void)updateIntrinsic:(float)a0 vc:(float)a1;

@end
