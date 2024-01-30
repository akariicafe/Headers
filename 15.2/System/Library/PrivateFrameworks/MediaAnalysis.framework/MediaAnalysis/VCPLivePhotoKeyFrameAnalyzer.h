@interface VCPLivePhotoKeyFrameAnalyzer : NSObject {
    BOOL _photoSharpnessReliable;
    float _photoSharpness;
    BOOL _petsDominant;
    BOOL _ignoreFace;
    char *_faceHeatMap;
    int _width;
    int _height;
    int _numOfFrames;
}

- (id)initWithWidth:(int)a0 height:(int)a1;
- (void)dealloc;
- (void)createFaceHeatMap:(id)a0 imageFaces:(id)a1;
- (float)computeOverallFaceQualityScore:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })selectKeyFrameRangeWithMotion:(id)a0 stillTimestamp:(float)a1 isMetaMotion:(BOOL)a2;
- (void)fetchAndComputeScoreForKeyFrame:(id)a0 withResult:(id)a1;
- (float)computeScoreForPhoto:(float)a0 withRefKeyFrame:(id)a1;
- (int)reportLivePhotoKeyFrameAnalysisResults:(BOOL)a0 selectedKeyFrame:(id)a1 originalStillKeyFrame:(id)a2 stillScore:(float)a3 stillFQScore:(float)a4 stillTimestamp:(float)a5 useSemanticOnly:(BOOL)a6 isKeyFrameSuggested:(BOOL)a7;
- (float)getFaceHeat:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateFaceHeatMap:(id)a0;
- (int)analyzeLivePhotoKeyFrame:(id)a0 irisPhotoOffsetSec:(float)a1 originalIrisPhotoOffsetSec:(float)a2 photoTextureScore:(float)a3 hadFlash:(BOOL)a4 cancel:(id /* block */)a5;

@end
