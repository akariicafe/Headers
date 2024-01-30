@class MFAccountValidator, NSMutableDictionary, AAAutoAccountVerifier, ACAccountStore, ACAccount, NSMutableArray;

@interface AAUICloudSyncServicesController : NSObject {
    ACAccountStore *_accountStore;
    ACAccount *_account;
    NSMutableDictionary *_queuedDataclassActions;
    NSMutableArray *_dataclassesRequiringMergeDecision;
    NSMutableDictionary *_queuedDataclassStates;
    BOOL _didUserConsentToMerge;
    BOOL _isVerifyingExistingEmailAccount;
    MFAccountValidator *_validator;
    AAAutoAccountVerifier *_verifier;
    id /* block */ _handler;
}

+ (id)_domainFromAddress:(id)a0;
+ (id)_usernameFromAddress:(id)a0;

- (id)_account;
- (id)init;
- (void).cxx_destruct;
- (void)accountValidator:(id)a0 finishedValidationOfAccount:(id)a1 usedSSL:(BOOL)a2;
- (void)_addMailAccount:(id)a0;
- (void)_presentMergeConfirmationForDataclasses:(id)a0 account:(id)a1;
- (void)_validateMailAccount:(id)a0;
- (void)completeEnablingCloudServicesWithCompletion:(id /* block */)a0;
- (void)setBackupEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)setCloudServicesEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)setDeviceLocatorEnabled:(BOOL)a0;
- (void)verifyAccountWithAppleID:(id)a0 completion:(id /* block */)a1;

@end
