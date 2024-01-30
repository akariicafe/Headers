@class NSObject;
@protocol OS_xpc_object;

@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *assertionEndpoint;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)policyByCombiningPolicies:(id)a0;
+ (id)policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned int)a0 withHostContextId:(unsigned int)a1;
+ (id)policyCancelingTouchesDeliveredToContextId:(unsigned int)a0 withInitialTouchTimestamp:(double)a1;

- (void)appendDescriptionToFormatter:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)matchSharingTouchesPolicy:(id /* block */)a0 orCancelTouchesPolicy:(id /* block */)a1 orCombinedPolicy:(id /* block */)a2;
- (id)policyByMappingContainedPoliciesWithBlock:(id /* block */)a0;
- (id)reducePolicyToObjectWithBlock:(id /* block */)a0;
- (id)policyIncludingPolicy:(id)a0;
- (id)policyExcludingPolicy:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
