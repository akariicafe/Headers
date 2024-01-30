@class VCPVideoFaceMeshAnalyzer, VCPFrameAnalysisStats;

@interface VCPVideoLightFaceDetector : VCPVideoFaceDetector {
    int _lastestFaceID;
    int _numFacesLastFrame;
    VCPFrameAnalysisStats *_frameStats;
    VCPVideoFaceMeshAnalyzer *_meshAnalyzer;
    float *_lastVertices;
    float _lastJawOpenness;
}

- (void).cxx_destruct;
- (void)dealloc;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 frameStats:(id)a1 faceDominated:(BOOL)a2;
- (float)minProcessTimeIntervalInSecs;
- (int)detectFaces:(struct __CVBuffer { } *)a0 faces:(id)a1;

@end
