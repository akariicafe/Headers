@class NSDictionary, UIViewController, PSRootController;
@protocol PSController;

@interface PSSetupController : PSRootController {
    NSDictionary *_rootInfo;
    UIViewController<PSController> *_parentController;
    PSRootController *_parentRootController;
}

- (void)dismissAnimated:(BOOL)a0;
- (void)handleURL:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dismiss;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)statusBarWillChangeHeight:(id)a0;
- (BOOL)usePopupStyle;
- (void)setupController;
- (void)pushControllerOnParentWithSpecifier:(id)a0;
- (void)popControllerOnParent;
- (BOOL)popupStyleIsModal;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setParentController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)parentController;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (id)controller;

@end
