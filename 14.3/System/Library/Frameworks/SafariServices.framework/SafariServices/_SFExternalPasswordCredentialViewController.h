@class NSString, SFQueueingServiceViewControllerProxy, SFExternalPasswordCredentialRemoteViewController;
@protocol _SFExternalPasswordCredentialViewControllerDelegate, SFExternalPasswordCredentialServiceViewControllerProtocol;

@interface _SFExternalPasswordCredentialViewController : _SFPasswordViewController <SFExternalPasswordCredentialRemoteViewControllerDelegate> {
    SFExternalPasswordCredentialRemoteViewController *_remoteViewController;
    SFQueueingServiceViewControllerProxy<SFExternalPasswordCredentialServiceViewControllerProtocol> *_serviceProxy;
}

@property (weak, nonatomic) id<_SFExternalPasswordCredentialViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_sceneDidEnterBackground:(id)a0;
- (void).cxx_destruct;
- (void)getCredentialForExternalCredential:(id)a0 completion:(id /* block */)a1;
- (id)_connectToServiceWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_setUpServiceProxyIfNeeded;
- (void)presentExternalPasswordCredentialRemoteViewController:(id)a0;
- (void)autoFillWithExternalCredential:(id)a0;
- (id)_remoteViewController;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
