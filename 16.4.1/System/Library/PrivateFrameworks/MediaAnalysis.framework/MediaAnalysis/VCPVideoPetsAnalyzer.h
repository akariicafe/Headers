@class VCPImagePetsAnalyzer, NSMutableArray, NSArray;

@interface VCPVideoPetsAnalyzer : VCPVideoAnalyzer {
    NSMutableArray *_petsDetections;
    NSMutableArray *_petsFaceDetections;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcess;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _petsStart;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _petsFaceStart;
    VCPImagePetsAnalyzer *_petsAnalyer;
    NSArray *_petsActiveRegions;
    NSArray *_petsFaceActiveRegions;
}

- (id)results;
- (void).cxx_destruct;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)addDetectionToDict:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 withActiveRegions:(id)a1 forPetsDetections:(id)a2 fromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3 frameStats:(id)a4;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)parseResults:(id)a0 toDetections:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 fromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a3 addActiveRegions:(id)a4;

@end
