@class NSString, RBSAssertion;

@interface _UIRootWindow : UIWindow {
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

- (BOOL)_isWindowServerHostingManaged;
- (id)_context;
- (void)_configureContextOptions:(id)a0;
- (BOOL)_extendsScreenSceneLifetime;
- (void)_didMoveFromScreen:(id)a0 toScreen:(id)a1;
- (void).cxx_destruct;
- (id)initWithDisplay:(id)a0;
- (void)dealloc;
- (id)_layerForCoordinateSpaceConversion;
- (void)_configureRootLayer:(id)a0 sceneTransformLayer:(id)a1 transformLayer:(id)a2;
- (void)setHidden:(BOOL)a0;
- (BOOL)_transformLayerIncludesScreenRotation;
- (void)_visibilityLock_enqueueUpdateIfNecessary_body;
- (id)_visibilityLock_environment;
- (void)_noteScreenDidChangeMode:(id)a0;
- (void)setVisibilityIdentifier:(id)a0;
- (void)_visibilityLock_enqueueUpdateIfNecessary;
- (BOOL)_touchesInsideShouldHideCalloutBar;
- (BOOL)_wantsSceneAssociation;
- (struct { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })_bindingDescription;
- (void)_updateVisibility;
- (id)initWithScreen:(id)a0;

@end
