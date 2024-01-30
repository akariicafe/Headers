@class ACAccountStore;

@interface ACRemoteCommandHandler : NSObject {
    ACAccountStore *_accountStore;
}

- (id)init;
- (void).cxx_destruct;
- (void)_saveAccount:(id)a0 completion:(id /* block */)a1;
- (void)_addAccount:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)_authenticateAccount:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)_deleteAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)_fetchAccountsWithCompletion:(id /* block */)a0 options:(id)a1;
- (void)_invalidateFetchedAccountsCacheWithCompletion:(id /* block */)a0;
- (void)_promptUserForAccountCredential:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)_removeAllAccountsWithCompletion:(id /* block */)a0;
- (void)_updateAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)handleCommand:(id)a0 forAccount:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
