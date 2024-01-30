@class ICStoreURLRequest, NSString, NSDictionary, ICMediaRedownloadResponse, ICStoreRequestContext;

@interface ICMediaRedownloadRequest : ICRequestOperation {
    ICMediaRedownloadResponse *_redownloadResponse;
    ICStoreURLRequest *_storeURLRequest;
}

@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) NSDictionary *redownloadParameters;
@property (copy, nonatomic) NSString *requestURLBagKey;
@property (nonatomic) BOOL includeKeybagSyncData;
@property (nonatomic) BOOL includeSubscriptionKeybagSyncData;
@property (nonatomic, getter=isPlaybackRequest) BOOL playbackRequest;
@property (nonatomic, getter=isStreamingRental) BOOL streamingRental;
@property (nonatomic) BOOL usePrioritizedURLSession;

- (void)cancel;
- (id)initWithRequestContext:(id)a0 redownloadParametersString:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)a0 redownloadParameters:(id)a1;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void)_executeWithActiveICloudAccountProperties:(id)a0;

@end
