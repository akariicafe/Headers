@interface HomePlatformSettingsUI.RemoteViewControllerClient : NSObject <_EXHostViewControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ extensionID;
    void /* unknown type, empty encoding */ hostingPreparationClock;
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ statusInfoViewCtrl;
}

- (void)hostViewController:(id)a0 didBeginHosting:(id)a1;
- (void)hostViewController:(id)a0 didEndHosting:(id)a1 error:(id)a2;
- (void)hostViewController:(id)a0 didFailToHost:(id)a1 error:(id)a2;
- (void)hostViewController:(id)a0 didPrepareToHost:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
