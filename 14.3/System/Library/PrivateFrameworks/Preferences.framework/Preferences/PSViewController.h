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

- (void)willResignActive;
- (void)setSpecifier:(id)a0;
- (void)handleURL:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)didLock;
- (id)readPreferenceValue:(id)a0;
- (id)init;
- (BOOL)canBeShownFromSuspendedState;
- (void)showController:(id)a0;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)pushController:(id)a0 animate:(BOOL)a1;
- (void)pushController:(id)a0;
- (id)specifier;
- (void).cxx_destruct;
- (void)popupViewWillDisappear;
- (void)formSheetViewWillDisappear;
- (void)didWake;
- (void)popupViewDidDisappear;
- (void)formSheetViewDidDisappear;
- (void)setParentController:(id)a0;
- (long long)navigationItemLargeTitleDisplayMode;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)didUnlock;
- (void)willBecomeActive;
- (id)rootController;
- (void)willUnlock;
- (id)parentController;
- (void)suspend;
- (void)setRootController:(id)a0;

@end
