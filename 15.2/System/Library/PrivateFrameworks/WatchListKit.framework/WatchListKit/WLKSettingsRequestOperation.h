@class NSDictionary;

@interface WLKSettingsRequestOperation : WLKNetworkRequestOperation

@property (readonly, nonatomic) NSDictionary *response;

+ (id)_requestURL:(id *)a0;

- (void)processResponse;
- (void)prepareURLRequest:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
