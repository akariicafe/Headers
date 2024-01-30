@class FBSScene, NSString, _UIScenePresenter, UIWindow, NSSet, FBScene, FBSSceneIdentityToken;

@interface _UISceneKeyboardProxyLayerForwardingStateMachine : NSObject <_UIScenePresentationViewObserver, _UIWindowLevelObserver> {
    FBScene *_scene;
    FBSSceneIdentityToken *_identityToken;
    unsigned long long _state;
    id _windowDidMoveToSceneNotificationToken;
    _UIScenePresenter *_prioritizedPresenter;
    FBSScene *_hostingScene;
    UIWindow *_hostingWindow;
    NSSet *_keyboardLayersTracked;
    NSSet *_keyboardLayersAddedToHostingScene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setState:(unsigned long long)a0;
- (id)initWithScene:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)window:(id)a0 changedFromLevel:(double)a1 toLevel:(double)a2;
- (unsigned long long)_state;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)noteKeyboardLayersBeingTracked:(id)a0;
- (id)_newProxyLayers;
- (void)_addLayers:(id)a0 toScene:(id)a1;
- (void)_noteHostedInWindow:(id)a0;
- (void)_removeLayers:(id)a0 fromScene:(id)a1;
- (void)notePriorizedPresenter:(id)a0;
- (void)presentationView:(id)a0 didMoveToWindow:(id)a1;

@end
