@class PSRootController, NSString, PSSpecifier, UIViewController;
@protocol PSController;

@interface PSViewController : UIViewController <PSController> {
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
    PSSpecifier *_specifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleURL:(id)a0;
- (void)willResignActive;
- (void)didLock;
- (BOOL)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)pushController:(id)a0;
- (void)pushController:(id)a0 animate:(BOOL)a1;
- (void)viewDidLoad;
- (id)rootController;
- (id)specifier;
- (void)didWake;
- (void)setSpecifier:(id)a0;
- (void)popupViewDidDisappear;
- (void)formSheetViewDidDisappear;
- (void)willBecomeActive;
- (void)didUnlock;
- (void)setParentController:(id)a0;
- (void)setRootController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)willUnlock;
- (void)suspend;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)parentController;
- (long long)navigationItemLargeTitleDisplayMode;
- (void)formSheetViewWillDisappear;
- (void)popupViewWillDisappear;
- (void)showController:(id)a0;
- (void)showController:(id)a0 animate:(BOOL)a1;

@end
