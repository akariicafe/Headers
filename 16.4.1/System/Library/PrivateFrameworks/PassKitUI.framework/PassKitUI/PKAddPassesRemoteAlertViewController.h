@class NSString, PKServiceAddPassesViewController;

@interface PKAddPassesRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKServiceAddPassesViewControllerResultsDelegate, UIAdaptivePresentationControllerDelegate> {
    PKServiceAddPassesViewController *_controller;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSecureForRemoteViewService;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (long long)preferredStatusBarStyle;
- (void)_dismiss;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)didInvalidateForRemoteAlert;
- (void)handleButtonActions:(id)a0;
- (void)viewController:(id)a0 ingestionDidFinishWithResult:(unsigned long long)a1;

@end
