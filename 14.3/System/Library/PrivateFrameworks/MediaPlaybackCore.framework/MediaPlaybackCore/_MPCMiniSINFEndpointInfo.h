@class NSURL, ICStoreRequestContext;

@interface _MPCMiniSINFEndpointInfo : NSObject

@property (readonly, copy, nonatomic) NSURL *endpointURL;
@property (readonly, nonatomic) long long maximumBatchSize;
@property (readonly, nonatomic) ICStoreRequestContext *requestContext;

- (void).cxx_destruct;
- (id)initWithEndpointURL:(id)a0 maximumBatchSize:(long long)a1 requestContext:(id)a2;

@end
