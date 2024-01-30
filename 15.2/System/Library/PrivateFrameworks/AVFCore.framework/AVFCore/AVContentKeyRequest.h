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

+ (void)_validateProtocolVersionList:(id)a0;
+ (void)_validateHLSEncryptionMethod:(id)a0;
+ (void)_validateServerChallenge:(id)a0;
+ (BOOL)_prepareCryptor:(struct OpaqueFigCPECryptor { } *)a0 forRenewal:(BOOL)a1 andReturnKeyRequestID:(unsigned long long *)a2 isInchargeOfKeyRequest:(BOOL *)a3 error:(id *)a4;
+ (id)_ensureProtocolVersionList:(id)a0;
+ (id)_mergePreloadingRequestOptions:(id)a0 withCreateKeyRequestOptions:(id)a1;
+ (id)_createKeyRequestDictionaryForApp:(id)a0 persistentKey:(id)a1 serverChallenge:(id)a2 cryptorKeyRequestID:(unsigned long long)a3 purpose:(int)a4;

- (id)initWithContentKeySession:(id)a0 reportGroup:(id)a1 identifier:(id)a2 contentIdentifier:(id)a3 keyIDFromInitializationData:(id)a4 initializationData:(id)a5 preloadingRequestOptions:(id)a6 providesPersistableKey:(BOOL)a7;
- (id)session;
- (id)initWithContentKeySession:(id)a0 reportGroup:(id)a1 customURLHandler:(struct OpaqueFigCustomURLHandler { } *)a2 identifier:(id)a3 requestInfo:(struct __CFDictionary { } *)a4 requestID:(unsigned long long)a5 providesPersistableKey:(BOOL)a6 isRenewalRequest:(BOOL)a7;
- (void)_clearContext;
- (struct OpaqueFigCPECryptor { } *)figCryptor;
- (void)_setStatus:(long long)a0;
- (id)_keySystem;
- (id)description;
- (BOOL)setReportGroup:(id)a0;
- (void)_copyAndStoreCryptorUUID;
- (id)_getRetryReasonForError:(int)a0;
- (void)_finishLoadingCustomURLRequestWithError:(id)a0;
- (BOOL)ensureCryptorWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 error:(id *)a1;
- (id)contentKeyRequestDataForApp:(id)a0 contentIdentifier:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)processContentKeyResponseData:(id)a0 renewalDate:(id)a1 error:(id *)a2;
- (void)_finishLoadingCustomURLRequestWithResponseData:(id)a0 renewalDate:(id)a1;
- (void)_handleKeyResponseError:(id)a0;
- (BOOL)_canRespondByRequestingPersistableContentKeyRequest;
- (void)_sendResponseInfoToCustomURLHandlerWithRenewalDate:(id)a0;
- (void)_setError:(id)a0;
- (BOOL)respondByRequestingPersistableContentKeyRequestAndReturnError:(id *)a0;
- (BOOL)_prepareForKeyRenewalReturningError:(id *)a0;
- (BOOL)renewsExpiringResponseData;
- (void)_handleKeyResponseSuccess;
- (void)makeStreamingContentKeyRequestDataForApp:(id)a0 contentIdentifier:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)processContentKeyResponseData:(id)a0;
- (void)processContentKeyResponse:(id)a0;
- (void)processContentKeyResponseError:(id)a0;
- (void)renewExpiringContentKeyResponseData;
- (void)respondByRequestingPersistableContentKeyRequest;
- (BOOL)willOutputBeObscuredDueToInsufficientExternalProtectionForDisplays:(id)a0;
- (long long)externalContentProtectionStatus;
- (void)dealloc;

@end
