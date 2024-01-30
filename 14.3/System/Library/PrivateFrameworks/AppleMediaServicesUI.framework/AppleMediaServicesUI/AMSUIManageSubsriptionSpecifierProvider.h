@class PSSpecifier, NSArray, NSString, AIDAAccountManager;
@protocol AAUISpecifierProviderDelegate;

@interface AMSUIManageSubsriptionSpecifierProvider : NSObject <AAUISpecifierProvider, AMSUIWebDelegate>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) PSSpecifier *activelyLoadingSpecifier;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0;
- (id)_appleAccount;
- (void)webViewController:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (void)webViewController:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (id)_findViewController;
- (id)_storeAccount;
- (void)_subscriptionsSpecifierWasTapped:(id)a0;
- (BOOL)_isSingleIdentity;

@end
