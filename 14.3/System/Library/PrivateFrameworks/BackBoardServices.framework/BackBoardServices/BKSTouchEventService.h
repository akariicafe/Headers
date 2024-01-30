@class BSCompoundAssertion;

@interface BKSTouchEventService : NSObject

@property (retain, nonatomic) BSCompoundAssertion *authenticationSpecificationAssertion;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)addAuthenticationSpecifications:(id)a0 forReason:(id)a1;

@end
