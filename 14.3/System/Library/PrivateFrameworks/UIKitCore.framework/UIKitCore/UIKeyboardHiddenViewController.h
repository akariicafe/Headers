@class NSString, _SFPasswordViewController;
@protocol BSInvalidatable;

@interface UIKeyboardHiddenViewController : UIViewController <UIViewControllerTransitioningDelegate, UIInputViewControllerNeedSceneSize> {
    BOOL _focusWasDeferredBeforeDeactivation;
    BOOL _isFocusDeferred;
    unsigned int _deferredContextID;
    NSString *_deferredDisplayUUID;
    id<BSInvalidatable> _eventFocusDeferralToken;
    BOOL _processingSceneDidChange;
}

@property (retain, nonatomic) _SFPasswordViewController *autofillVC;
@property (nonatomic) BOOL presentedAutofill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationDidBecomeActive:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)_formSheetObeysContentContainerSize;
- (void)viewWillAppear:(BOOL)a0;
- (void)_deviceWillLock:(id)a0;
- (void)_setDeferred:(BOOL)a0 forDisplayUUID:(id)a1;
- (void)_applicationWillDeactivate:(id)a0;
- (void)passwordViewControllerDidFinish:(id)a0;
- (id)_deferredTargetForClientContext:(unsigned int)a0;
- (void)presentAutofillVCWithAnimation:(BOOL)a0;
- (void)presentSelfWithAnimation:(BOOL)a0;
- (BOOL)shouldPresentAsPopover;
- (void)_localAuthenticationUIPresented;
- (void)_localAuthenticationUIDismissed;
- (void)_willChangeToFirstResponder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)presentViewController:(BOOL)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (BOOL)_canShowWhileLocked;
- (void)_sceneDidChange;

@end
