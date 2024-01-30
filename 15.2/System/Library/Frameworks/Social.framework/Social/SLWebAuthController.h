@class NSExtension, NSString, NSError, ACAccount, ACAccountStore, UIViewController;
@protocol SLWebClient;

@interface SLWebAuthController : UIViewController {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    id /* block */ _presentationBlock;
    UIViewController *_serviceViewController;
    NSExtension *_extension;
    NSError *_extensionCancellationError;
    BOOL _extensionRequestDidComplete;
}

@property (readonly) id<SLWebClient> _webClient;
@property (readonly) NSString *_extentionIdentifier;
@property (copy, nonatomic) id /* block */ completion;

- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithAccountDescription:(id)a0 presentationBlock:(id /* block */)a1;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 presentationBlock:(id /* block */)a2;
- (void)_commonInitializationWithAccount:(id)a0 accountStore:(id)a1 username:(id)a2 accountDescription:(id)a3 youTube:(BOOL)a4 presentationBlock:(id /* block */)a5;
- (void)_extensionRequestDidCancelWithError:(id)a0;
- (void)_extensionRequestDidCompleteWithTokens:(id)a0 extensionCompletion:(id /* block */)a1;
- (id)_extensionItemForAccount:(id)a0 accountDescription:(id)a1 username:(id)a2 youTube:(BOOL)a3;
- (void)_didInstantiateRemoteViewController;
- (void)_presentInternetOfflineError;
- (void)_dismissAndCompleteWithIdentity:(id)a0 error:(id)a1 extensionCompletion:(id /* block */)a2;
- (void)_presentUsernameMismatchAlert;

@end
