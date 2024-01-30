@class NSObject, NSString, PKPaymentSetupProduct;
@protocol OS_dispatch_group;

@interface PKPaymentReaderModeDetailsViewController : PKPaymentSetupProvisioningFieldsViewController {
    BOOL _termsAccepted;
    NSObject<OS_dispatch_group> *_nextScreenGroup;
    NSString *_titleText;
    NSString *_subtitleText;
}

@property (readonly, nonatomic) PKPaymentSetupProduct *product;

+ (BOOL)readerModeProvisioningIsSupported;

- (void).cxx_destruct;
- (id)footerView;
- (id)defaultHeaderViewTitle;
- (id)defaultHeaderViewSubTitle;
- (id)visibleFieldIdentifiers;
- (void)handleNextButtonTapped:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 product:(id)a3;
- (id)defaultFields;
- (void)_prepareForProvisioningViewController;
- (void)_showTerms;
- (void)_registerLocalDeviceWithCompletion:(id /* block */)a0;
- (void)_pushReaderModeProvisioningWithCompletion:(id /* block */)a0;
- (void)_downloadCardArtIfNecessary:(id /* block */)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
