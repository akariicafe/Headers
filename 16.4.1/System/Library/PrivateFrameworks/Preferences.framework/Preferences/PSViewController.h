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

- (void)willBecomeActive;
- (void)willResignActive;
- (void)setSpecifier:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)parentController;
- (void)setRootController:(id)a0;
- (void)suspend;
- (id)rootController;
- (id)specifier;
- (long long)navigationItemLargeTitleDisplayMode;
- (void)viewDidLoad;
- (void)setParentController:(id)a0;
- (id)init;
- (void)handleURL:(id)a0;
- (void).cxx_destruct;
- (void)didLock;
- (void)showController:(id)a0;
- (void)didWake;
- (void)pushController:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)didUnlock;
- (void)pushController:(id)a0 animate:(BOOL)a1;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)willUnlock;
- (void)formSheetViewDidDisappear;
- (void)formSheetViewWillDisappear;
- (id)installCloudSyncButton:(id)a0 delegate:(id)a1;
- (void)popupViewDidDisappear;
- (void)popupViewWillDisappear;

@end
