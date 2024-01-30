@class PSRootController, NSString, PSSpecifier, UIViewController;
@protocol PSController;

@interface PUStorageManagementBaseController : UIViewController <PSController> {
    PSSpecifier *_specifier;
    id _preferenceValue;
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleURL:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)willResignActive;
- (void)didLock;
- (BOOL)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)viewDidLoad;
- (id)rootController;
- (id)specifier;
- (void)didWake;
- (void)setSpecifier:(id)a0;
- (void)willBecomeActive;
- (void)didUnlock;
- (void)setParentController:(id)a0;
- (void)setRootController:(id)a0;
- (void).cxx_destruct;
- (void)willUnlock;
- (void)suspend;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)parentController;
- (void)showController:(id)a0;
- (void)showController:(id)a0 animate:(BOOL)a1;

@end
