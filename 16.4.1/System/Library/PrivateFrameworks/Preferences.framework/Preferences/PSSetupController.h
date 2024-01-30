@class NSDictionary, UIViewController, PSRootController;
@protocol PSController;

@interface PSSetupController : PSRootController {
    NSDictionary *_rootInfo;
    UIViewController<PSController> *_parentController;
    PSRootController *_parentRootController;
}

- (void)dismiss;
- (void)dismissAnimated:(BOOL)a0;
- (id)parentController;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)controller;
- (void)setParentController:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)handleURL:(id)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)setupController;
- (void)popControllerOnParent;
- (BOOL)popupStyleIsModal;
- (void)pushControllerOnParentWithSpecifier:(id)a0;
- (void)statusBarWillChangeHeight:(id)a0;
- (BOOL)usePopupStyle;

@end
