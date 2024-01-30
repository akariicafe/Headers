@class NSDictionary, NSData, NSError, AVContentKeyRequestInternal;

@interface AVContentKeyRequest : NSObject {
    AVContentKeyRequestInternal *_contentKeyRequest;
}

@property (readonly) long long status;
@property (readonly) NSError *error;
@property (readonly) id identifier;
@property (readonly, nonatomic) NSData *initializationData;
@property (readonly, copy) NSDictionary *options;
@property (readonly) BOOL canProvidePersistableContentKey;

+ (void)_validateProtocolVersionList:(id)a0;
+ (void)_validateHLSEncryptionMethod:(id)a0;
+ (int)_prepareCryptor:(struct OpaqueFigCPECryptor { } *)a0 forRenewal:(BOOL)a1 andReturnKeyRequestID:(unsigned long long *)a2;
+ (id)_ensureProtocolVersionList:(id)a0;
+ (void)_validateServerChallenge:(id)a0;
+ (id)_mergePreloadingRequestOptions:(id)a0 withCreateKeyRequestOptions:(id)a1;
+ (id)_createKeyRequestDictionaryForApp:(id)a0 persistentKey:(id)a1 serverChallenge:(id)a2 cryptorKeyRequestID:(unsigned long long)a3 purpose:(int)a4;

- (id)initWithContentKeySession:(id)a0 reportGroup:(id)a1 identifier:(id)a2 initializationData:(id)a3 preloadingRequestOptions:(id)a4 providesPersistableKey:(BOOL)a5;
- (id)initWithContentKeySession:(id)a0 reportGroup:(id)a1 customURLHandler:(struct OpaqueFigCustomURLHandler { } *)a2 identifier:(id)a3 requestInfo:(struct __CFDictionary { } *)a4 requestID:(unsigned long long)a5 providesPersistableKey:(BOOL)a6 isRenewalRequest:(BOOL)a7;
- (void)dealloc;
- (struct OpaqueFigCPECryptor { } *)figCryptor;
- (void)_setStatus:(long long)a0;
- (void)_setError:(id)a0;
- (id)description;
- (id)_keySystem;
- (void)_clearContext;
- (void)_copyAndStoreCryptorUUID;
- (int)_extractAndStoreKeyIDFromInitializationData:(id)a0;
- (id)_getRetryReasonForError:(int)a0;
- (void)_finishLoadingCustomURLRequestWithError:(id)a0;
- (BOOL)setReportGroup:(id)a0;
- (struct OpaqueFigCPECryptor { } *)_setCryptorWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 error:(id *)a1;
- (id)contentKeyRequestDataForApp:(id)a0 contentIdentifier:(id)a1 options:(id)a2 error:(id *)a3;
- (void)processContentKeyResponseData:(id)a0 renewalDate:(id)a1;
- (void)_handleKeyResponseError:(id)a0;
- (int)_prepareForKeyRenewal;
- (void)_finishLoadingCustomURLRequestWithResponseData:(id)a0 renewalDate:(id)a1;
- (void)processContentKeyResponseData:(id)a0;
- (BOOL)_canRespondByRequestingPersistableContentKeyRequest;
- (BOOL)respondByRequestingPersistableContentKeyRequestAndReturnError:(id *)a0;
- (BOOL)renewsExpiringResponseData;
- (void)_sendResponseInfoToCustomURLHandlerWithRenewalDate:(id)a0;
- (void)_handleKeyResponseSuccess;
- (void)makeStreamingContentKeyRequestDataForApp:(id)a0 contentIdentifier:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)processContentKeyResponse:(id)a0;
- (void)processContentKeyResponseError:(id)a0;
- (void)renewExpiringContentKeyResponseData;
- (void)respondByRequestingPersistableContentKeyRequest;
- (BOOL)willOutputBeObscuredDueToInsufficientExternalProtectionForDisplays:(id)a0;

@end
