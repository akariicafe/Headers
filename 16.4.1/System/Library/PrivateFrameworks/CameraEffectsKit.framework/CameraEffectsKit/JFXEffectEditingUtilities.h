@interface JFXEffectEditingUtilities : NSObject

@property (class, nonatomic, getter=isStreamingMode) BOOL streamingMode;

+ (unsigned long long)JFX_bestTrackedInsertionPointIndexForOverlay:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 insertionPoints:(id)a2 startingIndex:(unsigned long long)a3 visibilityThreshold:(double)a4 scaleRelativeToCenterSquare:(double)a5 withARMetadata:(id)a6 transformAnimation:(id)a7 playableMediaContentMode:(int)a8 playableInterfaceOrientation:(long long)a9;
+ (struct CGPoint { double x0; double x1; })JFX_closeButtonInsetForEffect:(id)a0 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })JFX_compositionBounds;
+ (struct CGPoint { double x0; double x1; })JFX_convertPoint:(struct CGPoint { double x0; double x1; })a0 fromSize:(struct CGSize { double x0; double x1; })a1 toSize:(struct CGSize { double x0; double x1; })a2 invertY:(BOOL)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })JFX_currentFaceRectRelativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 faceAnchor:(id)a2 transformAnimation:(id)a3 playableMediaContentMode:(int)a4 playableInterfaceOrientation:(long long)a5 playableAspectRatio:(long long)a6 playableAspectRatioPreservationMode:(long long)a7;
+ (id)JFX_hitTestOverlays:(id)a0 atNormalizedPoint:(struct CGPoint { double x0; double x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 forcePosterFrame:(BOOL)a3 adjustForMinimumSize:(BOOL)a4 normalizedMinimumSize:(struct { double x0; double x1; })a5;
+ (void)JFX_setTextRenderingEnabledForEffect:(id)a0 value:(BOOL)a1;
+ (void)JFX_ApplyTextFlipIfNeeded:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })JFX_rectAtNormalizedPointinCenteredSquareInFaceRect:(struct CGPoint { double x0; double x1; })a0 faceAnchor:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 scaleRelativeToCenterSquare:(double)a3 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 transformAnimation:(id)a5 playableMediaContentMode:(int)a6 playableInterfaceOrientation:(long long)a7 playableAspectRatio:(long long)a8 playableAspectRatioPreservationMode:(long long)a9;
+ (void)addTransformToEffect:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 restrictToBounds:(BOOL)a4;
+ (void)applyCameraTrackingTransformToOverlay:(id)a0 withARMetadata:(id)a1 playableInterfaceOrientation:(long long)a2;
+ (void)beginTextEditingForEffect:(id)a0;
+ (BOOL)canEditTextForEffect:(id)a0;
+ (void)configureOverlayForInsertion:(id)a0 atNormalizedPoint:(struct CGPoint { double x0; double x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 isPositionRelativeToCenterSquare:(BOOL)a3 isPositionRelativeToFace:(BOOL)a4 scaleRelativeToCenterSquare:(double)a5 rotationAngle:(double)a6 applyTracking:(BOOL)a7 autoDetectTrackingType:(BOOL)a8 withARMetadata:(id)a9 previewViewCorrectionTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a10 transformAnimation:(id)a11 playableMediaContentMode:(int)a12 playableInterfaceOrientation:(long long)a13 playableAspectRatio:(long long)a14 playableAspectRatioPreservationMode:(long long)a15;
+ (void)configureOverlayForInsertion:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 rotationAngle:(double)a3 applyTracking:(BOOL)a4 autoDetectTrackingType:(BOOL)a5 withARMetadata:(id)a6 previewViewCorrectionTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a7 transformAnimation:(id)a8 playableMediaContentMode:(int)a9 playableInterfaceOrientation:(long long)a10 playableAspectRatio:(long long)a11 playableAspectRatioPreservationMode:(long long)a12;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentFaceRectRelativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 transformAnimation:(id)a2 playableMediaContentMode:(int)a3 playableInterfaceOrientation:(long long)a4 playableAspectRatio:(long long)a5 playableAspectRatioPreservationMode:(long long)a6;
+ (void)disableAnimationForEffects:(id)a0;
+ (void)enableAnimationForEffects:(id)a0 animationStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (void)endTextEditingForEffect:(id)a0;
+ (id)hitTestOverlays:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 adjustForMinimumSize:(BOOL)a4 normalizedMinimumSize:(struct { double x0; double x1; })a5;
+ (id)hitTestOverlaysAtPosterFrame:(id)a0 atNormalizedPoint:(struct CGPoint { double x0; double x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 adjustForMinimumSize:(BOOL)a3 normalizedMinimumSize:(struct { double x0; double x1; })a4;
+ (id)hitTestOverlaysAtPosterFrame:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 adjustForMinimumSize:(BOOL)a4 normalizedMinimumSize:(struct { double x0; double x1; })a5;
+ (unsigned long long)insertionPointIndex;
+ (BOOL)isFaceTrackingDataAvailable;
+ (BOOL)makeOverlayTrackedMaintainingAppearance:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 newTrackingType:(long long)a2 arMetadata:(id)a3 playableInterfaceOrientation:(long long)a4;
+ (unsigned long long)maximumTextLengthForEffect:(id)a0;
+ (id)newTextEditingPropertiesForEffect:(id)a0 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 withNewText:(id)a3;
+ (id)newTextEditingPropertiesForEffect:(id)a0 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 withNewText:(id)a3 moveBeforeScalingToAvoidKeyboard:(BOOL)a4;
+ (unsigned long long)nextInsertionPointIndex;
+ (struct CGPoint { double x0; double x1; })nextNormalizedInsertionPointForOverlay:(id)a0 scaleRelativeToCenterSquare:(double)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 applyTracking:(BOOL)a3 withARMetadata:(id)a4 transformAnimation:(id)a5 playableMediaContentMode:(int)a6 playableInterfaceOrientation:(long long)a7;
+ (id)normalizedInsertionPoints;
+ (struct CGPoint { double x0; double x1; })removeButtonPositionForEffect:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 atPosterFrameRelativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 viewCorrectionTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
+ (void)setInsertionPointIndex:(unsigned long long)a0;
+ (BOOL)shouldAutoEditTextForEffect:(id)a0;
+ (BOOL)shouldDisableTextOutlineWhileEditingTextForEffectID:(id)a0;
+ (BOOL)shouldRenderTextWithMotionWhileEditingTextForEffectID:(id)a0;
+ (BOOL)shouldUseFullTransformWhileEditingTextForEffectID:(id)a0;
+ (struct CGPoint { double x0; double x1; })spacingBetweenCenterPointOfEffect:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
+ (void)suspendOverlayTrackingMaintainingAppearance:(id)a0 forViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 arMetadata:(id)a3 playableInterfaceOrientation:(long long)a4;
+ (id)textForEffect:(id)a0;
+ (id)trackedNormalizedInsertionPoints;
+ (long long)trackingTypeForOverlayPointIntersectionWithFaceRect:(struct CGPoint { double x0; double x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 defaultTrackingType:(long long)a3 faceAnchor:(id)a4 transformAnimation:(id)a5 playableMediaContentMode:(int)a6 playableInterfaceOrientation:(long long)a7 playableAspectRatio:(long long)a8 playableAspectRatioPreservationMode:(long long)a9;
+ (void)updateEffectText:(id)a0 newText:(id)a1;
+ (void)updateEffectToDefaultTextIfEmpty:(id)a0;

@end
