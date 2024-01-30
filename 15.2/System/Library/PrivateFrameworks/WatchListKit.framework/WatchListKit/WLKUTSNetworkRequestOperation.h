@class NSDictionary, WLKURLRequestProperties;

@interface WLKUTSNetworkRequestOperation : WLKNetworkRequestOperation {
    NSDictionary *_responseDictionary;
}

@property (nonatomic) unsigned long long environmentHash;
@property (retain, nonatomic) WLKURLRequestProperties *requestProperties;
@property BOOL didHandleInvalidConfig;

- (id)responseDictionary;
- (id)shortDescription;
- (void)processResponse;
- (void)prepareURLRequest:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithRequestProperties:(id)a0;
- (void)configureSession;
- (void)handleResult:(id)a0 error:(id)a1;

@end
