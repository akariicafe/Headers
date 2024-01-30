@class ICRequestContext, NSDictionary;

@interface ICDelegationConsumerServiceRequest : NSObject

@property (readonly, copy, nonatomic) ICRequestContext *requestContext;
@property (readonly, nonatomic) double timeoutInterval;
@property (readonly, copy, nonatomic) NSDictionary *userIdentityDelegationAccountUUIDs;

- (void).cxx_destruct;
- (id)initWithUserIdentityDelegationAccountUUIDs:(id)a0 requestContext:(id)a1 timeoutInterval:(double)a2;

@end
