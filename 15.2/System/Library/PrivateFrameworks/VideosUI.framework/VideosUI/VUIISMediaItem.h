@class NSString, NSDictionary, NSURL, NSData, NSMutableArray;

@interface VUIISMediaItem : TVPBaseMediaItem <TVPContentKeyLoading>

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURL *tokenServerURL;
@property (retain, nonatomic) NSURL *stopServerURL;
@property (retain, nonatomic) NSDictionary *tokenServerParameters;
@property (retain, nonatomic) NSString *assetIDForStopping;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSData *certificateData;
@property (retain, nonatomic) NSMutableArray *requestsAwaitingCertFetch;
@property (nonatomic) unsigned long long loadingContext;
@property (nonatomic) BOOL disableScrubbing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (id)mediaItemMetadataForProperty:(id)a0;
- (id)mediaItemURL;
- (BOOL)hasTrait:(id)a0;
- (void)_sendStopForAssetID:(id)a0;
- (id)_assetIDForKeyRequest:(id)a0;
- (id)_certificateURLForKeyRequest:(id)a0;
- (void)_startKeyRequests:(id)a0 token:(id)a1;
- (void)_failKeyRequests:(id)a0 withError:(id)a1;
- (void)_loadCertificateDataFromURL:(id)a0 loadingContext:(unsigned long long)a1 attemptNumber:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_fetchTokenForAssetID:(id)a0 completion:(id /* block */)a1;
- (void)_parseCertificateURL:(id *)a0 keyServerURL:(id *)a1 assetID:(id *)a2 fromKeyRequest:(id)a3;
- (BOOL)_allowedToRetryRequestForError:(id)a0 response:(id)a1;
- (double)_randomRetryDelayForFailedAttemptNumber:(unsigned long long)a0;
- (void)_sendKeyRequestsToServer:(id)a0 token:(id)a1;
- (void)_generateKeyRequestDataForKeyRequests:(id)a0 completion:(id /* block */)a1;
- (id)_assetIDDataForKeyRequest:(id)a0;
- (id)_linearServiceRequestForURL:(id)a0 assetID:(id)a1;
- (id)_keyServerURLForKeyRequest:(id)a0;
- (void)_sendURLRequestToServer:(id)a0 forKeyRequest:(id)a1 attemptNumber:(unsigned long long)a2;
- (void)loadFairPlayStreamingKeyRequests:(id)a0;
- (id)initWithURL:(id)a0 tokenServerURL:(id)a1 stopServerURL:(id)a2 tokenServerParameters:(id)a3;
- (BOOL)isEqualToMediaItem:(id)a0;
- (void)cleanUpMediaItem;

@end
