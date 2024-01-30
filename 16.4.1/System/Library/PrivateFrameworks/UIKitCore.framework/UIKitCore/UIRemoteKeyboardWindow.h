@class NSString, FBSSceneLayer, CAContext, FBSSceneIdentityToken, NSDictionary, UIScreen, _UIContextBinder, FBSScene;

@interface UIRemoteKeyboardWindow : UITextEffectsWindow <_UIContextCustomBinding, _UIScreenBasedObject> {
    NSDictionary *_perScreenOptions;
    UIScreen *_intendedScreen;
    BOOL _arePlaceholdersInitialised;
    FBSSceneLayer *_keyboardSceneLayer;
    FBSScene *_activeScene;
    BOOL _resetRequired;
}

@property (readonly, nonatomic) FBSSceneIdentityToken *activeSceneIdentity;
@property (weak, nonatomic, setter=_setBoundContext:) CAContext *_boundContext;
@property (weak, nonatomic, setter=_setContextBinder:) _UIContextBinder *_contextBinder;
@property (readonly, nonatomic) struct { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } _bindingDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;

+ (BOOL)_isHostedInAnotherProcess;
+ (id)remoteKeyboardWindowForScreen:(id)a0 create:(BOOL)a1;

- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (BOOL)isTransparentFocusItem;
- (BOOL)shouldAttachBindable;
- (BOOL)shouldDetachBindable;
- (BOOL)_matchingOptions:(id)a0;
- (BOOL)_isRemoteKeyboardWindow;
- (long long)_orientationInSceneSpace;
- (BOOL)_isFullscreen;
- (BOOL)isInternalWindow;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (BOOL)_alwaysGetsContexts;
- (BOOL)_isAlwaysKeyboardWindow;
- (void)endDisablingInterfaceAutorotation;
- (BOOL)_isEligibleForFocusOcclusion;
- (BOOL)_isWindowServerHostingManaged;
- (void)_resetScene;
- (void)detachBindable;
- (void)resetScene;
- (void)_configureAlphaIfNecessary;
- (BOOL)_canIgnoreInteractionEvents;
- (id)_initWithScreen:(id)a0 options:(id)a1;
- (BOOL)_isHostedInAnotherProcess;
- (BOOL)_usesWindowServerHitTesting;
- (long long)_orientationForClassicPresentation;
- (id)_layerForCoordinateSpaceConversion;
- (void)_setRotatableClient:(id)a0 toOrientation:(long long)a1 updateStatusBar:(BOOL)a2 duration:(double)a3 force:(BOOL)a4 isRotating:(BOOL)a5;
- (id)_initBasicWithScreen:(id)a0 options:(id)a1;
- (BOOL)_wantsSceneAssociation;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)setWindowLevel:(double)a0;
- (void)attachBindable;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
