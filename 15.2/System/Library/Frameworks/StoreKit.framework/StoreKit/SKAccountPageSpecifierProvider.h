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

- (id)initWithAccountManager:(id)a0;
- (id)_appleAccount;
- (id)_storeAccount;
- (BOOL)_isSingleIdentity;
- (void)_accountPageSpecifierWasTapped:(id)a0;
- (void).cxx_destruct;

@end
