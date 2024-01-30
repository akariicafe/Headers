@class VCPVideoActivityDescriptor, VCPFrameAnalysisStats, VCPCNNModel, VCPCNNData, NSMutableArray, NSNumber;

@interface VCPVideoActivityAnalyzer : VCPVideoAnalyzer {
    VCPFrameAnalysisStats *_frameStats;
    VCPVideoActivityDescriptor *_activityDescriptor;
    NSMutableArray *_activityScores;
    NSMutableArray *_validActivityScores;
    NSMutableArray *_qualityResults;
    NSMutableArray *_interestingnessResults;
    NSMutableArray *_obstructionResults;
    NSMutableArray *_classificationResults;
    NSMutableArray *_fineActionResults;
    NSMutableArray *_faceResults;
    NSMutableArray *_results;
    float _sceneSwitchFrequency;
    long long _numOfFrames;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastProcessTime;
    float _overallActivityLevel;
    VCPCNNModel *_model;
    VCPCNNData *_input;
    NSNumber *_sportsSceneId;
}

- (id)results;
- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (void)normalizeActivityDescriptor;
- (int)prepareActivityStats;
- (void)generateActivityDescriptor;
- (int)computeActivityScoreAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)resetActivityStatsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)extractRequiredInfoFrom:(id)a0 toArray:(id)a1;
- (int)extractRequiredClassificationInfoFrom:(id)a0 toArray:(id)a1;
- (int)extractRequiredFaceInfoFrom:(id)a0 toArray:(id)a1;
- (float)validationScoreOfTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 fromResult:(id)a1 startIdx:(int *)a2;
- (float)actionScoreInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)validateActivityScores;
- (float)scaleBasedOnFaceForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)addSceneSwitchFrequencyConstributionToActivityLevel:(float *)a0;
- (void)addSceneClassificationContributionToActivityLevel:(float *)a0;
- (id)initWithFrameStats:(id)a0;
- (int)preProcessQualityResults:(id)a0 interestingnessResults:(id)a1 obstructionResults:(id)a2 classificationResults:(id)a3 fineActionResults:(id)a4 faceResults:(id)a5 sceneSwitchFrequency:(float)a6;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 fpsRate:(float)a1;

@end
