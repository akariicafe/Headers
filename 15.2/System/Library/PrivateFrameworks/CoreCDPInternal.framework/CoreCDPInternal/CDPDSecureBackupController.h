@class NSDictionary, CDPDSecureBackupConfiguration, CDPContext;
@protocol CDPDSecureBackupProxy, CDPDOctagonTrustProxy, CDPStateUIProviderInternal, CDPDSecureBackupDelegate;

@interface CDPDSecureBackupController : NSObject

@property (retain, nonatomic) NSDictionary *cachedAccountInfo;
@property (nonatomic) BOOL fakeNearlyDepletedRecords;
@property (retain, nonatomic) id<CDPDSecureBackupProxy> secureBackupProxy;
@property (retain, nonatomic) id<CDPDOctagonTrustProxy> octagonTrustProxy;
@property (weak, nonatomic) id<CDPDSecureBackupDelegate> delegate;
@property (retain, nonatomic) CDPDSecureBackupConfiguration *configuration;
@property (readonly, nonatomic) CDPContext *context;
@property (readonly, nonatomic) id<CDPStateUIProviderInternal> uiProvider;

+ (id)_dateWithSecureBackupDateString:(id)a0;
+ (id)_sanitizedInfoDictionary:(id)a0;
+ (id)_printableAccountInfo:(id)a0;

- (id)performSilentEscrowRecoveryWithCDPContext:(id)a0 error:(id *)a1;
- (id)performEscrowRecoveryWithData:(id)a0 error:(id *)a1;
- (id)_recoverBackupDictionaryWithContext:(id)a0 error:(id *)a1;
- (void)_deleteSingleICSCBackupWithCompletion:(id /* block */)a0;
- (void)recoverSecureBackupWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 secureBackupProxy:(id)a1 octagonTrustProxy:(id)a2;
- (void)upgradeICSCRecordsThenEnableSecureBackupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)deleteSingleICSCBackupWithCompletion:(id /* block */)a0;
- (void)performEscrowRecoveryWithRecoveryContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)_disableRecoveryKey:(id *)a0;
- (void)_enableSecureBackupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)checkAndRemoveExistingThenEnableSecureBackupRecordWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchEscrowRecordsWithOptionForceFetch:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)_disableThenEnableWithInfo:(id)a0 error:(id *)a1;
- (BOOL)_disableSecureBackup:(id *)a0;
- (BOOL)supportsRecoveryKey;
- (void)checkForExistingRecordMatchingPredicate:(id)a0 forceFetch:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)recordIsEmpty:(id)a0;
- (id)_currentAnisetteData;
- (void)checkForExistingRecord:(id /* block */)a0;
- (id)_clientMetadataWithSecretType:(unsigned long long)a0 length:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_deleteAllBackupRecordsWithCompletion:(id /* block */)a0;
- (void)getBackupRecordDevicesWithOptionForceFetch:(BOOL)a0 completion:(id /* block */)a1;
- (id)handleCDPDevices:(id)a0;
- (void)_authenticatedEnableSecureBackupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)isEligibleForCDPWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 uiProvider:(id)a1 delegate:(id)a2;
- (void)checkForExistingRecordWithPeerId:(id)a0 completion:(id /* block */)a1;
- (void)enableSecureBackupWithRecoveryKey:(id)a0 completion:(id /* block */)a1;
- (id)_accountInfo:(id *)a0;
- (void)backupRecordsArePresentWithCompletion:(id /* block */)a0;
- (void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(id /* block */)a0;
- (void)synchronizeKeyValueStoreWithCompletion:(id /* block */)a0;
- (void)fetchAllEscrowRecordsWithOptionForceFetch:(BOOL)a0 completion:(id /* block */)a1;
- (void)accountInfoWithCompletion:(id /* block */)a0;
- (id)performEscrowRecoveryWithRecoveryContext:(id)a0 error:(id *)a1;
- (void)disableRecoveryKeyWithCompletion:(id /* block */)a0;
- (void)_getOctagonEscrowBackupRecordDevicesWithOptionForceFetch:(BOOL)a0 completion:(id /* block */)a1;
- (id)_recoveryInfoDictionaryFromContext:(id)a0;
- (void)enableSecureBackupWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)authenticatedEnableSecureBackupWithRecoveryKey:(id)a0 error:(id *)a1;
- (void)clearAccountInfoCache;
- (void)deleteAllBackupRecordsWithCompletion:(id /* block */)a0;
- (void)disableSecureBackupWithCompletion:(id /* block */)a0;

@end
