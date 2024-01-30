@interface PKIssuerProvisioningExtensionAuthorizationRemoteViewController : _UIRemoteViewController <PKIssuerProvisioningExtensionAuthorizationRemoteViewController> {
    id /* block */ _completionHandler;
    long long _result;
    BOOL _finished;
}

+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)pkui_setCompletionHandler:(id /* block */)a0;
- (BOOL)_isPresentationContextByDefault;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)serviceViewControllerDidCompleteWithResult:(long long)a0;
- (void)pkui_finish;

@end
