@class NSDictionary, WLKURLRequestProperties;

@interface WLKUTSNetworkRequestOperation : WLKNetworkRequestOperation {
    NSDictionary *_responseDictionary;
}

@property (nonatomic) unsigned long long environmentHash;
@property (retain, nonatomic) WLKURLRequestProperties *requestProperties;
@property BOOL didHandleInvalidConfig;

- (id)responseDictionary;
- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithRequestProperties:(id)a0;
- (void)processResponse;
- (void)prepareURLRequest:(id /* block */)a0;
- (void)handleResult:(id)a0 error:(id)a1;

@end
