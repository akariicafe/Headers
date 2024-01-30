@class SBModalAlertPresentationCoordinator, NSString, FBSceneManager, NSHashTable, FBScene;

@interface SBModalAlertPresenter : NSObject <BSDescriptionProviding, FBSceneManagerObserver> {
    BOOL _invalidated;
    BOOL _isSystemPresenter;
    NSHashTable *_visibleAlertAssertions;
}

@property (retain, nonatomic, setter=_setScene:) FBScene *scene;
@property (retain, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator;
@property (retain, nonatomic) FBSceneManager *sceneManager;
@property (readonly, nonatomic, getter=isShowingModalAlert) BOOL showingModalAlert;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic) unsigned long long visibleModalAlertCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_addOrRemoveModalAlertPresenterIfNecessary;
- (id)succinctDescription;
- (void)decrementVisibleModalAlertCount;
- (void).cxx_destruct;
- (void)_addOrRemoveModalAlertPresenterIfNecessaryWithForegroundState:(BOOL)a0 fromOrToTerminalState:(BOOL)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)acquireVisibleModalAlertAssertionWithDescription:(id)a0;
- (id)initForSystemApplication;
- (void)incrementVisibleModalAlertCount;
- (void)dealloc;
- (void)sceneManager:(id)a0 willUpdateScene:(id)a1 withSettings:(id)a2 transitionContext:(id)a3;
- (id)_initWithModalAlertPresentationCoordinator:(id)a0 sceneManager:(id)a1 scene:(id)a2;

@end
