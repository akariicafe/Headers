@class NSString, PKFamilyMember, UIBarButtonItem;
@protocol PKPeerPaymentConfirmNameViewControllerDelegate;

@interface PKPeerPaymentConfirmNameViewController : PKPaymentSetupFieldsViewController <PKPaymentSetupViewControllerDelegate> {
    PKFamilyMember *_familyMember;
    long long _context;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_spinnerButton;
    BOOL _showSpinner;
}

@property (weak, nonatomic) id<PKPeerPaymentConfirmNameViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFamilyMember:(id)a0 delegate:(id)a1 context:(long long)a2;
- (void)_cancelPressed;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)viewControllerDidCancelSetupFlow:(id)a0;
- (void)_continue;
- (void)showSpinner:(BOOL)a0;
- (void)_donePressed;
- (void)viewDidLoad;

@end
