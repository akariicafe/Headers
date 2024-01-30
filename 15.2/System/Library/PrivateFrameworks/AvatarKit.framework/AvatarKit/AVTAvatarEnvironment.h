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
    SCNNode *_specializedLightingNode;
    SCNNode *_defaultLightingNode;
}

@property (retain, nonatomic) NSString *framingMode;
@property (readonly, nonatomic) SCNNode *environmentNode;
@property (readonly, nonatomic) SCNNode *defaultPointOfView;
@property (nonatomic) BOOL showReticle;
@property (nonatomic) float fadeFactor;
@property (readonly, nonatomic) BOOL faceIsFullyVisible;

- (void).cxx_destruct;
- (void)didSnapshot;
- (void)willSnapshot;
- (void)setFramingModeForcingPointOfViewUpdate:(id)a0;
- (id)initAndInstallInScene:(id)a0 renderer:(id)a1;
- (void)avatarDidChange:(id)a0 arMode:(BOOL)a1;
- (id)defaultEnvironmentNode;
- (void)updateCustomCameras;
- (void)updateSpecializedLighting;
- (void)updateARMode:(BOOL)a0;
- (void)updatePointOfViewFromFramingMode;
- (void)showTrackingLossIndicator;
- (void)hideTrackingLossIndicator;

@end
