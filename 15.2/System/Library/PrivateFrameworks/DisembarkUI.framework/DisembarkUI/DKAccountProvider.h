@class NSString;

@interface DKAccountProvider : NSObject <DKAccountProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchAccounts:(id /* block */)a0;
- (void)_addAccountDataForAccounts:(id)a0 toAccountsData:(id)a1 completion:(id /* block */)a2;
- (void)_fetchAccountDataForAccount:(id)a0 completion:(id /* block */)a1;

@end
