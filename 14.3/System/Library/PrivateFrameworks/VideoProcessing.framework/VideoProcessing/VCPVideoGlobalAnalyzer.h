@interface VCPVideoGlobalAnalyzer : NSObject

- (BOOL)hasMeaningfulSceneSegment:(id)a0 withFpsRate:(float)a1;
- (float)assetQualityScoreFromAnalysis:(id)a0 withFpsRate:(float)a1;
- (float)assetActionScoreFromAnalysis:(id)a0;
- (float)assetExpressionScoreFromAnalysis:(id)a0;
- (float)assetVoiceScoreFromAnalysis:(id)a0;
- (float)assetJunkScoreFromAnalysis:(id)a0;
- (float)assetCameraMotionScoreFromAnalysis:(id)a0;
- (float)scaleForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 basedOnFace:(id)a1;
- (BOOL)isJunkTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 basedOnResults:(id)a1;
- (float)subjectActivityInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 fromResults:(id)a1;
- (float)cameraActivityfromQuality:(float)a0;
- (float)assetActivityLevelFromAnalysisResults:(id)a0;
- (float)analyzeOverallQuality:(id)a0 withFpsRate:(float)a1;
- (int)generateLivePhotoRecommendationForResults:(id)a0 andPrivateResults:(id)a1 usingFaceAction:(BOOL)a2;
- (int)setActivityLevel:(id)a0;

@end
