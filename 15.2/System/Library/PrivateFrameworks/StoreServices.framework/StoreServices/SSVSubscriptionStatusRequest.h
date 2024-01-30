@class NSString, SSAuthenticationContext;

@interface SSVSubscriptionStatusRequest : SSRequest <SSXPCCoding>

@property (nonatomic) BOOL authenticatesIfNecessary;
@property (copy, nonatomic) NSString *localizedAuthenticationReason;
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext;
@property (nonatomic) long long carrierBundleProvisioningStyle;
@property (copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_allowMultipleCallbacks;
+ (long long)requestMessage;

- (void)startWithStatusResponseBlock:(id /* block */)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
