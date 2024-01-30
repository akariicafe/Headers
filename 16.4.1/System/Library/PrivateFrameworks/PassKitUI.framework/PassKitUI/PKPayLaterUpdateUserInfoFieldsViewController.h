@class PKAccountService, NSArray, NSString, PKAccount;

@interface PKPayLaterUpdateUserInfoFieldsViewController : PKDynamicProvisioningFieldsPageViewController {
    PKAccount *_payLaterAccount;
    PKAccountService *_accountService;
    NSArray *_encryptionCertificates;
    NSString *_encryptionVerion;
}

- (void).cxx_destruct;
- (void)handleCancelTapped;
- (void)handleNextButtonTapped:(id)a0;
- (id)initWithPayLaterAccount:(id)a0 webService:(id)a1 context:(long long)a2 setupDelegate:(id)a3 encryptionCertificates:(id)a4 encryptionVerion:(id)a5 fieldsPage:(id)a6;

@end
