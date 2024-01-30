@class PSSpecifier, NSArray, NSString, AIDAAccountManager;
@protocol AAUISpecifierProviderDelegate;

@interface SKAccountPageSpecifierProvider : NSObject <AAUISpecifierProvider>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) PSSpecifier *activelyLoadingSpecifier;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isSingleIdentity;
- (void)_accountPageSpecifierWasTapped:(id)a0;
- (id)_storeAccount;
- (id)initWithAccountManager:(id)a0;
- (BOOL)handleURL:(id)a0;
- (id)_appleAccount;
- (void).cxx_destruct;
- (void)_viewAccountPageSpecifierWasTapped:(id)a0;

@end
