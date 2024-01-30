@class SSAuthenticationContext, NSString;

@interface SSVDisableSubscriptionRequest : SSRequest <SSXPCCoding>

@property (copy, nonatomic) SSAuthenticationContext *authenticationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
