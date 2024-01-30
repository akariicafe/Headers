@class NSString;

@interface ICAttachmentPreviewImageCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICAttachmentPreviewImageCryptoStrategy>

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly) BOOL canAuthenticate;
@property (readonly) BOOL isAuthenticated;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fromPreviewImage:(id)a0;

- (id)decryptedImageData;
- (id)_decryptedImageData;
- (id)decryptedMetadata;
- (BOOL)writeEncryptedImageFromData:(id)a0;
- (void)writeEncryptedMetadata:(id)a0;

@end
