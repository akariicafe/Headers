@class NSArray, NSDictionary, VCPFrameAnalysisStats, VCPVideoKeyFrameAnalyzer, VCPMovieHighlightAnalyzer;

@interface VCPMovieCurationAnalyzer : NSObject {
    VCPVideoKeyFrameAnalyzer *_keyFrameAnalyzer;
    VCPMovieHighlightAnalyzer *_highlightAnalyzer;
    NSArray *_descriptorResults;
    NSArray *_qualityResuls;
    NSArray *_junkResults;
    NSArray *_faceResults;
    NSArray *_actionResults;
    NSArray *_subtleMotionResults;
    NSArray *_voiceResults;
    NSArray *_sceneResults;
    NSArray *_humanActionResults;
    NSArray *_humanPoseResults;
    NSArray *_cameraMotionResults;
    NSArray *_saliencyResults;
    NSArray *_orientationResults;
    NSDictionary *_faceRanges;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
    struct CGSize { double width; double height; } _frameSize;
    VCPFrameAnalysisStats *_frameStats;
    BOOL _isLivePhoto;
    BOOL _hadFlash;
    BOOL _hadZoom;
}

- (void).cxx_destruct;
- (id)results;
- (void)setMaxHighlightDuration:(float)a0;
- (int)postProcessKeyFrames;
- (void)reportMovieCurationAnalysisResults:(id)a0 withSummaryAnalytics:(id)a1;
- (void)addHighlight:(id)a0 to:(id)a1;
- (void)addSummary:(id)a0 to:(id)a1;
- (id)initWithAnalysisTypes:(unsigned long long)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 isLivePhoto:(BOOL)a3 frameStats:(id)a4 hadFlash:(BOOL)a5 hadZoom:(BOOL)a6 keyFrameResults:(id)a7;
- (int)generateMovieCurations;
- (int)analyzeKeyFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (void)loadVideoAnalysisResults:(id)a0 audioAnalysisResults:(id)a1 andFaceRanges:(id)a2 frameSize:(struct CGSize { double x0; double x1; })a3;

@end
