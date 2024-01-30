@class NSDictionary, AVAssetResourceLoadingRequest, NSData, NSURL, NSNumber, NSObject;
@protocol SSVSecureKeyDeliveryRequestOperationDelegate, OS_dispatch_queue;

@interface SSVSecureKeyDeliveryRequestOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _iTunesStoreRequest;
    BOOL _shouldIncludeGUID;
    NSDictionary *_URLBagDictionary;
}

@property (readonly, copy, nonatomic) NSData *persistentContentKeyContext;
@property (nonatomic) long long leaseAction;
@property BOOL offline;
@property (readonly, nonatomic) double expirationTime;
@property (readonly, nonatomic) double playbackStartTime;
@property (weak, nonatomic) id<SSVSecureKeyDeliveryRequestOperationDelegate> serverPlaybackContextDataDelegate;
@property (retain, nonatomic) NSData *serverPlaybackContextData;
@property (retain) NSURL *certificateURL;
@property (retain) NSURL *keyServerURL;
@property (retain) AVAssetResourceLoadingRequest *resourceLoadingRequest;
@property (copy) NSNumber *rentalId;
@property BOOL skippedRentalCheckout;
@property (getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property (nonatomic) BOOL shouldIncludeGUID;
@property (copy) id /* block */ responseBlock;

- (void)configureWithURLBagDictionary:(id)a0;
- (void)start;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)_sendResponseBlockWithError:(id)a0;
- (id)_streamingKeyDictionaryForID:(long long)a0 URI:(id)a1 serverPlaybackContextData:(id)a2;
- (id)_streamingRequestDictionaryWithStreamingKeyDictionaries:(id)a0;
- (id)_contentKeyContextForStreamingKeyID:(long long)a0 streamingKeyDictionaries:(id)a1 renewAfter:(double *)a2 error:(id *)a3;
- (double)_expirationTimeForStreamingKeyID:(long long)a0 streamingKeyDictionaries:(id)a1;
- (double)_playbackStartTimeForStreamingKeyID:(long long)a0 streamingKeyDictionaries:(id)a1;
- (void)setPersistentContentKeyContext:(id)a0;
- (double)_timeIntervalForStreamingKeyID:(long long)a0 responseKey:(id)a1 streamingKeyDictionaries:(id)a2;

@end
