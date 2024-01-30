@class NSDictionary, UIViewController, PSRootController;
@protocol PSController;

@interface PSSetupController : PSRootController {
    NSDictionary *_rootInfo;
    UIViewController<PSController> *_parentController;
    PSRootController *_parentRootController;
}

- (id)controller;
- (void)handleURL:(id)a0;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)init;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)usePopupStyle;
- (void)setupController;
- (BOOL)popupStyleIsModal;
- (void)viewWillDisappear:(BOOL)a0;
- (void)statusBarWillChangeHeight:(id)a0;
- (void)popControllerOnParent;
- (void)pushControllerOnParentWithSpecifier:(id)a0;
- (void)setParentController:(id)a0;
- (void)dismissAnimated:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)parentController;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)dismiss;

@end
