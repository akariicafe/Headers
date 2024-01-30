@interface PHAssetAestheticProperties : PHAssetPropertySet

@property (readonly, nonatomic) float wellFramedSubjectScore;
@property (readonly, nonatomic) float wellChosenSubjectScore;
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
@property (readonly, nonatomic) float lowLight;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (void)initWithDefaultValues;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
