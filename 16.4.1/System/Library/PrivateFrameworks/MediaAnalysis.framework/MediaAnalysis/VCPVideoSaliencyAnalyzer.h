@class NSMutableDictionary, VCPImageSaliencyAnalyzer, NSArray, NSMutableArray;

@interface VCPVideoSaliencyAnalyzer : VCPVideoAnalyzer {
    NSMutableArray *_detections;
    NSMutableArray *_latestRegions;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastDetection;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastTracking;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _start;
    VCPImageSaliencyAnalyzer *_saliencyAnalyer;
    NSMutableDictionary *_trackers;
    NSMutableDictionary *_confidences;
    NSArray *_activeRegions;
}

- (id)results;
- (void).cxx_destruct;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (float)boundDistance:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 landscape:(BOOL)a2;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)isOutOfBoundary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pruneRegions:(id)a0 withOverlapRatio:(float)a1;
- (float)updateConfidence:(float)a0 prevBound:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 newBound:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 width:(int)a3 height:(int)a4;

@end
