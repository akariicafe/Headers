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

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)_init;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)_commonInitializationWithAccount:(id)a0 accountStore:(id)a1 username:(id)a2 accountDescription:(id)a3 youTube:(BOOL)a4 presentationBlock:(id /* block */)a5;
- (void)_didInstantiateRemoteViewController;
- (void)_dismissAndCompleteWithIdentity:(id)a0 error:(id)a1 extensionCompletion:(id /* block */)a2;
- (id)_extensionItemForAccount:(id)a0 accountDescription:(id)a1 username:(id)a2 youTube:(BOOL)a3;
- (void)_extensionRequestDidCancelWithError:(id)a0;
- (void)_extensionRequestDidCompleteWithTokens:(id)a0 extensionCompletion:(id /* block */)a1;
- (void)_presentInternetOfflineError;
- (void)_presentUsernameMismatchAlert;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 presentationBlock:(id /* block */)a2;
- (id)initWithAccountDescription:(id)a0 presentationBlock:(id /* block */)a1;

@end
