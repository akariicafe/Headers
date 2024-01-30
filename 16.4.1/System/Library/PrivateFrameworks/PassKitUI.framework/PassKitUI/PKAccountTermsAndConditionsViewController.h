@class NSString, PKAccount, PKPaymentWebService;

@interface PKAccountTermsAndConditionsViewController : PKFeatureTermsAndConditionsViewController {
    PKAccount *_account;
    PKPaymentWebService *_webService;
    NSString *_termsIdentifier;
}

- (id)displayTitle;
- (void).cxx_destruct;
- (void)_termsDataForIdentifier:(id)a0 format:(id)a1 completion:(id /* block */)a2;
- (void)htmlTermsDataWithCompletion:(id /* block */)a0;
- (id)initWithAccount:(id)a0 webService:(id)a1 context:(long long)a2 termsIdentifier:(id)a3;
- (void)initalTermsDataWithCompletion:(id /* block */)a0;
- (void)pdfTermsDataWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)presentErrorAlert;
- (void)termsAccepted:(BOOL)a0 completion:(id /* block */)a1;
- (void)termsShown;

@end
