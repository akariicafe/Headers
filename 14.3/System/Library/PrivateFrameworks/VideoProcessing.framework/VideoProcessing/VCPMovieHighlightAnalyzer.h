@class NSArray, NSMutableArray;

@interface VCPMovieHighlightAnalyzer : NSObject {
    NSArray *_junkResults;
    NSArray *_qualityResults;
    NSArray *_faceResults;
    NSArray *_saliencyResults;
    NSArray *_actionResults;
    NSArray *_subtleMotionResults;
    NSArray *_voiceResults;
    NSArray *_featureResults;
    NSArray *_humanActionResults;
    NSArray *_humanPoseResults;
    NSArray *_cameraMotionResults;
    NSArray *_keyFrameResults;
    NSArray *_sceneResults;
    NSArray *_orientationResults;
    NSMutableArray *_expressionSegments;
    NSMutableArray *_internalResults;
    NSMutableArray *_internalConstraintResults;
    struct CGSize { double width; double height; } _frameSize;
    float _maxDurationInSeconds;
    BOOL _isLivePhoto;
    BOOL _verbose;
    BOOL _hadFlash;
    BOOL _hadZoom;
}

- (void).cxx_destruct;
- (id)results;
- (BOOL)addSegment:(id)a0;
- (id)initWithAnalysisType:(unsigned long long)a0 isLivePhoto:(BOOL)a1 hadFlash:(BOOL)a2 hadZoom:(BOOL)a3;
- (void)setMaxHighlightDuration:(float)a0;
- (int)generateHighlights;
- (int)prepareRequiredQualityResult:(id)a0 junkDetectionResult:(id)a1 descriptorResult:(id)a2 faceResult:(id)a3 saliencyResult:(id)a4 actionResult:(id)a5 subtleMotionResult:(id)a6 voiceResult:(id)a7 keyFrameResult:(id)a8 sceneResults:(id)a9 humanActionResults:(id)a10 humanPoseResults:(id)a11 cameraMotionResults:(id)a12 orientationResults:(id)a13 frameSize:(struct CGSize { double x0; double x1; })a14;
- (id)movieSummary;
- (int)generateInitialSegments;
- (int)computeHighlightScoreWithConstraint;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })computeQualityTrimFor:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 withKeyFrame:(BOOL)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })computeActionFaceTrimFor:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })computeSteadyTranslationTrimFor:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)checkCameraZoom:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)generateExpressionSegments:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)analyzeOverallQuality:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)pickKeyFramesInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeBestPlaybackCrop:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)junkScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)qualityScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)SetKeyFramesForSegments:(id)a0;
- (float)computeExpressionScoreInTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)computeActionScoreInTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)computeVoiceScoreInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (int)pickHighlightsFrom:(id)a0;
- (void)searchFeatureVectorOfSegment:(id)a0;
- (void)computeHighlightScoreOfSegment:(id)a0;
- (int)evaluateSegment:(id)a0;
- (float)computeHumanActionScoreInTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)computeHumanPoseScoreInTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)actionScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)subtleMotionScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)expressionScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)voiceScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)cameraMotionScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)visualPleasingScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)computeHighlightScoreOfRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)mergeShortSegments;
- (void)mergeSimilarSegments;

@end
