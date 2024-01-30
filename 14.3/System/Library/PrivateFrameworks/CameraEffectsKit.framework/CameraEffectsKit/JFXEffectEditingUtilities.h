@interface JFXEffectEditingUtilities : NSObject

@property (class, nonatomic, getter=isStreamingMode) BOOL streamingMode;

+ (void)addTransformToEffect:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 restrictToBounds:(BOOL)a4 orientationState:(id)a5;
+ (void)updateEffectText:(id)a0 newText:(id)a1;
+ (BOOL)shouldRenderTextWithMotionWhileEditingTextForEffectID:(id)a0;
+ (struct CGPoint { double x0; double x1; })nextNormalizedInsertionPointForOverlay:(id)a0 scaleRelativeToCenterSquare:(double)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 applyTracking:(BOOL)a3 withARMetadata:(id)a4 transformAnimation:(id)a5 interfaceOrientation:(long long)a6;
+ (void)configureOverlayForInsertion:(id)a0 atNormalizedPoint:(struct CGPoint { double x0; double x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 isPositionRelativeToCenterSquare:(BOOL)a3 isPositionRelativeToFace:(BOOL)a4 scaleRelativeToCenterSquare:(double)a5 rotationAngle:(double)a6 applyTracking:(BOOL)a7 autoDetectTrackingType:(BOOL)a8 withARMetadata:(id)a9 mediaInterfaceOrientationForDisplay:(long long)a10 previewViewCorrectionTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a11 transformAnimation:(id)a12 orientationState:(id)a13;
+ (void)configureOverlayForInsertion:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 rotationAngle:(double)a3 applyTracking:(BOOL)a4 autoDetectTrackingType:(BOOL)a5 withARMetadata:(id)a6 mediaInterfaceOrientationForDisplay:(long long)a7 previewViewCorrectionTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a8 transformAnimation:(id)a9 orientationState:(id)a10;
+ (BOOL)canEditTextForEffect:(id)a0;
+ (id)hitTestOverlaysAtPosterFrame:(id)a0 atNormalizedPoint:(struct CGPoint { double x0; double x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 adjustForMinimumSize:(BOOL)a3 normalizedMinimumSize:(struct { double x0; double x1; })a4;
+ (BOOL)isFaceTrackingDataAvailable;
+ (void)disableAnimationForEffects:(id)a0;
+ (id)textForEffect:(id)a0;
+ (id)hitTestOverlaysAtPosterFrame:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 adjustForMinimumSize:(BOOL)a4 normalizedMinimumSize:(struct { double x0; double x1; })a5;
+ (struct CGPoint { double x0; double x1; })removeButtonPositionForEffect:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 atPosterFrameRelativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 viewCorrectionTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
+ (id)newTextEditingPropertiesForEffect:(id)a0 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 withNewText:(id)a3;
+ (void)beginTextEditingForEffect:(id)a0;
+ (void)updateEffectToDefaultTextIfEmpty:(id)a0;
+ (void)endTextEditingForEffect:(id)a0;
+ (unsigned long long)maximumTextLengthForEffect:(id)a0;
+ (struct CGPoint { double x0; double x1; })spacingBetweenCenterPointOfEffect:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
+ (id)hitTestOverlays:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 adjustForMinimumSize:(BOOL)a4 normalizedMinimumSize:(struct { double x0; double x1; })a5;
+ (long long)trackingTypeForOverlayPointIntersectionWithFaceRect:(struct CGPoint { double x0; double x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 defaultTrackingType:(long long)a3 faceAnchor:(id)a4 transformAnimation:(id)a5 interfaceOrientation:(long long)a6;
+ (BOOL)makeOverlayTrackedMaintainingAppearance:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 newTrackingType:(long long)a2 arMetadata:(id)a3 mediaInterfaceOrientationForDisplay:(long long)a4 orientationState:(id)a5;
+ (BOOL)shouldUseFullTransformWhileEditingTextForEffectID:(id)a0;
+ (BOOL)shouldDisableTextOutlineWhileEditingTextForEffectID:(id)a0;
+ (id)normalizedInsertionPoints;
+ (unsigned long long)nextInsertionPointIndex;
+ (id)trackedNormalizedInsertionPoints;
+ (unsigned long long)JFX_bestTrackedInsertionPointIndexForOverlay:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 insertionPoints:(id)a2 startingIndex:(unsigned long long)a3 visibilityThreshold:(double)a4 scaleRelativeToCenterSquare:(double)a5 withARMetadata:(id)a6 transformAnimation:(id)a7 interfaceOrientation:(long long)a8;
+ (void)setInsertionPointIndex:(unsigned long long)a0;
+ (long long)JFX_adjustOrientationIfLandscapeIPadStreaming:(long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })JFX_compositionBounds;
+ (void)JFX_setImageSequencePathToDownloadedAssetsForOverlay:(id)a0;
+ (id)JFX_hitTestOverlays:(id)a0 atNormalizedPoint:(struct CGPoint { double x0; double x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 forcePosterFrame:(BOOL)a3 adjustForMinimumSize:(BOOL)a4 normalizedMinimumSize:(struct { double x0; double x1; })a5;
+ (void)applyCameraTrackingTransformToOverlay:(id)a0 withARMetadata:(id)a1 forDisplayingMediaAtInterfaceOrientation:(long long)a2;
+ (struct CGPoint { double x0; double x1; })JFX_originAfterApplyingCenteredCropOnPoint:(struct CGPoint { double x0; double x1; })a0 outerSize:(struct CGSize { double x0; double x1; })a1 innerSize:(struct CGSize { double x0; double x1; })a2;
+ (struct CGPoint { double x0; double x1; })JFX_closeButtonInsetForEffect:(id)a0 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)JFX_ApplyTextFlipIfNeeded:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 orientationState:(id)a2;
+ (void)JFX_setTextRenderingEnabledForEffect:(id)a0 value:(BOOL)a1;
+ (id)newTextEditingPropertiesForEffect:(id)a0 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 withNewText:(id)a3 moveBeforeScalingToAvoidKeyboard:(BOOL)a4;
+ (unsigned long long)insertionPointIndex;
+ (void)suspendOverlayTrackingMaintainingAppearance:(id)a0 forViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 arMetadata:(id)a3 mediaInterfaceOrientationForDisplay:(long long)a4;
+ (struct CGPoint { double x0; double x1; })JFX_convertPoint:(struct CGPoint { double x0; double x1; })a0 fromSize:(struct CGSize { double x0; double x1; })a1 toSize:(struct CGSize { double x0; double x1; })a2 invertY:(BOOL)a3;
+ (void)enableAnimationForEffects:(id)a0 animationStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentFaceRectRelativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 orientationState:(id)a2 transformAnimation:(id)a3;

@end
