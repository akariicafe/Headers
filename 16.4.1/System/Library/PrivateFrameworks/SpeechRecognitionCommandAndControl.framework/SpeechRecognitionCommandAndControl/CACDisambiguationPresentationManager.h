@interface CACDisambiguationPresentationManager : CACSimpleContentViewManager <CACContactDisambiguationPresentationViewControllerDelegate>

- (BOOL)isOverlay;
- (void)dialDiambiguationPresentationViewController:(id)a0 hideWithCompletion:(id /* block */)a1;
- (void)showWithDisambiguationItems:(id)a0;
- (void)showWithDisambiguationItems:(id)a0 alertTitle:(id)a1;
- (void)showWithDisambiguationItems:(id)a0 alertTitle:(id)a1 alertMessage:(id)a2;

@end
