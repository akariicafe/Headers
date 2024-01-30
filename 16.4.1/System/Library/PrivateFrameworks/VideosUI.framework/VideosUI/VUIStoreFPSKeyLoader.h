@class NSData, NSDate, NSURL, TVPContentKeyRequest, TVPContentKeySession, NSMutableDictionary, NSMutableArray, NSObject, NSNumber, TVPPlaybackReportingEventCollection;
@protocol VUIStoreFPSKeyLoaderDelegate;

@interface VUIStoreFPSKeyLoader : NSObject

@property (class, readonly, nonatomic) unsigned long long maximumRequestBatchSize;

@property (copy, nonatomic) NSURL *certificateURL;
@property (copy, nonatomic) NSURL *keyServerURL;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSData *certificateData;
@property (retain, nonatomic) NSMutableArray *requestsAwaitingCertFetch;
@property (retain, nonatomic) TVPContentKeyRequest *savedStreamingKeyRequestToUseForStopping;
@property (retain, nonatomic) NSDate *keyExpirationDate;
@property (retain, nonatomic) NSDate *rentalPlaybackStartDate;
@property (retain, nonatomic) TVPContentKeySession *contentKeySession;
@property (retain, nonatomic) NSMutableDictionary *keyIdentifierPenaltyBox;
@property (nonatomic) double downloadExpirationPeriodOverrideInSeconds;
@property (nonatomic) double availabilityPeriodOverrideInSeconds;
@property (retain, nonatomic) NSURL *secureInvalidationNonceURL;
@property (retain, nonatomic) NSNumber *secureInvalidationDSID;
@property (weak, nonatomic) NSObject<VUIStoreFPSKeyLoaderDelegate> *delegate;
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection;
@property (retain, nonatomic) NSNumber *rentalID;
@property (nonatomic) BOOL didSkipRentalCheckout;
@property (nonatomic) BOOL usesKeyIdentifierPenaltyBox;
@property (nonatomic) BOOL sendsLocationWhenOptedIn;
@property (nonatomic) BOOL sendsMescalHeader;

+ (void)initialize;
+ (void)_loadAndCacheCertificateDataForValidURL:(id)a0 completion:(id /* block */)a1;
+ (void)_loadFPSURLsFromStoreBagWithCompletion:(id /* block */)a0;
+ (void)preFetchFPSCertificate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_bodyDictionaryForRequests:(id)a0 isStopRequest:(BOOL)a1 locationAuthorizationStatus:(long long)a2;
- (id)_errorForStoreResponseStatus:(long long)a0 deviceLimit:(id)a1;
- (void)_failKeyRequests:(id)a0 withError:(id)a1;
- (void)_generateKeyRequestDataForKeyRequests:(id)a0 completion:(id /* block */)a1;
- (void)_generateSecureInvalidationDataForFirstRequest:(id)a0 completion:(id /* block */)a1;
- (void)_generateSecureInvalidationDataForRequests:(id)a0 completion:(id /* block */)a1;
- (void)_handleResponseDict:(id)a0 forKeyRequest:(id)a1;
- (void)_handleResponseDicts:(id)a0 forKeyRequests:(id)a1;
- (void)_handleResponseForKeyRequests:(id)a0 responseData:(id)a1 URLResponse:(id)a2 error:(id)a3;
- (void)_initiateKeyRequests:(id)a0 completion:(id /* block */)a1;
- (void)_invalidateValidKeyRequestsInBatches:(id)a0 completion:(id /* block */)a1;
- (id)_jsonDictionaryForRequest:(id)a0 isStopRequest:(BOOL)a1 locationAuthorizationStatus:(long long)a2;
- (void)_loadCertificateDataWithCompletion:(id /* block */)a0;
- (void)_loadNonceDataForRequests:(id)a0 completion:(id /* block */)a1;
- (void)_sendKeyRequestsToServer:(id)a0 isStopRequest:(BOOL)a1 isSecureInvalidationRequest:(BOOL)a2 completion:(id /* block */)a3;
- (void)_startKeyRequests:(id)a0 completion:(id /* block */)a1;
- (void)_startKeyRequestsInBatches:(id)a0 completion:(id /* block */)a1;
- (id)initWithCertificateURL:(id)a0 keyServerURL:(id)a1;
- (void)invalidateKeysWithRequests:(id)a0 completion:(id /* block */)a1;
- (void)loadFairPlayStreamingKeyRequests:(id)a0 completion:(id /* block */)a1;
- (void)removeAllEntriesFromKeyIdentifierPenaltyBox;
- (void)sendStreamingStopRequestIfNecessary;

@end
