@class NSMutableArray, NSMutableDictionary;

@interface VCPVideoKeyFrame : NSObject {
    float _subjectAction;
    float _cameraMotion;
    float _interestingness;
    float _obstruction;
    float _colorfulness;
    BOOL _isLivePhoto;
    BOOL _subMb;
}

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
@property (nonatomic) float score;
@property (nonatomic) float semanticScore;
@property (nonatomic) float sharpness;
@property (nonatomic) float faceSharpness;
@property (nonatomic) float exposureScore;
@property (nonatomic) BOOL isHeadingFrame;
@property (nonatomic) float textureScore;
@property (nonatomic) float expressionChangeScore;
@property (nonatomic) unsigned long long statsFlags;
@property (retain, nonatomic) NSMutableArray *detectedFaces;
@property (retain, nonatomic) NSMutableArray *faceQualityScores;
@property (retain, nonatomic) NSMutableDictionary *frameResults;
@property (nonatomic) float overallFaceQualityScore;
@property (nonatomic) float qualityScoreForLivePhoto;
@property (nonatomic) float globalQualityScore;
@property (nonatomic) float visualPleasingScore;
@property (nonatomic) float penaltyScore;
@property (nonatomic) float contentScore;
@property (nonatomic) float humanPoseScore;
@property (nonatomic) float humanActionScore;

+ (BOOL)isLivePhotoKeyFrameEnabled;

- (void).cxx_destruct;
- (id)initWithLivePhoto:(BOOL)a0;
- (void)setFaceStatsFlag:(BOOL)a0 detectedFaces:(id)a1;
- (float)computeContentScore;
- (void)computeCurationScore;
- (void)computeCurationScoreComponents;
- (float)computeExpressionScore;
- (float)computeGlobalQuality;
- (void)computeGlobalQualityForLivePhoto;
- (float)computePenaltyScore;
- (float)computeScoreFromAction;
- (float)computeScoreFromColorfulness;
- (float)computeScoreFromExposure;
- (float)computeVisualPleasingScore;
- (void)copyFrom:(id)a0;
- (BOOL)hasGoodSubjectAction;
- (int)loadKeyFrameResult:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)printStats;
- (void)resetStatsFlag;
- (void)setMotionStatsFlag:(BOOL)a0 cameraMotion:(float)a1 subjectAction:(float)a2 interestingness:(float)a3 obstruction:(float)a4 colorfulness:(float)a5 exposureScore:(float)a6 humanActionStatsFlag:(BOOL)a7 humanPoseScore:(float)a8 humanActionScore:(float)a9 subMb:(BOOL)a10;
- (void)storeFrameResults;

@end
