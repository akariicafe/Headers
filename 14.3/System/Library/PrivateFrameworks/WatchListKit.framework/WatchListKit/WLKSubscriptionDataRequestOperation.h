@class NSDictionary;

@interface WLKSubscriptionDataRequestOperation : WLKNetworkRequestOperation

@property (readonly, nonatomic) NSDictionary *response;

+ (id)_requestURL:(id *)a0;

- (id)init;
- (void).cxx_destruct;
- (void)processResponse;
- (void)prepareURLRequest:(id /* block */)a0;

@end
