@class NSString, AVWeakReference, NSData, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVContentKeyReportGroup : NSObject {
    AVWeakReference *_contentKeySessionWeakReference;
    struct OpaqueFigContentKeySession { } *_figContentKeySession;
    NSData *_protectorSessionIdentifier;
    NSMutableArray *_cryptorsList;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_keySystem;
    BOOL _isExpired;
}

@property (readonly) NSData *contentProtectionSessionIdentifier;

- (const struct OpaqueFigCPECryptor { } *)createCryptorIfNecessaryForIdentifier:(id)a0 initializationData:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 hlsMethod:(id)a3 error:(id *)a4;
- (id)_processContentKeyRequestWithIdentifier:(id)a0 initializationData:(id)a1 options:(id)a2;
- (id)initWithKeySystem:(id)a0 keySession:(id)a1 storageDirectoryAtURL:(id)a2;
- (void)dealloc;
- (void)failProcessingContentKeyRequestWithIdentifier:(id)a0 initializationData:(id)a1 error:(id)a2;
- (void)processContentKeyRequestWithIdentifier:(id)a0 initializationData:(id)a1 options:(id)a2;
- (BOOL)willOutputBeObscuredDueToInsufficientExternalProtectionForDisplays:(id)a0 forCryptor:(struct OpaqueFigCPECryptor { } *)a1;
- (BOOL)associateContentKeyRequest:(id)a0;
- (id)cryptorOptionsForIdentifier:(id)a0 initializationData:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 hlsMethod:(id)a3;
- (int)configureAppIdentifier:(id)a0;
- (BOOL)hasProtector;
- (const struct OpaqueFigContentKeySession { } *)_figContentKeySession;
- (void)createProtectorSessionIdentifierIfNecessary;
- (id)_contentKeySession;
- (struct OpaqueFigCPECryptor { } *)copyCryptorForCryptKeyAttributes:(id)a0;
- (id)_extractCryptKeyIdentifiersFromInitializationData:(id)a0;
- (const struct OpaqueFigCPECryptor { } *)copyCryptorForIdentifier:(id)a0 initializationData:(id)a1;
- (void)expire;
- (BOOL)_setAuthorizationToken:(id)a0 forIdentifier:(id)a1 error:(id *)a2;

@end
