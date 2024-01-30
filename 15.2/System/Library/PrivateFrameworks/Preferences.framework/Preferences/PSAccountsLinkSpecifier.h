@class PSAccountEnumerator;

@interface PSAccountsLinkSpecifier : PSSpecifier

@property (retain, nonatomic) PSAccountEnumerator *accountEnumerator;

- (void).cxx_destruct;
- (id)_accountsCount:(id)a0;
- (id)initWithDetailClass:(Class)a0;

@end
