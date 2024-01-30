@class UINavigationController, NSString, NSMapTable, PXAssistantStepContext;
@protocol PXAssistantContext, PXAssistantControllerDelegate;

@interface PXAssistantController : UIViewController <PXChangeObserver, PXAssistantViewControllerDelegate, UIAdaptivePresentationControllerDelegate> {
    UINavigationController *_navigationController;
    NSMapTable *_viewControllerToStepContext;
    PXAssistantStepContext *_stepContext;
    BOOL _useTransparentBarAppearance;
}

@property (readonly, nonatomic) id<PXAssistantContext> context;
@property (weak, nonatomic) id<PXAssistantControllerDelegate> delegate;
@property (nonatomic) BOOL completed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithContext:(id)a0;
- (id)init;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)_cancelBarButtonItemAction:(id)a0;
- (void)assistantViewController:(id)a0 presentAlertWithConfiguration:(id)a1 animated:(BOOL)a2;
- (void)cancelAssistantWithDestruction:(BOOL)a0;
- (void)_cancelBarButtonItemDestructiveAction:(id)a0;
- (void)_completeAssistantWithError:(id)a0;
- (void)_completeBarButtonItemAction:(id)a0;
- (void)_confirmCancellationOfAssistantWithDestruction;
- (id)_nextViewControllerFromViewController:(id)a0;
- (void)_presentInitialViewControllers;
- (void)_setStepContext:(id)a0;
- (void)_setUseTransparentBarAppearance:(BOOL)a0;
- (void)_stepForwardBarButtonItemAction:(id)a0;
- (void)_stepForwardInAssistantAnimated:(BOOL)a0 currentViewController:(id)a1;
- (void)_updateBarAppearance;
- (void)_updateNextStepContext:(id)a0;
- (void)_updateViewController:(id)a0 forChangesWithDescriptor:(unsigned long long)a1;
- (void)assistantForAssistantViewController:(id)a0 failedWithError:(id)a1;
- (void)assistantViewController:(id)a0 dismissViewControllerAnimated:(BOOL)a1;
- (void)assistantViewController:(id)a0 presentViewController:(id)a1 animated:(BOOL)a2;
- (void)assistantViewController:(id)a0 pushViewController:(id)a1 animated:(BOOL)a2;
- (void)cancelAssistantForAssistantViewController:(id)a0;
- (void)completeAssistantForAssistantViewController:(id)a0;
- (void)completeAssistantWithError:(id)a0;
- (id)initialStepContexts;
- (id)nextStepContextForStepContextIdentifier:(id)a0;
- (BOOL)shouldConfirmCancellationOfAssistantForStepContextWithIdentifier:(id)a0;
- (void)stepContextWithIdentifier:(id)a0 confirmCancellationWithAlertProperties:(id /* block */)a1;
- (void)stepForwardInAssistantForAssistantViewController:(id)a0;
- (void)stepForwardInAssistantForAssistantViewControllerAsCurrentViewController:(id)a0;

@end
