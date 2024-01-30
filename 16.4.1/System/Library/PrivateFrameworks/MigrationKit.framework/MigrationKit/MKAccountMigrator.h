@class NSString, NSMutableDictionary, ACAccountStore, MFAccountValidator;

@interface MKAccountMigrator : MKMigrator <MFAccountValidatorDelegate> {
    BOOL _isImporting;
    unsigned long long _totalOperationCount;
    unsigned long long _completedOperationCount;
    ACAccountStore *_accountStore;
    MFAccountValidator *_accountValidator;
    NSMutableDictionary *_startDatesByAccountName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)accountValidator:(id)a0 finishedValidationOfAccount:(id)a1 usedSSL:(BOOL)a2;
- (void)import;
- (void)import:(id)a0;
- (void)accountStoreDidImportAccount:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)importDataEncodedInJSON:(id)a0;

@end
