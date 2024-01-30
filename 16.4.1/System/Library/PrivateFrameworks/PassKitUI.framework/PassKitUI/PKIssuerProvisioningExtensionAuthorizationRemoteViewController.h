@interface PKIssuerProvisioningExtensionAuthorizationRemoteViewController : _UIRemoteViewController <PKIssuerProvisioningExtensionAuthorizationRemoteViewController> {
    id /* block */ _completionHandler;
    long long _result;
    BOOL _finished;
}

+ (id)exportedInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_isPresentationContextByDefault;
- (void)pkui_setCompletionHandler:(id /* block */)a0;
- (void)pkui_finish;
- (void)serviceViewControllerDidCompleteWithResult:(long long)a0;

@end
