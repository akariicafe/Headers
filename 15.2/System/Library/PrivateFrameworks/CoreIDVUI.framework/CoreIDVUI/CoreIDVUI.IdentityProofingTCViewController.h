@interface CoreIDVUI.IdentityProofingTCViewController : UIViewController <RemoteUIControllerDelegate> {
    void /* unknown type, empty encoding */ agreeButtonName;
    void /* unknown type, empty encoding */ disagreeButtonName;
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ agreeClicked;
    void /* unknown type, empty encoding */ uiConfigFactory;
    void /* unknown type, empty encoding */ config;
}

- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
