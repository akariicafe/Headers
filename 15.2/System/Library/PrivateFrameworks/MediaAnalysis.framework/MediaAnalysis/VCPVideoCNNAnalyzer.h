@class VCPVideoCNNAutoplay, VCPVideoPersonDetector, NSString, VCPVideoCNNBackbone, NSMutableArray;

@interface VCPVideoCNNAnalyzer : VCPVideoAnalyzer {
    VCPVideoCNNBackbone *_backbone;
    NSMutableArray *_tasks;
    NSMutableArray *_postTasks;
    float *_inputData;
    int _inputWidth;
    int _inputHeight;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcess;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastDetection;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeStart;
    int _validFrames;
    BOOL _enoughFrames;
    VCPVideoPersonDetector *_personDetector;
    NSString *_resConfig;
    VCPVideoCNNAutoplay *_autoplay;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _regionCrop;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeEnd;
    BOOL _postInference;
}

+ (BOOL)forcePersonDetection;

- (id)results;
- (void).cxx_destruct;
- (void)dealloc;
- (int)configForAspectRatio:(float)a0;
- (struct __CVBuffer { } *)cropAndScale:(struct __CVBuffer { } *)a0 regionCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (int)copyImage:(struct __CVBuffer { } *)a0 withChannels:(int)a1;
- (int)runTasks:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 persons:(id)a2 regionCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)initWithTimeOfInteret:(id)a0 frameRate:(float)a1 phFaces:(id)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (int)loadAnalysisResults:(id)a0 audioResults:(id)a1;

@end
