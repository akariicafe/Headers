@class NSString, AVWeakReference, NSData, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVContentKeyReportGroup : NSObject {
    AVWeakReference *_contentKeySessionWeakReference;
    struct OpaqueFigContentKeySession { } *_figContentKeySession;
    NSData *_protectorSessionIdentifier;
    NSMutableArray *_cryptorsList;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_keySystem;
    long long _groupID;
    BOOL _isExpired;
    struct OpaqueFigCFWeakReferenceHolder { } *_weakContentKeyBoss;
    BOOL _useContentKeyBoss;
}

@property (readonly) NSData *contentProtectionSessionIdentifier;

- (void)expire;
- (void)dealloc;
- (struct CMBaseObject { } *)_contentKeyBoss;
- (BOOL)_associateRequestWithGroupWithRequestID:(long long)a0 error:(id *)a1;
- (id)_contentKeySession;
- (BOOL)_destroyContentKeyGroupWithError:(id *)a0;
- (const struct OpaqueFigContentKeySession { } *)_figContentKeySession;
- (id)_processContentKeyRequestWithIdentifier:(id)a0 contentIdentifier:(id)a1 keyIDFromInitializationData:(id)a2 initializationData:(id)a3 options:(id)a4;
- (id)_processContentKeyRequestWithKeyRequestFromPSSH:(id)a0 decryptFormatType:(id)a1 initializationData:(id)a2 options:(id)a3;
- (BOOL)_setAuthorizationToken:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (BOOL)associateContentKeyRequest:(id)a0;
- (int)configureAppIdentifier:(id)a0;
- (struct OpaqueFigCPECryptor { } *)copyCryptorForCryptKeyAttributes:(id)a0;
- (const struct OpaqueFigCPECryptor { } *)copyCryptorForIdentifier:(id)a0 initializationData:(id)a1;
- (const struct OpaqueFigCPECryptor { } *)createCryptorIfNecessaryForIdentifier:(id)a0 initializationData:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 hlsMethod:(id)a3 error:(id *)a4;
- (void)createProtectorSessionIdentifierIfNecessary;
- (id)cryptorOptionsForIdentifier:(id)a0 initializationData:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 hlsMethod:(id)a3;
- (int)externalProtectionStatusForCryptor:(struct OpaqueFigCPECryptor { } *)a0 withDisplays:(id)a1;
- (void)failProcessingContentKeyRequestWithIdentifier:(id)a0 initializationData:(id)a1 error:(id)a2;
- (BOOL)hasProtector;
- (id)initWithKeySystem:(id)a0 keySession:(id)a1 contentKeyBoss:(struct CMBaseObject { } *)a2 useContentKeyBoss:(BOOL)a3 groupID:(long long)a4 storageDirectoryAtURL:(id)a5;
- (void)processContentKeyRequestWithIdentifier:(id)a0 initializationData:(id)a1 options:(id)a2;

@end
