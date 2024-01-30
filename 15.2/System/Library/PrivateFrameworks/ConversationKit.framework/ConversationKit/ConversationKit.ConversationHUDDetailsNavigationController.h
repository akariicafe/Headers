@interface ConversationKit.ConversationHUDDetailsNavigationController : UINavigationController <FTPeoplePickerViewControllerDelegate> {
    void /* unknown type, empty encoding */ detailsDelegate;
    void /* unknown type, empty encoding */ isOnScreen;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ linkShareCoordinator;
    void /* unknown type, empty encoding */ detailsViewController;
    void /* unknown type, empty encoding */ peoplePickerViewController;
}

- (void)peoplePickerDidCancel:(id)a0;
- (void)peoplePicker:(id)a0 didAddPeople:(id)a1 shouldAddOtherInvitedToRemoteMembers:(BOOL)a2;
- (void)dismissPeoplePicker;
- (void)tapDoneButton;
- (id)initWithRootViewController:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
