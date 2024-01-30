@class NSData, NSString;

@interface ICCloudSyncingObjectCryptoStrategyV1 : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (readonly) NSData *fileURLEncryptionCryptoTag;
@property (readonly) NSData *fileURLEncryptionCryptoInitialzationVector;
@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly) BOOL canAuthenticate;
@property (readonly) BOOL isAuthenticated;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fromObject:(id)a0;

- (id)decryptData:(id)a0;
- (void)initializeCryptoPropertiesFromObject:(id)a0;
- (BOOL)isPassphraseCorrect:(id)a0;
- (BOOL)canKeyDecrypt:(id)a0;
- (void)decryptAndMergeEncryptedJSON:(id)a0;
- (id)decryptSidecarData:(id)a0;
- (id)decryptedDataFromFileURL:(id)a0;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1 setTagAndIVHandler:(id /* block */)a2;
- (id)encryptSidecarData:(id)a0;
- (BOOL)encryptSidecarFileFromURL:(id)a0 toURL:(id)a1;
- (BOOL)generateWrappedKey;
- (BOOL)isPassphraseCorrect:(id)a0 usingKeysFromObject:(id)a1;
- (void)loadDecryptedValuesIfNecessary;
- (void)mergeEncryptedDataFromRecord:(id)a0;
- (void)rewrapAndDivergeKeyUsingPassphrase:(id)a0;
- (void)rewrapKeyWithNewMainKey:(id)a0 salt:(id)a1 iterationCount:(unsigned long long)a2 hint:(id)a3;
- (void)saveEncryptedJSON;
- (id)unwrappedKey;

@end
