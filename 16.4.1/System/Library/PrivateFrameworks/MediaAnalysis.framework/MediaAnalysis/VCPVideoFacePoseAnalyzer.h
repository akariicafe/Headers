@class VCPVideoFacePoseFilter, VCPCNNFaceLandmarkDetector, VCPPnPSolver;

@interface VCPVideoFacePoseAnalyzer : NSObject {
    VCPCNNFaceLandmarkDetector *_landmarkDetector;
    VCPPnPSolver *_poseEstimator;
    VCPVideoFacePoseFilter *_filter;
    float _focalLengthInPixels;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastTimestamp;
    int _width;
    int _height;
    float _points2D[14];
    float _points3D[21];
}

@property struct { void /* unknown type, empty encoding */ columns[4]; } pose;

- (id)init;
- (void).cxx_destruct;
- (int)analyzeFrameForPose:(struct __CVBuffer { } *)a0 withFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)initWithFocalLengthInPixels:(float)a0;
- (BOOL)updateFocalLengthInPixels:(float)a0;

@end
