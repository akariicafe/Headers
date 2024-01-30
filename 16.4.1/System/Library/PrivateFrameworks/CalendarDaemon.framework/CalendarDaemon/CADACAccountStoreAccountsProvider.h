@class ACAccountStore;

@interface CADACAccountStoreAccountsProvider : NSObject <CADACAccountsProvider>

@property (readonly, nonatomic) ACAccountStore *accountStore;

- (id)accounts;
- (id)accountWithIdentifier:(id)a0;
- (id)initWithAccountStore:(id)a0;
- (void).cxx_destruct;

@end
