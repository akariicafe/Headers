@class NSString, ICMediaRedownloadRequest, MPStoreRedownloadProductResponse, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MPStoreRedownloadProductOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPStoreRedownloadProductResponse *_redownloadProductResponse;
    NSError *_responseError;
    BOOL _shouldUseStreamingRedownload;
    ICMediaRedownloadRequest *_redownloadRequest;
}

@property (readonly, copy, nonatomic) NSString *buyParameters;
@property (readonly, nonatomic) unsigned long long endpointType;
@property (readonly, nonatomic) MPStoreRedownloadProductResponse *redownloadProductResponse;
@property (readonly, copy, nonatomic) NSError *responseError;
@property (nonatomic, getter=isStreamingRental) BOOL streamingRental;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;

- (void)cancel;
- (id)initWithBuyParameters:(id)a0 endpointType:(unsigned long long)a1;
- (id)initWithBuyParameters:(id)a0 endpointType:(unsigned long long)a1 shouldUseStreamingRedownload:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;
- (void)main;

@end
