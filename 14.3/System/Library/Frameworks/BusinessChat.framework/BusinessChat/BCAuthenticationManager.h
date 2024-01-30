@class BCAuthenticationRequest, NSString;

@interface BCAuthenticationManager : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) BCAuthenticationRequest *authenticationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAuthenticationRequest:(id)a0;
- (BOOL)processQueryItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)processFragments:(id)a0 completion:(id /* block */)a1;
- (void)exchangeCode:(id)a0 completion:(id /* block */)a1;
- (void)accessTokenForData:(id)a0 completion:(id /* block */)a1;
- (void)fetchTokenWithURL:(id)a0 completion:(id /* block */)a1;

@end
