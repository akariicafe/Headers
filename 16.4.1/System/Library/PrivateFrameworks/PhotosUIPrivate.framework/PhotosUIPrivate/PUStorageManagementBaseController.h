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

- (void)willBecomeActive;
- (void)willResignActive;
- (void)setSpecifier:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)parentController;
- (void)didReceiveMemoryWarning;
- (void)setRootController:(id)a0;
- (void)suspend;
- (id)rootController;
- (id)specifier;
- (void)viewDidLoad;
- (void)setParentController:(id)a0;
- (void)handleURL:(id)a0;
- (void).cxx_destruct;
- (void)didLock;
- (void)showController:(id)a0;
- (void)didWake;
- (BOOL)canBeShownFromSuspendedState;
- (void)didUnlock;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)willUnlock;

@end
