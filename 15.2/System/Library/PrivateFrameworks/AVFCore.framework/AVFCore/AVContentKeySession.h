@class AVContentKeySessionInternal, NSString, NSURL, NSData, AVContentKeyReportGroup, NSObject;
@protocol AVContentKeySessionDelegate, OS_dispatch_queue;

@interface AVContentKeySession : NSObject {
    AVContentKeySessionInternal *_session;
}

@property (readonly, nonatomic, getter=isInternal) BOOL internal;
@property (readonly) AVContentKeyReportGroup *defaultContentKeyGroup;
@property (readonly, weak) id<AVContentKeySessionDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) NSURL *storageURL;
@property (readonly) NSString *keySystem;
@property (readonly) NSData *contentProtectionSessionIdentifier;

+ (void)initialize;
+ (id)contentKeySessionWithKeySystem:(id)a0;
+ (struct OpaqueFigSecureStopManager { } *)copyDefaultSecureStopManagerForAppIdentifier:(id)a0 storageDirectoryAtURL:(id)a1;
+ (id)contentKeySessionWithKeySystem:(id)a0 storageDirectoryAtURL:(id)a1;
+ (id)_uniqueIDForCyptorUUID:(id)a0 cryptorKeyRequestID:(unsigned long long)a1;
+ (id)pendingExpiredSessionReportsWithAppIdentifier:(id)a0 storageDirectoryAtURL:(id)a1;
+ (void)removePendingExpiredSessionReports:(id)a0 withAppIdentifier:(id)a1 storageDirectoryAtURL:(id)a2;

- (int)setAppIdentifier:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)_contentKeyGroups;
- (int)createAndInstallCustomURLHandlerForAsset:(id)a0 outHandler:(struct OpaqueFigCustomURLHandler **)a1;
- (void)_willDeallocOrFinalize;
- (id)description;
- (void)setDelegate:(id)a0;
- (void)_setWeakReferenceForContentKeyRequest:(id)a0 withCryptorUUID:(id)a1;
- (void)contentKeyRequestDidProduceContentKey:(id)a0;
- (void)_invokeDelegateCallbackWithBlock:(id /* block */)a0 synchronouslyWhenDelegateQueueIsNULL:(BOOL)a1;
- (void)expire;
- (void)_setContentKeyRequest:(id)a0 forCryptorUUID:(id)a1 cryptorKeyRequestID:(unsigned long long)a2;
- (void)renewExpiringResponseDataForContentKeyRequest:(id)a0;
- (BOOL)clientCanReceivePersistableContentKeyRequest;
- (void)issueContentKeyRequestWithCustomURLHandler:(struct OpaqueFigCustomURLHandler { } *)a0 identifier:(id)a1 requestInfo:(struct __CFDictionary { } *)a2 requestID:(unsigned long long)a3 providesPersistableKey:(BOOL)a4;
- (void)issueContentKeyRequestWithPreloadingRequestOptions:(id)a0 identifier:(id)a1 initializationData:(id)a2 providesPersistableKey:(BOOL)a3;
- (id)initWithKeySystem:(id)a0 storageDirectoryAtURL:(id)a1;
- (void)processContentKeyRequestWithIdentifier:(id)a0 initializationData:(id)a1 options:(id)a2;
- (void)addContentKeyRecipient:(id)a0;
- (void)removeContentKeyRecipient:(id)a0;
- (id)initWithStorageDirectoryAtURL:(id)a0;
- (id)contentKeyRecipients;
- (void)makeSecureTokenForExpirationDateOfPersistableContentKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidatePersistableContentKey:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)_handleSecureStopDidFinalizeRecordCallback;
- (void)invalidateAllPersistableContentKeysForApp:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasProtector;
- (const struct OpaqueFigCPECryptor { } *)copyCryptorForInitializationData:(id)a0;
- (void)_handleExternalProtectionStateChangedCallbackForCryptKeyIdentifier:(id)a0;
- (struct OpaqueFigCPECryptor { } *)copyCryptorForCryptKeyAttributes:(id)a0;
- (id)makeContentKeyGroup;
- (id)_contentKeyRequestForCryptorUUID:(id)a0 cryptorKeyRequestID:(unsigned long long)a1;
- (void)_handleContentProtectionSessionIdentifierDidChange:(id)a0;
- (void)_removeContentKeyRequestForCryptorUUID:(id)a0 cryptorKeyRequestID:(unsigned long long)a1;
- (void)_handleUpdateToPersistentKey:(id)a0 forKeyIdentifier:(id)a1;
- (void)issueRenewableContentKeyRequest:(id)a0;
- (void)_handleKeyResponseError:(id)a0 forCryptorUUID:(id)a1 andCryptorKeyRequestID:(unsigned long long)a2;
- (void)_handleKeyResponseSuccessfullyProcessedForCryptorUUID:(id)a0 andCryptorKeyRequestID:(unsigned long long)a1;
- (void)issueContentKeyRequest:(id)a0;
- (void)issuePersistableContentKeyRequest:(id)a0;
- (void)issueContentKeyRequests:(id)a0 forInitializationData:(id)a1;
- (void)issueContentKeyRequest:(id)a0 toDelegateWithCallbackSelector:(SEL)a1;
- (void)_sendFinishLoadingForPreloadedKeyRequest:(struct __CFDictionary { } *)a0 withRequestID:(unsigned long long)a1 fromHandler:(struct OpaqueFigCustomURLHandler { } *)a2 error:(id)a3;
- (id)initWithKeySystem:(id)a0 storageDirectoryAtURL:(id)a1 internal:(BOOL)a2;
- (id)issueContentKeyRequestForInitializationData:(id)a0;
- (const struct OpaqueFigCPECryptor { } *)createCryptorIfNecessaryForInitializationData:(id)a0 formatDescription:(struct opaqueCMFormatDescription { } *)a1 error:(id *)a2;
- (void)_handleRequest:(struct __CFDictionary { } *)a0 withRequestID:(unsigned long long)a1 fromHandler:(struct OpaqueFigCustomURLHandler { } *)a2 willHandleRequest:(BOOL *)a3;
- (id)_weakReference;
- (id)init;
- (void)dealloc;
- (id)_internalQueue;

@end
