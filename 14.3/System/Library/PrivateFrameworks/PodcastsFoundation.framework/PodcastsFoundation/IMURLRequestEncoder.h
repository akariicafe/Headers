@interface IMURLRequestEncoder : AMSURLRequestEncoder

@property (nonatomic) BOOL personalizeRequests;

- (id)requestByEncodingRequest:(id)a0 parameters:(id)a1;
- (void)prepareRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithBag:(id)a0;

@end
