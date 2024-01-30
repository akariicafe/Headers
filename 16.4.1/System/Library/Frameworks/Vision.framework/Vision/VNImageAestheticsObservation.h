@interface VNImageAestheticsObservation : VNObservation

@property (readonly, nonatomic) float aestheticScore;
@property (readonly, nonatomic) float wellFramedSubjectScore;
@property (readonly, nonatomic) float wellChosenBackgroundScore;
@property (readonly, nonatomic) float tastefullyBlurredScore;
@property (readonly, nonatomic) float sharplyFocusedSubjectScore;
@property (readonly, nonatomic) float wellTimedShotScore;
@property (readonly, nonatomic) float pleasantLightingScore;
@property (readonly, nonatomic) float pleasantReflectionsScore;
@property (readonly, nonatomic) float harmoniousColorScore;
@property (readonly, nonatomic) float livelyColorScore;
@property (readonly, nonatomic) float pleasantSymmetryScore;
@property (readonly, nonatomic) float pleasantPatternScore;
@property (readonly, nonatomic) float immersivenessScore;
@property (readonly, nonatomic) float pleasantPerspectiveScore;
@property (readonly, nonatomic) float pleasantPostProcessingScore;
@property (readonly, nonatomic) float noiseScore;
@property (readonly, nonatomic) float failureScore;
@property (readonly, nonatomic) float pleasantCompositionScore;
@property (readonly, nonatomic) float interestingSubjectScore;
@property (readonly, nonatomic) float intrusiveObjectPresenceScore;
@property (readonly, nonatomic) float pleasantCameraTiltScore;
@property (readonly, nonatomic) float lowKeyLightingScore;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)allScorePropertyNames;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_scoresDictionary;
- (id)initWithOriginatingRequestSpecifier:(id)a0 overallAestheticScore:(float)a1 wellFramedSubjectScore:(float)a2 wellChosenBackgroundScore:(float)a3 tastefullyBlurredScore:(float)a4 sharplyFocusedSubjectScore:(float)a5 wellTimedShotScore:(float)a6 pleasantLightingScore:(float)a7 pleasantReflectionsScore:(float)a8 harmoniousColorScore:(float)a9 livelyColorScore:(float)a10 pleasantSymmetryScore:(float)a11 pleasantPatternScore:(float)a12 immersivenessScore:(float)a13 pleasantPerspectiveScore:(float)a14 pleasantPostProcessingScore:(float)a15 noiseScore:(float)a16 failureScore:(float)a17 pleasantCompositionScore:(float)a18 interestingSubjectScore:(float)a19 intrusiveObjectPresenceScore:(float)a20 pleasantCameraTiltScore:(float)a21 lowKeyLightingScore:(float)a22;
- (id)vn_cloneObject;

@end
