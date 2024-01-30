@class NSURL, NSString, ICRequestContext;

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
@property (nonatomic) BOOL shouldIncludeDeviceGUID;

- (void)performWithResponseHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureUsingAssetResourceLoadingRequest:(id)a0;

@end
