@class AVContentKey, NSDictionary, NSData, NSError, AVContentKeySpecifier, AVContentKeyRequestInternal;

@interface AVContentKeyRequest : NSObject {
    AVContentKeyRequestInternal *_contentKeyRequest;
}

@property (readonly) long long status;
@property (readonly) NSError *error;
@property (readonly) id identifier;
@property (readonly, nonatomic) NSData *initializationData;
@property (readonly, copy) NSDictionary *options;
@property (readonly) BOOL canProvidePersistableContentKey;
@property (readonly) AVContentKeySpecifier *contentKeySpecifier;
@property (readonly) AVContentKey *contentKey;

+ (id)_createKeyRequestDictionaryForApp:(id)a0 persistentKey:(id)a1 serverChallenge:(id)a2 cryptorKeyRequestID:(unsigned long long)a3 purpose:(int)a4;
+ (id)_ensureProtocolVersionList:(id)a0;
+ (id)_mergePreloadingRequestOptions:(id)a0 withCreateKeyRequestOptions:(id)a1;
+ (BOOL)_prepareCryptor:(struct OpaqueFigCPECryptor { } *)a0 forRenewal:(BOOL)a1 andReturnKeyRequestID:(unsigned long long *)a2 isInchargeOfKeyRequest:(BOOL *)a3 error:(id *)a4;
+ (void)_validateHLSEncryptionMethod:(id)a0;
+ (void)_validateProtocolVersionList:(id)a0;
+ (void)_validateServerChallenge:(id)a0;

- (void)_clearContext;
- (id)session;
- (void)_setStatus:(long long)a0;
- (void)dealloc;
- (long long)_requestID;
- (void)_setError:(id)a0;
- (id)description;
- (int)_encryptionMode;
- (void)processContentKeyResponseError:(id)a0;
- (long long)externalContentProtectionStatus;
- (BOOL)setReportGroup:(id)a0;
- (BOOL)_canRespondByRequestingPersistableContentKeyRequest;
- (void)_copyAndStoreCryptorUUID;
- (struct CMBaseObject { } *)_copyContentKeyBoss;
- (void)_finishLoadingCustomURLRequestWithError:(id)a0;
- (void)_finishLoadingCustomURLRequestWithResponseData:(id)a0 renewalDate:(id)a1;
- (id)_getRetryReasonForError:(int)a0;
- (void)_handleKeyResponseError:(id)a0;
- (void)_handleKeyResponseSuccessWithCryptor:(struct OpaqueFigCPECryptor { } *)a0;
- (id)_keySystem;
- (id)_makeStreamingContentKeyRequestDataForApp:(id)a0 contentIdentifier:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)_prepareForKeyRenewalReturningError:(id *)a0;
- (BOOL)_processContentKeyResponse:(id)a0 renewalDate:(id)a1 initalizationVector:(id)a2 error:(id *)a3;
- (void)_processContentKeyResponseError:(id)a0;
- (void)_sendResponseInfoToCustomURLHandlerWithRenewalDate:(id)a0;
- (id)contentKeyRequestDataForApp:(id)a0 contentIdentifier:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)ensureCryptorWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 error:(id *)a1;
- (struct OpaqueFigCPECryptor { } *)figCryptor;
- (id)initWithContentKeySession:(id)a0 contentKeyBoss:(struct CMBaseObject { } *)a1 useContentKeyBoss:(BOOL)a2 keySpecifier:(struct FigContentKeySpecifier { } *)a3 initializationData:(id)a4 keyIDFromInitializationData:(id)a5 contentIdentifier:(id)a6 isRenewalRequest:(BOOL)a7 requestID:(long long)a8 providesPersistableKey:(BOOL)a9 preloadingRequestOptions:(id)a10 identifier:(id)a11;
- (id)initWithContentKeySession:(id)a0 reportGroup:(id)a1 customURLHandler:(struct OpaqueFigCustomURLHandler { } *)a2 identifier:(id)a3 requestInfo:(struct __CFDictionary { } *)a4 requestID:(unsigned long long)a5 providesPersistableKey:(BOOL)a6 isRenewalRequest:(BOOL)a7;
- (id)initWithContentKeySession:(id)a0 reportGroup:(id)a1 identifier:(id)a2 contentIdentifier:(id)a3 keyIDFromInitializationData:(id)a4 initializationData:(id)a5 preloadingRequestOptions:(id)a6 providesPersistableKey:(BOOL)a7;
- (void)makeStreamingContentKeyRequestDataForApp:(id)a0 contentIdentifier:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)processContentKeyResponse:(id)a0;
- (void)processContentKeyResponseData:(id)a0;
- (BOOL)processContentKeyResponseData:(id)a0 renewalDate:(id)a1 error:(id *)a2;
- (void)renewExpiringContentKeyResponseData;
- (BOOL)renewsExpiringResponseData;
- (void)respondByRequestingPersistableContentKeyRequest;
- (BOOL)respondByRequestingPersistableContentKeyRequestAndReturnError:(id *)a0;
- (BOOL)willOutputBeObscuredDueToInsufficientExternalProtectionForDisplays:(id)a0;

@end
