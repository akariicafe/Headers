@interface _HPSUIBetaEnrollmentViewController : HomePlatformSettingsUI.BaseExtensionViewController <HomePlatformSettingsUI.BetaEnrollmentClientInterface, HomePlatformSettingsUI.BetaEnrollmentXPCClientInterface> {
    void /* unknown type, empty encoding */ homeID;
}

+ (void)shouldShowBetaEnrollmentButtonForHomeID:(id)a0 withCompletion:(id /* block */)a1;

- (void)willMoveToParentViewController:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithHomeID:(id)a0;

@end
