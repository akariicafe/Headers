@class NSString, FBSDisplayIdentity, RBSAssertion;

@interface _UIRootWindow : UIWindow {
    FBSDisplayIdentity *_currentDisplayIdentity;
    double _scale;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _visibilityLock;
    BOOL _visibilityLock_enabled;
    NSString *_visibilityLock_environment;
    NSString *_visibilityLock_identifier;
    BOOL _visibilityLock_updateEnqueued;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _visibilityProcessingLock;
    NSString *_visibilityProcessingLock_identifier;
    RBSAssertion *_visibilityProcessingLock_assertion;
}

@property (nonatomic, getter=_additionalRootLayerAffineTransform, setter=_setAdditionalRootLayerAffineTransform:) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } additionalRootLayerAffineTransform;
@property (readonly, copy, nonatomic) NSString *visibilityEnvironment;

+ (BOOL)_needsPassthroughInteraction;

- (BOOL)_isWindowServerHostingManaged;
- (void)_configureContextOptions:(id)a0;
- (id)_layerForCoordinateSpaceConversion;
- (BOOL)_wantsSceneAssociation;
- (BOOL)_extendsScreenSceneLifetime;
- (void)_visibilityLock_enqueueUpdateIfNecessary_body;
- (id)_context;
- (id)initWithDisplay:(id)a0;
- (void)_updateVisibility;
- (void)setHidden:(BOOL)a0;
- (void)_visibilityLock_enqueueUpdateIfNecessary;
- (void)dealloc;
- (void)_didMoveFromScene:(id)a0 toScene:(id)a1;
- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;
- (struct { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; })_bindingDescription;
- (void)_configureRootLayer:(id)a0 sceneTransformLayer:(id)a1 transformLayer:(id)a2;
- (void)_didMoveFromScreen:(id)a0 toScreen:(id)a1;
- (void)_noteScreenDidChangeMode:(id)a0;
- (void)_prepareHierarchyForWindowHostingSceneRemoval;
- (BOOL)_touchesInsideShouldHideCalloutBar;
- (BOOL)_transformLayerIncludesScreenRotation;
- (id)_visibilityLock_environment;
- (void)setVisibilityIdentifier:(id)a0;

@end
