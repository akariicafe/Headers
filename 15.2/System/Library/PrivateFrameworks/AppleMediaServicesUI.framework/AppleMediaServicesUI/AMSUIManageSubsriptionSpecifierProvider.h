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

- (id)initWithAccountManager:(id)a0;
- (id)_appleAccount;
- (id)_storeAccount;
- (void)webViewController:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isSingleIdentity;
- (void).cxx_destruct;
- (id)_findViewController;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (void)_subscriptionsSpecifierWasTapped:(id)a0;
- (void)webViewController:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;

@end
