@class _MSRemoteViewController, NSString, MSServiceAccount, _UIRemoteViewController, NSExtension;

@interface MSSetupViewController : UIViewController <MSViewServiceHostProtocol, _UIRemoteViewControllerContaining> {
    _MSRemoteViewController *_childViewController;
    NSExtension *_extension;
    id _extensionRequest;
}

@property (readonly, copy, nonatomic) MSServiceAccount *serviceAccount;
@property (readonly, nonatomic) unsigned long long testFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

- (void).cxx_destruct;
- (void)dealloc;
- (void)requestDismiss;
- (void)_setChildViewController:(id)a0;
- (id)initWithServiceAccount:(id)a0 testFlags:(unsigned long long)a1;
- (id)initWithServiceAccount:(id)a0;
- (id)createExtension;
- (id)createExtensionItemWithServiceAccount:(id)a0;
- (void)extensionHandleConnection:(id)a0 viewController:(id)a1 error:(id)a2;

@end
