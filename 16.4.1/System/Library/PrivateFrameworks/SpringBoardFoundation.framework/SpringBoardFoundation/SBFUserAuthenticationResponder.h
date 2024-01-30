@class NSString;

@interface SBFUserAuthenticationResponder : NSObject <SBFAuthenticationResponder>

@property (copy, nonatomic) id /* block */ successHandler;
@property (copy, nonatomic) id /* block */ failureHandler;
@property (copy, nonatomic) id /* block */ invalidHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responderWithSuccessHandler:(id /* block */)a0 failureHandler:(id /* block */)a1 invalidHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)handleFailedAuthenticationRequest:(id)a0 error:(id)a1;
- (void)handleInvalidAuthenticationRequest:(id)a0;
- (void)handleSuccessfulAuthenticationRequest:(id)a0;
- (id)initWithSuccessHandler:(id /* block */)a0 failureHandler:(id /* block */)a1 invalidHandler:(id /* block */)a2;

@end
