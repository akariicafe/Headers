@class NSString, NSDictionary, ACAccountStore, ACAccount;
@protocol AAUISignOutControllerDelegate;

@interface AAUISignOutController : UINavigationController <AAUIDataclassPickerViewControllerDelegate> {
    long long _currentStyle;
}

@property (retain, nonatomic, setter=_setAccountStore:) ACAccountStore *_accountStore;
@property (copy, nonatomic, setter=_setDataclassOptions:) NSDictionary *_dataclassOptions;
@property (nonatomic) BOOL hasiCloudPhotosData;
@property (nonatomic) BOOL hasiCloudDriveData;
@property (weak, nonatomic) id<AAUISignOutControllerDelegate> delegate;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)prepareInViewController:(id)a0 completion:(id /* block */)a1;
- (id)_actionableDataclassOptions;
- (id)_appendToSignoutMessage:(id)a0 appendedString:(id)a1;
- (id)_dataclassViewController;
- (void)_delegate_signOutControllerDidCancel;
- (void)_delegate_signOutControllerDidCompleteWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)_hasPaymentPasses;
- (BOOL)_hasiCloudDriveData;
- (BOOL)_hasiCloudPhotosData;
- (void)_mainQueue_continueSignOutWithDataclassActions:(id)a0;
- (void)_mainQueue_presentSpinnerPageWithDataclassActions:(id)a0 completion:(id /* block */)a1;
- (void)_mainQueue_promptForConfirmationInViewController:(id)a0 simplified:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)_signOutMessageSimplified:(BOOL)a0 withConfirmation:(BOOL)a1;
- (id)_spinnerViewControllerForActions:(id)a0;
- (void)dataclassPickerViewController:(id)a0 didCompleteWithDataclassActions:(id)a1;
- (void)dataclassPickerViewControllerDidCancel:(id)a0;
- (id)footerTextForDataclassPickerViewController:(id)a0;
- (id)messageTextForDataclassPickerViewController:(id)a0;
- (id)titleTextForDataclassPickerViewController:(id)a0;

@end
