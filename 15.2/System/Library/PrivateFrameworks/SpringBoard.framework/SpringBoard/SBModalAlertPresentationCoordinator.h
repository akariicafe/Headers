@class NSString, UIApplicationSceneDeactivationManager, NSMutableSet, SBModalAlertPresenter, UIApplicationSceneDeactivationAssertion;
@protocol SBModalAlertPresentationCoordinatorDelegate, BSInvalidatable;

@interface SBModalAlertPresentationCoordinator : NSObject <BSDescriptionProviding> {
    UIApplicationSceneDeactivationManager *_sceneDeactivationManager;
    NSMutableSet *_activeModalAlertPresenters;
    UIApplicationSceneDeactivationAssertion *_systemModalAlertsActiveSceneDeactivationAssertion;
    NSMutableSet *_hideApplicationModalAlertAssertions;
    id<BSInvalidatable> _hideApplicationModalAlertsAssertionWhileSBModalAlertsActive;
    id<BSInvalidatable> _sysdiagnoseStateHandler;
}

@property (retain, nonatomic, getter=_getSpringBoardPresenter, setter=_setSpringBoardPresenter:) SBModalAlertPresenter *springBoardPresenter;
@property (weak, nonatomic) id<SBModalAlertPresentationCoordinatorDelegate> delegate;
@property (readonly, nonatomic, getter=isShowingModalAlert) BOOL showingModalAlert;
@property (readonly, nonatomic, getter=isShowingSystemModalAlert) BOOL showingSystemModalAlert;
@property (readonly, nonatomic, getter=canShowApplicationModalAlerts) BOOL canShowApplicationModalAlerts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addModalAlertPresenterIfNecessary:(id)a0;
- (void)_noteSpringBoardModalAlertStateChanged:(BOOL)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_adjustApplicationSceneSettingsForModalAlertsAndFence:(BOOL)a0;
- (id)initWithSceneDeactivationManager:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (void)_removeModalAlertPresenter:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)hideApplicationModalAlertsForReason:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)_fencingTransitionContext:(BOOL)a0;

@end
