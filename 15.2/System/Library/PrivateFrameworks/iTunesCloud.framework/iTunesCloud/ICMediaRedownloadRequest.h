@class ICStoreURLRequest, NSString, NSDictionary, ICMediaRedownloadResponse, ICUnfairLock, ICStoreRequestContext;

@interface ICMediaRedownloadRequest : ICRequestOperation {
    ICMediaRedownloadResponse *_redownloadResponse;
    ICStoreURLRequest *_storeURLRequest;
    ICUnfairLock *_lock;
}

@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) NSDictionary *redownloadParameters;
@property (copy, nonatomic) NSString *requestURLBagKey;
@property (nonatomic) BOOL includeKeybagSyncData;
@property (nonatomic) BOOL includeSubscriptionKeybagSyncData;
@property (nonatomic, getter=isPlaybackRequest) BOOL playbackRequest;
@property (nonatomic, getter=isStreamingRental) BOOL streamingRental;
@property (nonatomic) BOOL usePrioritizedURLSession;

- (void)execute;
- (void).cxx_destruct;
- (id)init;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void)cancel;
- (id)initWithRequestContext:(id)a0 redownloadParameters:(id)a1;
- (id)initWithRequestContext:(id)a0 redownloadParametersString:(id)a1;
- (void)_executeWithActiveICloudAccountProperties:(id)a0;

@end
