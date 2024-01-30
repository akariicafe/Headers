@class SFQueueingServiceViewControllerProxy, SFPasswordRemoteViewController;
@protocol SFPasswordPickerServiceViewControllerProtocol;

@interface _SFAppAutoFillPasswordViewController : _SFPasswordViewController {
    SFPasswordRemoteViewController *_remoteViewController;
    SFQueueingServiceViewControllerProxy<SFPasswordPickerServiceViewControllerProtocol> *_serviceProxy;
}

- (void)viewDidLoad;
- (void)_sceneDidEnterBackground:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)setWebViewURL:(id)a0;
- (void)setRemoteAppID:(id)a0;
- (void)setRemoteLocalizedAppName:(id)a0;
- (void)setRemoteUnlocalizedAppName:(id)a0;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)a0;
- (void)authenticateToPresentInPopover:(BOOL)a0 completion:(id /* block */)a1;
- (id)_remoteViewController;
- (void)setAuthenticationGracePeriod:(double)a0;
- (void)remoteViewController:(id)a0 selectedCredential:(id)a1;
- (void)_setUpServiceProxyIfNeeded;
- (id)_connectToServiceWithCompletion:(id /* block */)a0;

@end
