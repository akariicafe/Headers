@class NSArray, NSString, SSAuthenticationContext, NSDictionary;

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext *_authenticationContext;
    NSArray *_redeemCodes;
}

@property (readonly) NSArray *redeemCodes;
@property (copy) SSAuthenticationContext *authenticationContext;
@property BOOL headless;
@property BOOL cameraRecognized;
@property (retain, nonatomic) NSString *logCorrelationKey;
@property (retain, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWithRedeemResponseBlock:(id /* block */)a0;
- (id)initWithRedeemCodes:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)dealloc;

@end
