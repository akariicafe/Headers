@class NSString;

@interface ICAttachmentCryptoStrategyV2 : ICCloudSyncingObjectCryptoStrategyV2 <ICAttachmentCryptoStrategy>

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly) BOOL canAuthenticate;
@property (readonly) BOOL isAuthenticated;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)decryptedFallbackAssetDataForFallbackAssetType:(long long)a0;
- (id)decryptedFallbackImageData;
- (id)decryptedFallbackPDFData;
- (void)writeEncryptedFallbackAssetData:(id)a0 fallbackAssetType:(long long)a1;
- (void)writeEncryptedFallbackImageData:(id)a0;
- (void)writeEncryptedFallbackPDFData:(id)a0;

@end
