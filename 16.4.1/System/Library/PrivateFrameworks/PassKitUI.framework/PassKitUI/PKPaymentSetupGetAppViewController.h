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
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)lockupViewDidInvalidateIntrinsicContentSize:(id)a0;
- (id)presentingViewControllerForLockupView:(id)a0;
- (void)_updateAppStoreViewRequest;
- (id)initWithPaymentProduct:(id)a0 setupContext:(long long)a1;
- (void)linkedApplicationDidChangeState:(id)a0;

@end
