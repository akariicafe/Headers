@class VCPFrameAnalysisStats, VCPImageHumanPoseAnalyzer, NSMutableArray, VCPVideoObjectTracker;

@interface VCPVideoHumanActionAnalyzer : VCPVideoAnalyzer {
    VCPImageHumanPoseAnalyzer *_poseAnalyzer;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcess;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcessFullFrame;
    NSMutableArray *_bodyArray;
    float _maxScore;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _endTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startTime;
    NSMutableArray *_actionResults;
    NSMutableArray *_keyPersonResults;
    NSMutableArray *_poseResults;
    NSMutableArray *_activePoseResults;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _crop;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _humanRect;
    float _actionScoreAbsolute;
    float _actionScoreRelative;
    float _scoreAbsoluteMax;
    float _scoreRelativeMax;
    float _humanPoseScore;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastHumanTimestamp;
    VCPFrameAnalysisStats *_frameStats;
    VCPVideoObjectTracker *_tracker;
    BOOL _tracking;
}

- (void)computeVar:(int)a0 index2:(int)a1 interVar:(float *)a2 intraVar:(float *)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaleX:(float)a1 scaleY:(float)a2;
- (void)computeActionScore;
- (float)intersectionOverUnion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addActiveResults:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)processPersons:(id)a0 humanBounds:(id)a1 dominantPersonIdx:(int)a2 frame:(struct __CVBuffer { } *)a3 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5;
- (void).cxx_destruct;
- (id)results;
- (id)privateResults;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (id)initWithFrameStats:(id)a0;
- (float)normDistance:(id)a0 point2:(id)a1;

@end
