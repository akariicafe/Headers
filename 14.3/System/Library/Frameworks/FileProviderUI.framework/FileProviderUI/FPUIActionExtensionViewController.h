@class FPUIActionExtensionContext;

@interface FPUIActionExtensionViewController : UIViewController <FPUIActionExtensionViewControllerProtocol>

@property (readonly, nonatomic, getter=_browserUserInterfaceStyle) unsigned long long browserUserInterfaceStyle;
@property (readonly, nonatomic) FPUIActionExtensionContext *extensionContext;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)beginRequestWithExtensionContext:(id)a0;
- (void)_setBrowserUserInterfaceStyle:(unsigned long long)a0;
- (void)_configureWithDomainIdentifier:(id)a0;
- (void)_prepareAuthenticationUsingURL:(id)a0;
- (void)_prepareAuthenticationUsingServerURL:(id)a0;
- (void)_prepareForError:(id)a0;
- (void)_prepareForActionWithIdentifier:(id)a0 items:(id)a1;
- (void)_prepareForServerCreation;
- (void)_browserUserInterfaceStyleDidChange;
- (void)prepareForActionWithIdentifier:(id)a0 itemIdentifiers:(id)a1;
- (void)prepareForServerCreation;
- (void)prepareAuthenticationUsingURL:(id)a0;
- (void)prepareAuthenticationUsingServerURL:(id)a0;
- (void)prepareForError:(id)a0;
- (BOOL)_extensionImplementsSelector:(SEL)a0;
- (void)prepareForAuthentication;

@end
