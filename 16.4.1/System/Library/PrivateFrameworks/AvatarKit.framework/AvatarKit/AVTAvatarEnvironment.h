@class SCNNode, NSString, SCNMaterial, SCNScene, AVTAvatar;
@protocol SCNSceneRenderer;

@interface AVTAvatarEnvironment : NSObject {
    SCNScene *_scene;
    id<SCNSceneRenderer> _renderer;
    AVTAvatar *_avatar;
    SCNNode *_trackingLostIndicator;
    BOOL _trackingLostIndicatorVisible;
    SCNMaterial *_shadowPlaneMaterial;
    SCNNode *_whitePlane;
    SCNNode *_environmentNode;
    SCNNode *_defaultPointOfView;
    NSString *_framingMode;
    SCNNode *_animojiCamera;
    SCNNode *_memojiCameraGroup;
    SCNNode *_customCamera;
    SCNNode *_arModeCamera;
    SCNNode *_specializedLightingNode;
    SCNNode *_defaultLightingNode;
}

@property (retain, nonatomic) NSString *framingMode;
@property (readonly, nonatomic) SCNNode *environmentNode;
@property (readonly, nonatomic) SCNNode *currentPointOfView;
@property (readonly, nonatomic) SCNNode *defaultPointOfView;
@property (nonatomic) BOOL showReticle;
@property (nonatomic) float fadeFactor;
@property (readonly, nonatomic) BOOL faceIsFullyVisible;

- (void)didSnapshot;
- (void)willSnapshot;
- (void).cxx_destruct;
- (id)initAndInstallInScene:(id)a0 renderer:(id)a1;
- (void)avatarDidChange:(id)a0 presentationConfiguration:(id)a1;
- (void)configureARCameraForFaceTracking;
- (void)configureARCameraForReticle;
- (id)defaultEnvironmentNode;
- (void)hideTrackingLossIndicator;
- (id)pointOfViewForFramingMode:(id)a0;
- (void)setFramingModeForcingPointOfViewUpdate:(id)a0;
- (void)showTrackingLossIndicator;
- (void)updateCustomCameras;
- (void)updatePointOfViewFromFramingMode;
- (void)updateSpecializedLighting;
- (void)updateWithPresentationConfiguration:(id)a0;

@end
