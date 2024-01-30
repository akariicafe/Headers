@class NSString;

@interface ICMediaCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICMediaCryptoStrategy>

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly) BOOL canAuthenticate;
@property (readonly) BOOL isAuthenticated;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)decryptedData;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (id)fileURLEncryptionCryptoInitialzationVector;
- (id)fileURLEncryptionCryptoTag;

@end
