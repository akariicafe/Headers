@protocol AMSMediaTokenServiceProtocol;

@interface AMSMediaProtocolHandler : AMSURLProtocolHandler

@property (readonly, nonatomic) id<AMSMediaTokenServiceProtocol> tokenService;

- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)initWithTokenService:(id)a0;
- (id)handleResponse:(id)a0 task:(id)a1;

@end
