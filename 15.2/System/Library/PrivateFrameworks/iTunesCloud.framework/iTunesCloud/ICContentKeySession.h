@class NSString, AVContentKeySession, NSURL, NSSet, NSMutableDictionary, NSObject, NSMutableSet, ICFileContentKeyStore, ICStoreRequestContext, NSNumber;
@protocol ICContentKeySessionDelegateProtocol, ICContentKeyStoreProtocol, OS_dispatch_semaphore, OS_dispatch_queue, OS_dispatch_source;

@interface ICContentKeySession : NSObject <AVContentKeySessionDelegate> {
    AVContentKeySession *_contentKeySession;
    id<ICContentKeyStoreProtocol> _keyStore;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_pendingKeyIdentifiers;
    NSObject<OS_dispatch_semaphore> *_waitForKeysSemaphore;
    NSSet *_prefetchKeyIdentifiers;
    NSURL *_prefetchKeyServerURL;
    NSURL *_prefetchKeyCertificateURL;
    ICFileContentKeyStore *_prefetchedContentKeyStore;
    NSMutableDictionary *_keyRenewalDates;
    NSMutableDictionary *_keyRequestsPendingRenewal;
    NSObject<OS_dispatch_source> *_keyRenewalTimer;
    id<ICContentKeySessionDelegateProtocol> _delegate;
}

@property (class, readonly, nonatomic) NSString *enhancedAudioSharedContentKeyPath;

@property (readonly, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) NSURL *keyServerURL;
@property (copy, nonatomic) NSURL *keyCertificateURL;
@property (copy, nonatomic) NSNumber *adamID;
@property (copy, nonatomic) NSString *playbackToken;
@property (nonatomic) BOOL bypassCache;
@property (nonatomic) BOOL requestOfflineKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentKeySession:(id)a0 didProvideRenewingContentKeyRequest:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)removeAsset:(id)a0;
- (void)contentKeySession:(id)a0 didProvidePersistableContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (id)initWithRequestContext:(id)a0;
- (void)dealloc;
- (void)addAsset:(id)a0;
- (id)initWithRequestContext:(id)a0 keyStore:(id)a1;
- (id)initWithRequestContext:(id)a0 keyStore:(id)a1 delegate:(id)a2;
- (void)addAsset:(id)a0 shouldPreloadKeys:(BOOL)a1;
- (void)processKeyWithIdentifier:(id)a0;
- (void)pauseAutomaticKeyRenewal;
- (void)resumeAutomaticKeyRenewal;
- (void)waitForAllKeysToProcess;
- (void)waitForAllKeysToProcessWithTimeout:(double)a0;
- (void)_performKeyDeliveryRequestForContentKeyRequest:(id)a0 persistResponse:(BOOL)a1 isRenewal:(BOOL)a2;
- (void)_scheduleKeyRefreshTimer;
- (void)_renewExpiredKeys;
- (void)_processKeyWithIdentifier:(id)a0;

@end
