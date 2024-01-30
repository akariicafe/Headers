@interface PKIssuerProvisioningExtensionAuthorizationRemoteViewController : _UIRemoteViewController <PKIssuerProvisioningExtensionAuthorizationRemoteViewController> {
    id /* block */ _completionHandler;
    long long _result;
    BOOL _finished;
}

+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;

- (void).cxx_destruct;
- (void)dealloc;
- (void)pkui_setCompletionHandler:(id /* block */)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)serviceViewControllerDidCompleteWithResult:(long long)a0;
- (void)pkui_finish;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_isPresentationContextByDefault;

@end
