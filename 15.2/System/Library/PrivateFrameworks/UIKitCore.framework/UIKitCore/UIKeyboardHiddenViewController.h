@class NSString, _SFPasswordViewController;

@interface UIKeyboardHiddenViewController : UIViewController <UIViewControllerTransitioningDelegate, UIInputViewControllerNeedSceneSize> {
    BOOL _processingSceneDidChange;
}

@property (retain, nonatomic) _SFPasswordViewController *autofillVC;
@property (nonatomic) BOOL presentedAutofill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)presentViewController:(BOOL)a0;
- (void)_sceneDidChange;
- (void)_deviceWillLock:(id)a0;
- (void)passwordViewControllerDidFinish:(id)a0;
- (void)presentAutofillVCWithAnimation:(BOOL)a0;
- (void)presentSelfWithAnimation:(BOOL)a0;
- (BOOL)shouldPresentAsPopover;
- (void)_localAuthenticationUIPresented;
- (void)_localAuthenticationUIDismissed;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_formSheetObeysContentContainerSize;

@end
