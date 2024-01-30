@class NSURL, NSArray, NSString;

@interface AssetViewer.EntityController : NSObject <ASVGestureDataSource, ASVWorldGestureRecognizerDelegate, ASVTurntableGestureRecognizerDelegate, ASVUnifiedGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ entity;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ animationManager;
    void /* unknown type, empty encoding */ animationID;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ entityWorldPosistionRefreshGuard;
    void /* unknown type, empty encoding */ lastARFrameTimestampForMovement;
    void /* unknown type, empty encoding */ lastScreenPointForMovement;
    void /* unknown type, empty encoding */ lastBoundingBox;
    void /* unknown type, empty encoding */ debugVisualizationEntity;
    void /* unknown type, empty encoding */ debugBoundingBoxEntities;
    void /* unknown type, empty encoding */ currentTurntableYaw;
    void /* unknown type, empty encoding */ currentTurntablePitch;
    void /* unknown type, empty encoding */ savedLevitationHeight;
    void /* unknown type, empty encoding */ transformToCameraInObjectMode;
    void /* unknown type, empty encoding */ transformToWorldInARMode;
    void /* unknown type, empty encoding */ initialAABB;
    void /* unknown type, empty encoding */ _assetNaturalSize;
    void /* unknown type, empty encoding */ _assetScaleToFitUnitBox;
    void /* unknown type, empty encoding */ projectPointHandler;
    void /* unknown type, empty encoding */ shouldDisableGesturesHandler;
    void /* unknown type, empty encoding */ shouldUseTightBoundsSPI;
    void /* unknown type, empty encoding */ planeType;
    void /* unknown type, empty encoding */ planeAnimator;
    void /* unknown type, empty encoding */ trackedRaycast;
    void /* unknown type, empty encoding */ verticalPlacementMarker;
    void /* unknown type, empty encoding */ groundPlaneEntity;
    void /* unknown type, empty encoding */ sceneUnderstandingState;
    void /* unknown type, empty encoding */ shadowPlaneEntity;
    void /* unknown type, empty encoding */ physicsStateManager;
    void /* unknown type, empty encoding */ accessibilityAssetURL;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ worldGestureRecognizer;
@property (nonatomic) void /* unknown type, empty encoding */ levitationHeight;
@property (nonatomic, copy) NSURL *accessibilityAssetURL;
@property (nonatomic, readonly) NSArray *entityAccessibilityWrappers;
@property (nonatomic, readonly) NSString *description;

- (void /* unknown type, empty encoding */)assetWorldPosition;
- (BOOL)screenPointIsOnAsset:(SEL)a0;
- (float)assetScale;
- (void /* unknown type, empty encoding */)assetScreenPosition;
- (float)assetPitch;
- (struct { void /* unknown type, empty encoding */ x0[4]; })assetTransform;
- (void /* unknown type, empty encoding */)assetHeadScreenPositionForScale:(float)a0;
- (float)assetYaw;
- (void /* unknown type, empty encoding */)assetNaturalSize;
- (float)assetScaleToFitUnitBox;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)worldGestureRecognizerBeganTranslation:(id)a0;
- (void)worldGestureRecognizer:(SEL)a0 translatedAssetToScreenPoint:(id)a1;
- (void)worldGestureRecognizerEndedTranslation:(id)a0;
- (void)worldGestureRecognizerBeganLevitation:(id)a0;
- (void)worldGestureRecognizer:(SEL)a0 levitatedAssetToScreenPoint:(id)a1;
- (void)worldGestureRecognizerEndedLevitation:(id)a0;
- (void)worldGestureRecognizerBeganTranslationDeceleration:(id)a0;
- (void)worldGestureRecognizer:(SEL)a0 decelerationTranslationDelta:(id)a1;
- (void)worldGestureRecognizerEndedTranslationDeceleration:(id)a0;
- (void)unifiedGestureRecognizer:(SEL)a0 singleTappedAtScreenPoint:(id)a1 onAsset:(BOOL)a2;
- (void)unifiedGestureRecognizer:(SEL)a0 doubleTappedAtScreenPoint:(id)a1 onAsset:(BOOL)a2;
- (void)unifiedGestureRecognizerBeganRotation:(id)a0;
- (void)unifiedGestureRecognizer:(id)a0 rotatedAssetByDeltaYaw:(float)a1;
- (void)unifiedGestureRecognizerEndedRotation:(id)a0;
- (void)unifiedGestureRecognizerBeganScaling:(id)a0;
- (void)unifiedGestureRecognizer:(id)a0 scaledAssetToScale:(float)a1;
- (void)unifiedGestureRecognizerEndedScaling:(id)a0;
- (void)turntableGestureRecognizer:(id)a0 rotatedAssetByDeltaYaw:(float)a1 deltaPitch:(float)a2;
- (void)rotateByDeltaYaw:(float)a0 deltaPitch:(float)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateAssetScreenBoundingRectIn:(id)a0;
- (void)scaleTo:(float)a0 updateARScale:(BOOL)a1;

@end
