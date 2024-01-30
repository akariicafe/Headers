@class SCNNode, SCNMaterial, SCNScene, AVTAvatar;

@interface AVTAvatarEnvironment : NSObject {
    SCNScene *_scene;
    AVTAvatar *_avatar;
    SCNNode *_trackingLostIndicator;
    BOOL _trackingLostIndicatorVisible;
    SCNMaterial *_shadowPlaneMaterial;
    SCNNode *_whitePlane;
    SCNNode *_environmentNode;
    SCNNode *_defaultPointOfView;
    SCNNode *_animojiCamera;
    SCNNode *_memojiCameraGroup;
    SCNNode *_customCamera;
    SCNNode *_specializedLightingNode;
    SCNNode *_defaultLightingNode;
}

@property (readonly, nonatomic) SCNNode *environmentNode;
@property (readonly, nonatomic) SCNNode *defaultPointOfView;
@property (nonatomic) BOOL showReticle;
@property (nonatomic) float fadeFactor;
@property (readonly, nonatomic) BOOL faceIsFullyVisible;

- (void)didSnapshot;
- (void).cxx_destruct;
- (void)willSnapshot;
- (id)initAndInstallInScene:(id)a0;
- (void)avatarDidChange:(id)a0 arMode:(BOOL)a1;
- (id)defaultEnvironmentNode;
- (void)updateCustomCameras;
- (void)updateSpecializedLighting;
- (void)updateARMode:(BOOL)a0;
- (void)showTrackingLossIndicator;
- (void)hideTrackingLossIndicator;
- (void)hideReticle;

@end
