@class ACAccount;

@interface FAFamilyRequest : AAFamilyRequest

@property (retain, nonatomic) ACAccount *appleAccount;

- (id)_endpoint;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)_queryString;
- (id)initWithGrandSlamSigner:(id)a0;
- (void)URLRequestWithCompletion:(id /* block */)a0;
- (void)_baseURLForEndpoint:(id)a0 withCompletion:(id /* block */)a1;
- (void)_configureRequest:(id)a0 includePayload:(BOOL)a1;
- (void)_decoratedURLWithCompletion:(id /* block */)a0;

@end
