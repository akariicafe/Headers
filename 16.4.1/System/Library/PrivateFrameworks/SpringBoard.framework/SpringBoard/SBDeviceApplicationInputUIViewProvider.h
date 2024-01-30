@class NSString, UIViewController;
@protocol SBScenePresentingDelegate, BSInvalidatable;

@interface SBDeviceApplicationInputUIViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBDeviceApplicationSceneHandleObserver, SBScenePresenting> {
    BOOL _isActive;
    long long _displayMode;
    UIViewController *_inputUIViewController;
    id<BSInvalidatable> _systemUIScenePresenterAssertion;
    id<SBScenePresentingDelegate> _inputUIPresentingDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_realOverlayViewController;
- (void)_deactivateIfPossible;
- (BOOL)wantsResignActiveAssertion;
- (void)noteDisplayModeChange:(long long)a0;
- (void)_activateIfPossible;
- (void)cancel;
- (void)dealloc;
- (void)setPresentingDelegate:(id)a0;
- (BOOL)_isUnderUILock;
- (void).cxx_destruct;
- (void)_acquireInputUIPresentingAssertionIfNecessary;
- (void)_invalidateInputUIPresentingAssertion;
- (BOOL)isVisibleOnScreen;
- (id)parentSceneIdentityToken;
- (id)presentScene:(id)a0 viewControllerBuilderBlock:(id /* block */)a1;

@end
