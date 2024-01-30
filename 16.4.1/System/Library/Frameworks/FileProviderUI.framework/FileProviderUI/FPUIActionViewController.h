@class _UIResilientRemoteViewContainerViewController, NSString, NSArray, NSURL, NSError;
@protocol FPUIActionViewControllerDelegate, FPUIActionExtensionViewControllerProtocol;

@interface FPUIActionViewController : UIViewController <FPUIActionRemoteViewControllerDelegate, FPUIActionRemoteContextDelegate, FPUIActionControllerProtocol> {
    id<FPUIActionExtensionViewControllerProtocol> _extensionViewController;
    _UIResilientRemoteViewContainerViewController *_placeholderVC;
}

@property (readonly, nonatomic) unsigned long long browserUserInterfaceStyle;
@property (retain, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (retain, nonatomic) NSString *actionTitle;
@property (retain, nonatomic) NSURL *authenticationURL;
@property (copy, nonatomic) NSURL *serverConnectionURL;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (nonatomic) BOOL displayInline;
@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) id<FPUIActionViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ didLoadRemoteViewControllerCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionControllerForActionIdentifier:(id)a0 actionTitle:(id)a1 items:(id)a2 providerIdentifier:(id)a3 domainIdentifier:(id)a4;
+ (id)actionControllerForAuthenticationUsingURL:(id)a0 providerIdentifier:(id)a1;
+ (id)actionControllerForConnectingToServerURL:(id)a0 actionTitle:(id)a1 providerIdentifier:(id)a2;
+ (id)actionControllerForError:(id)a0 extensionIdentifier:(id)a1 providerDomainIdentifier:(id)a2;
+ (id)actionControllerForError:(id)a0 providerIdentifier:(id)a1;
+ (id)actionControllerForInlineError:(id)a0 providerIdentifier:(id)a1;
+ (id)actionControllerForInlineError:(id)a0 providerIdentifier:(id)a1 providerDomainIdentifier:(id)a2;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_dismissViewController;
- (void)effectiveAppearanceDidChange:(id)a0;
- (void)embedViewController:(id)a0;
- (void)_delegateError:(id)a0;
- (void)_delegateDidFinishWithUserInfo:(id)a0 error:(id)a1;
- (id)_getExtensionWithError:(id *)a0;
- (void)remoteActionContext:(id)a0 didEncounterError:(id)a1 completionHandler:(id /* block */)a2;
- (void)remoteActionContextDidFinishAction:(id)a0 userInfo:(id)a1 error:(id)a2;
- (void)remoteActionControllerDidFinishAction:(id)a0 error:(id)a1;

@end
