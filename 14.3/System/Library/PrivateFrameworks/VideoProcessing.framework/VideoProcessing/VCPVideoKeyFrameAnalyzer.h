@class VCPImageFaceQualityAnalyzer, NSArray, NSDictionary, VCPVideoKeyFrame, VCPFrameAnalysisStats, NSMutableArray, VCPImageBlurAnalyzer;

@interface VCPVideoKeyFrameAnalyzer : NSObject {
    VCPImageBlurAnalyzer *_blurAnalyzer;
    VCPImageFaceQualityAnalyzer *_faceQualityAnalyzer;
    NSDictionary *_faceRanges;
    NSArray *_junkResults;
    NSMutableArray *_keyFrames;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
    VCPVideoKeyFrame *_activeKeyFrame;
    VCPFrameAnalysisStats *_frameStats;
    BOOL _isLivePhoto;
    NSMutableArray *_keyFrameScores;
    NSArray *_inputKeyFrameResults;
}

- (void).cxx_destruct;
- (void)setKeyFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 isHeadingFrame:(BOOL)a1;
- (void)prepareFrameStats:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)computeSharpnessOfFrame:(struct __CVBuffer { } *)a0;
- (int)computeFaceQualityOfFrame:(struct __CVBuffer { } *)a0;
- (int)finalizeKeyFrame;
- (void)adjustScoreByFace;
- (void)modulateByJunk;
- (void)modulateByTimeRange;
- (void)setBlurAnalyzerFaceResults:(id)a0;
- (int)loadKeyFrameResults:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)modulateByExposure;
- (float)computeMinDistanceBetween:(id)a0 withSet:(id)a1;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 isLivePhoto:(BOOL)a2 frameStats:(id)a3 keyFrameResults:(id)a4;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)preparePostProcessingStatsFromFaceRange:(id)a0 junkResults:(id)a1;
- (int)postProcess;
- (id)keyFrameScores;
- (id)keyFrames;

@end
