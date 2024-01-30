@interface PVMotionEffectTransformComponent : PVMotionEffectComponent <PVEffectTransformable> {
    unsigned int _top3DGroupID;
    int _top3DGroupIDStatus;
    unsigned int _cameraID;
    int _cameraIDStatus;
}

- (void)setTransform:(id)a0;
- (BOOL)addCameraToDocumentOnce_NoLock:(const void *)a0;
- (id)cameraTransform;
- (id)additionalTopLevelScaleInDictionary:(id)a0 orInDefaultDictionary:(id)a1;
- (id)applyAdditionalTopLevelScale:(struct CGPoint { double x0; double x1; })a0 aroundPoint:(struct CGPoint { double x0; double x1; })a1 toTransform:(id)a2;
- (void)applyTransforms_NoLock:(id)a0 defaultProperties:(id)a1 componentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 documentInfo:(const void *)a3;
- (BOOL)bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forcePosterFrame:(BOOL)a2 includeDropShadow:(BOOL)a3 includeMasks:(BOOL)a4;
- (id)cameraProjection;
- (struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })cornersAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 includeDropShadow:(BOOL)a2 scale:(struct CGPoint { double x0; double x1; })a3 viewSize:(struct CGSize { double x0; double x1; })a4 viewOrigin:(int)a5;
- (void)disableCameraOverride;
- (BOOL)disableCameraOverride_NoLock:(const void *)a0;
- (void)enableCameraOverride:(id)a0 projection:(id)a1;
- (BOOL)enableCameraOverride_NoLock:(const void *)a0 transform:(id)a1 projection:(id)a2;
- (BOOL)encloseTopGroupIn3DGroupOnce_NoLock:(const void *)a0;
- (id)initWithMotionEffect:(id)a0;
- (BOOL)isCameraOverrideEnabled;
- (BOOL)isForceRenderAtPosterFrameEnabledInDictionary:(id)a0 orInDefaultDictionary:(id)a1;
- (void)motionEffect:(id)a0 didBecomeReady:(const void *)a1 properties:(id)a2;
- (BOOL)motionEffect:(id)a0 propertiesDisableCache:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 forcePosterFrame:(BOOL)a3;
- (BOOL)motionEffect:(id)a0 shouldInvalidateCachedRenderForProperty:(id)a1 oldValue:(id)a2 newValue:(id)a3;
- (void)motionEffect:(id)a0 willRender:(const void *)a1 properties:(id)a2 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)motionEffectDidUnload:(id)a0;
- (id)motionEffectPropertyKeysThatInvalidateCachedRender:(id)a0;
- (int)objectBounds_NoLock:(void *)a0 objectID:(unsigned int)a1 timelineTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 includeDropShadow:(BOOL)a3 includeMasks:(BOOL)a4 documentInfo:(const void *)a5;
- (struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })objectCorners_NoLock:(unsigned int)a0 timelineTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 componentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 includeDropShadow:(BOOL)a3 includeMasks:(BOOL)a4 documentInfo:(const void *)a5;
- (id)objectToImageTransform_NoLock:(unsigned int)a0 timelineTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 componentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flatten:(BOOL)a3 includeTransformAnimation:(BOOL)a4 documentInfo:(const void *)a5;
- (BOOL)setCameraProjection_NoLock:(id)a0 documentInfo:(const void *)a1;
- (BOOL)setCameraTransform_NoLock:(id)a0 documentInfo:(const void *)a1;
- (void)setTopLevelGroupTransform:(id)a0;
- (void)setTopLevelGroupTransform_NoLock:(id)a0 documentInfo:(const void *)a1;
- (BOOL)setTransform_NoLock:(id)a0 documentInfo:(const void *)a1;
- (id)transformAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 includeTransformAnimation:(BOOL)a2 viewSize:(struct CGSize { double x0; double x1; })a3 viewOrigin:(int)a4;
- (id)transformAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 viewSize:(struct CGSize { double x0; double x1; })a2 viewOrigin:(int)a3;
- (struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })transformObjectCornersToImage_NoLock:(struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })a0 objectID:(unsigned int)a1 timelineTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 componentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 flatten:(BOOL)a4 documentInfo:(const void *)a5;
- (id)transformObjectPointsToImage_NoLock:(id)a0 objectID:(unsigned int)a1 timelineTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 componentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 flatten:(BOOL)a4 documentInfo:(const void *)a5;

@end
