@class ASCredentialProviderExtensionContext;

@interface ASCredentialProviderViewController : UIViewController

@property (readonly, nonatomic) ASCredentialProviderExtensionContext *extensionContext;

- (void)prepareCredentialListForServiceIdentifiers:(id)a0;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)a0;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)a0;

@end
