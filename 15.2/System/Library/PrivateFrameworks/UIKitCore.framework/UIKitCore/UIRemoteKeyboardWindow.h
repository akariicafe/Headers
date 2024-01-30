@class UIScreen, NSString, NSDictionary, _UIContextBinder, CAContext, FBSSceneLayer, FBSScene;

@interface UIRemoteKeyboardWindow : UITextEffectsWindow <_UIContextCustomBinding, _UIScreenBasedObject> {
    NSDictionary *_perScreenOptions;
    UIScreen *_intendedScreen;
    BOOL _arePlaceholdersInitialised;
    FBSSceneLayer *_keyboardSceneLayer;
    FBSScene *_activeScene;
    BOOL _resetRequired;
}

@property (weak, nonatomic, setter=_setBoundContext:) CAContext *_boundContext;
@property (weak, nonatomic, setter=_setContextBinder:) _UIContextBinder *_contextBinder;
@property (readonly, nonatomic) struct { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; } _bindingDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;

+ (id)remoteKeyboardWindowForScreen:(id)a0 create:(BOOL)a1;
+ (BOOL)_isHostedInAnotherProcess;

- (BOOL)_alwaysGetsContexts;
- (BOOL)_canIgnoreInteractionEvents;
- (void)endDisablingInterfaceAutorotation;
- (void)setWindowLevel:(double)a0;
- (void)_resetScene;
- (BOOL)shouldAttachBindable;
- (BOOL)_isFullscreen;
- (long long)_orientationForClassicPresentation;
- (id)_initBasicWithScreen:(id)a0 options:(id)a1;
- (long long)_orientationInSceneSpace;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (void)attachBindable;
- (BOOL)_isWindowServerHostingManaged;
- (id)_initWithScreen:(id)a0 options:(id)a1;
- (id)_layerForCoordinateSpaceConversion;
- (BOOL)_isRemoteKeyboardWindow;
- (BOOL)_matchingOptions:(id)a0;
- (void)invalidate;
- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)_isHostedInAnotherProcess;
- (void)dealloc;
- (void)_setRotatableClient:(id)a0 toOrientation:(long long)a1 updateStatusBar:(BOOL)a2 duration:(double)a3 force:(BOOL)a4 isRotating:(BOOL)a5;
- (BOOL)_usesWindowServerHitTesting;
- (void)resetScene;
- (BOOL)_isAlwaysKeyboardWindow;
- (BOOL)shouldDetachBindable;
- (BOOL)_wantsSceneAssociation;
- (void)detachBindable;

@end
