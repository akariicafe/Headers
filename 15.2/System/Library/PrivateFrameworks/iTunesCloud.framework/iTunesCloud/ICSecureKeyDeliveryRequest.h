@class ICRequestContext, NSString, NSURL, NSNumber;

@interface ICSecureKeyDeliveryRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSURL *certificateURL;
@property (copy, nonatomic) NSString *contentURI;
@property (copy, nonatomic) NSURL *keyServerURL;
@property (nonatomic) long long leaseActionType;
@property (copy, nonatomic) ICRequestContext *requestContext;
@property (nonatomic) long long rentalID;
@property (nonatomic) BOOL skippedRentalCheckout;
@property (nonatomic, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) id /* block */ serverPlaybackContextDataCreationHandler;
@property (copy, nonatomic) id /* block */ asyncServerPlaybackContextDataCreationHandler;
@property (nonatomic) BOOL shouldIncludeDeviceGUID;
@property (nonatomic) long long requestProtocolType;
@property (nonatomic) BOOL isOfflineDownload;
@property (copy, nonatomic) NSNumber *adamID;
@property (copy, nonatomic) NSString *playbackToken;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)performWithResponseHandler:(id /* block */)a0;
- (void)configureUsingAssetResourceLoadingRequest:(id)a0;
- (void)configureUsingContentKeyRequest:(id)a0;

@end
