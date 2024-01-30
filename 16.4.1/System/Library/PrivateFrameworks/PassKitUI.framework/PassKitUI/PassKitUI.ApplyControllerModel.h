@interface PassKitUI.ApplyControllerModel : NSObject <PKPaymentSetupViewControllerDelegate> {
    void /* unknown type, empty encoding */ _nextView;
    void /* unknown type, empty encoding */ _accountError;
    void /* unknown type, empty encoding */ _hasFieldsSubmitted;
    void /* unknown type, empty encoding */ applicationType;
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ applyController;
}

- (id)init;
- (void).cxx_destruct;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end
