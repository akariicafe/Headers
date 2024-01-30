@class NSString, PKLinkedApplication, PKPaymentSetupProduct, ASCLockupView;

@interface PKPaymentSetupGetAppViewController : PKExplanationViewController <PKLinkedApplicationObserver, ASCLockupViewDelegate> {
    PKPaymentSetupProduct *_product;
    PKLinkedApplication *_linkedApplication;
    ASCLockupView *_appStoreView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)presentingViewControllerForLockupView:(id)a0;
- (void)lockupViewDidInvalidateIntrinsicContentSize:(id)a0;
- (void)_updateAppStoreViewRequest;
- (void)linkedApplicationDidChangeState:(id)a0;
- (id)initWithPaymentProduct:(id)a0 setupContext:(long long)a1;

@end
