@class BiometricKitIdentity, NSString, UIBarButtonItem, BiometricKitUIEnrollViewController;

@interface BFFFinishSetupTouchIDViewController : UIViewController <BiometricKitUIEnrollResultDelegate> {
    BiometricKitUIEnrollViewController *_enrollController;
    BiometricKitIdentity *_identity;
    UIBarButtonItem *_cancelLeftNavigationItem;
    BOOL _enrollComplete;
}

@property (copy, nonatomic) NSString *passcode;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)didResignActive:(id)a0;
- (void)didBecomeActive:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)enrollResult:(int)a0 identity:(id)a1;
- (void)_userDidTapCancelButton:(id)a0;
- (void)beginEnrollment;
- (void)deleteIdentity;
- (void)endEnrollment;
- (void)resetLeftNavigationItem;
- (void)_didCompleteMesaControllerWithResult:(unsigned long long)a0;
- (id)_cancelLeftNavigationItem;
- (void)restartEnrollment;

@end
