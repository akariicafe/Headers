@class NSDictionary, NSMutableDictionary;

@interface VCPVideoFaceDetector : VCPVideoAnalyzer {
    int _angle;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastDetection;
    NSMutableDictionary *_activeFaces;
    NSDictionary *_results;
}

+ (id)faceDetectorWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withExistingFaceprints:(id)a1 frameStats:(id)a2 tracking:(BOOL)a3 faceDominated:(BOOL)a4 cancel:(id /* block */)a5;

- (void).cxx_destruct;
- (id)results;
- (id)faceRanges;

@end
