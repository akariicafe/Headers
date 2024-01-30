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

- (void)willResignActive;
- (void)setSpecifier:(id)a0;
- (void)handleURL:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)didLock;
- (id)readPreferenceValue:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)showController:(id)a0;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (id)specifier;
- (void).cxx_destruct;
- (void)didWake;
- (void)setParentController:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)didReceiveMemoryWarning;
- (void)didUnlock;
- (void)willBecomeActive;
- (id)rootController;
- (void)willUnlock;
- (id)parentController;
- (void)suspend;
- (void)setRootController:(id)a0;
- (void)viewDidLoad;

@end
