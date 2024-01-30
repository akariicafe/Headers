@class UIImage, NSString, PKPaymentProvisioningController, PKPaymentSetupProduct, NSArray, PKPaymentSetupFlowController, PKPaymentWebService;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupDevicePickerViewController : PKDynamicCollectionViewController <PKViewControllerPreflightable, PKPaymentSetupDevicePickerListSectionControllerDelegate> {
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentProvisioningController *_bridgeProvisioningController;
    long long _setupContext;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentSetupFlowController *_flowController;
    PKPaymentSetupProduct *_product;
    PKPaymentSetupProduct *_nanoProduct;
    NSArray *_webServices;
    PKPaymentWebService *_webService;
    PKPaymentWebService *_nanoWebService;
    UIImage *_cardImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)didSelectWebService:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 flowController:(id)a3 product:(id)a4 webService:(id)a5 nanoWebService:(id)a6;

@end
