@class NSString, NSMutableDictionary;

@interface ICCloudSyncingObjectCryptoStrategyV2 : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (class, readonly, nonatomic) NSMutableDictionary *accountKeyByIdentifier;

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly) BOOL canAuthenticate;
@property (readonly) BOOL isAuthenticated;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accountIdentifier;
- (id)encryptData:(id)a0;
- (id)decryptData:(id)a0;
- (void)initializeCryptoPropertiesFromObject:(id)a0;
- (BOOL)isInICloudAccount;
- (BOOL)isPassphraseCorrect:(id)a0;
- (void)serializeToEncryptedValuesJSON:(id)a0;
- (id)accountDsid;
- (id)accountKeyWithIdentifier:(id)a0 createIfNotExist:(BOOL)a1;
- (BOOL)canKeyDecrypt:(id)a0;
- (id)currentAccountKeyIdentifier;
- (void)decryptAndMergeEncryptedJSON:(id)a0;
- (id)decryptObject:(id)a0;
- (id)decryptSidecarData:(id)a0;
- (id)decryptedDataFromFileURL:(id)a0;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptSidecarData:(id)a0;
- (BOOL)encryptSidecarFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptedDataFromRecord:(id)a0;
- (BOOL)isAuthenticatedForBothObjectAndRecord:(id)a0;
- (BOOL)isRecordAuthenticated:(id)a0;
- (void)loadDecryptedValuesIfNecessary;
- (void)mergeEncryptedDataFromRecord:(id)a0;
- (void)rewrapAndDivergeKeyUsingPassphrase:(id)a0;
- (void)saveEncryptedJSON;
- (BOOL)serialize:(id)a0 toURL:(id)a1;
- (BOOL)shouldSpoofAccountKey;
- (id)unwrappedKey;

@end
