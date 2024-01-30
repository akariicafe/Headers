@interface ICQRemoteExtensionHost : NSObject <iCloudQuotaUI.HostXPCProtocol> {
    void /* unknown type, empty encoding */ presentedVC;
    void /* unknown type, empty encoding */ flowCompletion;
}

- (id)init;
- (void).cxx_destruct;
- (void)dismissViewControllerWithError:(id)a0;
- (void)presentRemoteViewControllerWithContext:(id)a0 presentingViewController:(id)a1 completion:(id /* block */)a2;

@end
