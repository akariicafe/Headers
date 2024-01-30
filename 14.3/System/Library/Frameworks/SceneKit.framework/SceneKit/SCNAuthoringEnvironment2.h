@class SCNNode, UIColor, SCNManipulator, NSMutableSet, SCNRenderer, SCNGeometry;

@interface SCNAuthoringEnvironment2 : NSObject {
    NSMutableSet *_selection;
    struct __C3DScene { } *_scene;
    SCNNode *_layerRoot;
    SCNNode *_overlayLayerRoot;
    SCNNode *_lightRoot;
    SCNNode *_cameraRoot;
    SCNNode *_particlesRoot;
    SCNNode *_physicsFieldsRoot;
    SCNNode *_cameraTarget;
    SCNNode *_pointsOfViewRoot;
    struct __CFDictionary { } *_lightsDictionary;
    struct __CFDictionary { } *_camerasDictionary;
    struct __CFDictionary { } *_particlesDictionary;
    struct __CFDictionary { } *_physicsFieldsDictionary;
    SCNRenderer *_renderer;
    SCNGeometry *_lightGeometry;
    SCNGeometry *_cameraFrustumGeometry;
    SCNGeometry *_cameraOrthographicFrustumGeometry;
    SCNGeometry *_cameraGeometry;
    SCNGeometry *_cameraNearPlaneGeometry;
    SCNGeometry *_particlesGeometry;
    SCNGeometry *_fieldGeometry;
    long long _displayMask;
    UIColor *_paleGreen;
    UIColor *_paleBlue;
    UIColor *_red;
    UIColor *_green;
    UIColor *_blue;
    UIColor *_cyan;
    UIColor *_yellow;
    UIColor *_orange;
    UIColor *_pink;
    UIColor *_grayLight;
    UIColor *_grayMedium;
    UIColor *_grayDark;
    UIColor *_white;
    SCNManipulator *_manipulator;
}

@property (readonly, nonatomic) SCNNode *authoringLayer;
@property (readonly, nonatomic) SCNNode *authoringOverlayLayer;
@property (readonly, nonatomic) SCNManipulator *manipulator;
@property long long displayMask;

+ (id)authoringEnvironmentForScene:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)authoringEnvironmentForScene:(id)a0;

- (id)initWithScene:(id)a0;
- (void)dealloc;
- (void)selectNode:(id)a0;
- (void)prepareScene:(id)a0;
- (void)addedNode:(id)a0;
- (id)geometryForLightType:(id)a0;
- (id)particlesGeometry;
- (id)cameraGeometry;
- (id)cameraOrthographicFrustumGeometry;
- (id)cameraFrustumGeometry;
- (id)cameraNearPlaneGeometry;
- (id)fieldGeometry;
- (void)addLightNode:(id)a0;
- (void)addParticlesNode:(id)a0;
- (void)addCameraNode:(id)a0;
- (void)addPhysicsFieldNode:(id)a0;
- (void)removeLightNode:(id)a0;
- (void)removeParticlesNode:(id)a0;
- (void)removeCameraNode:(id)a0;
- (void)removePhysicsFieldNode:(id)a0;
- (void)_resetLightAuthoringWithContainerNode:(id)a0 source:(id)a1 light:(id)a2;
- (void)updateLightTypeForNode:(id)a0 source:(id)a1 light:(id)a2 screenspaceScalingFactor:(float)a3;
- (void)setupParticleMeshEmitter:(id)a0 authoringNode:(id)a1;
- (void)_updateRootsVisibility;
- (id)authoringCameraNodes;
- (void)removedNode:(id)a0;
- (void)addNodeToSelection:(id)a0;
- (void)selectNodes:(id)a0;
- (void)cancelSelection;
- (void)updateLightNode:(id)a0 withSourceNode:(id)a1;
- (void)updateParticlesNode:(id)a0 withSourceNode:(id)a1;
- (void)updateCameraNode:(id)a0 withSourceNode:(id)a1;
- (void)updateFieldNode:(id)a0 withSourceNode:(id)a1;
- (void)updateWithRenderer:(id)a0;
- (BOOL)didTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setAuthoringCamera:(long long)a0 forView:(id)a1;
- (id)authoringCamera:(long long)a0;

@end
