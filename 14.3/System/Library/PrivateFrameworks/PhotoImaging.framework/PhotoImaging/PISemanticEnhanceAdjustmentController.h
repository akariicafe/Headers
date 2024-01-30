@class NSArray;

@interface PISemanticEnhanceAdjustmentController : PIAdjustmentController

@property (nonatomic) double intensity;
@property (readonly, nonatomic) long long scene;
@property (readonly, nonatomic) double sceneConfidence;
@property (readonly, copy, nonatomic) NSArray *boundingBoxes;

+ (id)intensityKey;
+ (id)faceBoundingBoxesKey;
+ (id)boundingBoxesKey;
+ (id)sceneConfidenceKey;
+ (id)sceneLabelKey;
+ (id)genericLandscapeSceneLabel;
+ (id)sunriseSunsetSceneLabel;
+ (id)platedFoodSceneLabel;

- (void)setFaceBoundingBoxesFromObservations:(id)a0 orientation:(long long)a1;
- (void)setScene:(long long)a0 confidence:(double)a1;
- (void)setBoundingBoxesFromObservations:(id)a0 orientation:(long long)a1;
- (BOOL)isSettingEqual:(id)a0 forKey:(id)a1;

@end
