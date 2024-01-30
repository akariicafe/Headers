@class CDPAccount, ACAccountStore, CDPDAccount;
@protocol CDPWalrusSecurityProxy, CDPProtectedCloudStorageProxy;

@interface CDPInternalWalrusStateController : NSObject {
    id<CDPWalrusSecurityProxy> _securityProxy;
    id<CDPProtectedCloudStorageProxy> _pcsProxy;
    CDPAccount *_cdpAccount;
    CDPDAccount *_cdpDaemonAccount;
    ACAccountStore *_accountStore;
}

- (id)_fetchiCDPAccountInfoDictionaryWithContext:(id)a0 error:(id *)a1;
- (void)webAccessStatusWithCompletion:(id /* block */)a0;
- (id)initWithAccount:(id)a0 cdpdAccount:(id)a1 securityProxy:(id)a2 pcsProxy:(id)a3 accountStore:(id)a4;
- (id)_eligibleAccountWithContext:(id)a0 checkWithServer:(BOOL)a1 requireCKAccount:(BOOL)a2 error:(id *)a3;
- (id)initWithAccount:(id)a0 cdpdAccount:(id)a1 securityProxy:(id)a2 pcsProxy:(id)a3;
- (id)_eligiblePrimaryAccountForFlow:(unsigned long long)a0 error:(id *)a1;
- (void)repairWalrusStatusWithCompletion:(id /* block */)a0;
- (unsigned long long)_walrusStatusForPrimaryAccountWithError:(id *)a0;
- (unsigned long long)_escrowedKeysStatusUsingICDP:(id)a0;
- (unsigned long long)walrusStatusWithContext:(id)a0 error:(id *)a1;
- (void)setWalrusStatusEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (unsigned long long)_statusForError:(id)a0;
- (void)_updateWalrusState:(BOOL)a0 context:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)_pcsAccountInfoStatusUsingICDP:(id)a0;
- (id)_optionsWithContext:(id)a0;
- (void)setWebAccessStatusEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (unsigned long long)_walrusStatusWithOptions:(id)a0 withError:(id *)a1;
- (void).cxx_destruct;

@end
