@class NSArray, AVAssetImageGenerator, VCPColorNormalizationAnalyzer, NSMutableArray;

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
    NSMutableArray *_highlightResults;
    NSMutableArray *_internalConstraintResults;
    struct CGSize { double width; double height; } _frameSize;
    float _maxDurationInSeconds;
    float _minDurationInSeconds;
    float _targetDurationInSeconds;
    float _toleranceInSeconds;
    int _targetHighlightIndex;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _startRange;
    BOOL _isMaxTrim;
    BOOL _requestBestTrim;
    BOOL _requestFullResult;
    float _maxHighlightScore;
    float _minHighlightScore;
    BOOL _isLivePhoto;
    BOOL _verbose;
    BOOL _hadFlash;
    BOOL _hadZoom;
    BOOL _isTimelapse;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _preferredTimeRange;
    AVAssetImageGenerator *_imageGenerator;
    VCPColorNormalizationAnalyzer *_colorNormalizationAnalyzer;
}

+ (float)getMinimumHighlightInSec;

- (id)results;
- (void).cxx_destruct;
- (BOOL)addSegment:(id)a0;
- (id)movieSummary;
- (void)setMaxHighlightDuration:(float)a0;
- (id)initWithAnalysisType:(unsigned long long)a0 isLivePhoto:(BOOL)a1 hadFlash:(BOOL)a2 hadZoom:(BOOL)a3 isTimelapse:(BOOL)a4 preferredTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a5 asset:(id)a6;
- (int)prepareRequiredQualityResult:(id)a0 junkDetectionResult:(id)a1 descriptorResult:(id)a2 faceResult:(id)a3 saliencyResult:(id)a4 actionResult:(id)a5 subtleMotionResult:(id)a6 voiceResult:(id)a7 keyFrameResult:(id)a8 sceneResults:(id)a9 humanActionResults:(id)a10 humanPoseResults:(id)a11 cameraMotionResults:(id)a12 orientationResults:(id)a13 frameSize:(struct CGSize { double x0; double x1; })a14;
- (int)generateHighlights;
- (id)highlightScoreResults;
- (int)computeHighlightScoreResults;
- (int)selectHighlightsForTimelapse;
- (int)selectHighlights;
- (int)evaluateSegment:(id)a0;
- (int)computeColorNormalization;
- (void)loadHighlightScoreResults:(id)a0;
- (id)maxTrimMovieHighlight:(id)a0;
- (id)targetProcessRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 maxRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)targetMovieHighlight:(id)a0 mergedRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 maxRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (BOOL)isGoodQuality:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)targetTrimRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 searchRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)targetExtendRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 maxRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)findBestHighlightSegment:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 targetTrim:(BOOL)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })findBestTrim:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)highlightScoreForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 average:(BOOL)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })computeQualityTrimFor:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 withKeyFrame:(BOOL)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })computeTrimWithHighlightScoreFor:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)pickKeyFramesInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)searchFeatureVectorOfSegment:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeBestPlaybackCrop:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })computeActionFaceTrimFor:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })computeSteadyTranslationTrimFor:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)checkCameraZoom:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)generateExpressionSegments:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)analyzeOverallQuality:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)computeExpressionScoreInTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)computeActionScoreInTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)computeVoiceScoreInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)computeHighlightScoreOfSegment:(id)a0;
- (float)qualityScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)junkScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 lengthScale:(BOOL)a1;
- (float)computeSubtleMotionScoreInTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)cameraMotionScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)computeHumanActionScoreInTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)computeHumanPoseScoreInTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)actionScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)subtleMotionScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)expressionScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)voiceScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)visualPleasingScoreForTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithPostProcessOptions:(id)a0;
- (id)postProcessMovieHighlight:(id)a0;
- (float)computeHighlightScoreOfRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)SetKeyFramesForSegments:(id)a0;
- (int)pickHighlightsFrom:(id)a0;

@end
