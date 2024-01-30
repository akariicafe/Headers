@class PVTransformAnimation, JFXFaceTrackedEffectTransform;

@interface JFXOverlayEffectTransforms : JFXTextEffectTransforms

@property (copy, nonatomic) PVTransformAnimation *transformAnimation;
@property (copy, nonatomic) JFXFaceTrackedEffectTransform *faceTrackingTransform;

+ (id)transformsWithTransform:(id)a0 transformAnimation:(id)a1 faceTrackingTransform:(id)a2;
+ (id)transformsWithEffect:(id)a0;

- (void).cxx_destruct;
- (id)initWithEffect:(id)a0;
- (id)initWithTransform:(id)a0 transformAnimation:(id)a1 faceTrackingTransform:(id)a2;
- (void)applyToEffect:(id)a0;

@end
