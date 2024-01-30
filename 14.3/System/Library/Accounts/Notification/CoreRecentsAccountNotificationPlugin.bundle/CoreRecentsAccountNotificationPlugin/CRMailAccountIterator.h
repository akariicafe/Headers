@class ACAccountStore;

@interface CRMailAccountIterator : NSObject {
    ACAccountStore *_accountStore;
}

+ (id)receivedEmailAddressesFromAccount:(id)a0;

- (id)initWithAccountStore:(id)a0;
- (id)init;
- (id)mailAccounts;
- (id)emailAddressesForAccount:(id)a0;
- (void)enumerateEmailAddresses:(id /* block */)a0;

@end
