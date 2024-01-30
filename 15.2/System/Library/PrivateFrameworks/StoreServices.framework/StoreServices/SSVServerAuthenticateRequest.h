@class SSAuthenticationContext, NSString, NSObject;
@protocol OS_xpc_object;

@interface SSVServerAuthenticateRequest : SSRequest <SSXPCCoding>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedDialog;
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEncodedDialog:(id)a0;
- (void)startWithAuthenticateResponse:(id /* block */)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;

@end
