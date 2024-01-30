@class SBTraitsPipelineManager, NSString, UIKBArbiterClientFocusContext, SBKeyboardHomeAffordanceAssertion, SBSingleSceneController, SBSingleSceneWindow, FBScene;
@protocol SBScenePresenting;

@interface SBInputUISceneController : SBSystemUISceneController <_UIKeyboardArbiterSceneDelegate> {
    SBSingleSceneController *_sceneController;
    FBScene *_inputUIScene;
    FBScene *_targetScene;
    UIKBArbiterClientFocusContext *_focusContext;
    SBTraitsPipelineManager *_currentTraitsPipelineManager;
    SBKeyboardHomeAffordanceAssertion *_homeAffordanceAssertion;
    id<SBScenePresenting> _currentPresenter;
    unsigned long long _focusChangeCounter;
    BOOL _isKeyboardShowing;
}

@property (readonly, nonatomic, getter=isVisibleForSpringBoard) BOOL visibleForSpringBoard;
@property (readonly, nonatomic) SBSingleSceneWindow *hostingWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_setupInfo;
+ (BOOL)_shouldControlInputUIScene;

- (void)_keyboardWillShow:(id)a0;
- (void)windowSceneDidDisconnect:(id)a0;
- (void)windowSceneDidConnect:(id)a0;
- (void)dealloc;
- (void)_keyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (id)_traitsPipelineManagerForScene:(id)a0;
- (void)_acquireHomeAffordanceAssertionIfAppropriate;
- (void)_createInputUIScene;
- (void)_evaluateAvailablePresenters:(id)a0 forSceneControllers:(id)a1;
- (void)_relinquishHomeAffordanceAssertionIfNeeded;
- (id)_targetSceneForKeyboardFocusedSceneIdentity:(id)a0;
- (void)focusContextDidChange:(id)a0;
- (id)initWithSceneWorkspaceIdentifier:(id)a0 clientProcessIdentity:(id)a1 sceneVendingPolicy:(long long)a2 traitsRole:(id)a3 jobLabel:(id)a4 level:(double)a5;

@end
