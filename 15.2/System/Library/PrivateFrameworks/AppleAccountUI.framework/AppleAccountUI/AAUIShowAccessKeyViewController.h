@class NSString, AAUIAccountContactsSpecifierCreator, AALocalContactInfo, ACAccount, UIImage, AAUIInviteMessageFlowController;

@interface AAUIShowAccessKeyViewController : PSListController <AAUIInviteMessageFlowControllerDelegate> {
    ACAccount *_appleAccount;
    AAUIAccountContactsSpecifierCreator *_specifierCreator;
    AALocalContactInfo *_localContact;
    NSString *_accessKey;
    UIImage *_qrCodeImage;
    AAUIInviteMessageFlowController *_inviteFlowController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)viewDidLoad;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)_setupNavigationBar;
- (void).cxx_destruct;
- (id)initWithAppleAccount:(id)a0 localContactInfo:(id)a1 accessKey:(id)a2 accessKeyQRCodeImage:(id)a3;
- (void)inviteMessageFlowDidFinish:(id)a0;
- (void)inviteMessageWasSent:(id)a0 completion:(id /* block */)a1;
- (void)inviteMessageCompleteSecondaryButtonTapped:(id)a0;
- (void)_setTableSeparatorInset;
- (id)_specifiersForShowAccessKey;
- (void)_shareAccessKeyTapped:(id)a0;
- (void)_printTapped:(id)a0;

@end
