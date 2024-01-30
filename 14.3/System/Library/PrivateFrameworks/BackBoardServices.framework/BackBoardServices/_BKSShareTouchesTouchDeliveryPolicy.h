@class NSObject;
@protocol OS_xpc_object;

@interface _BKSShareTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {
    NSObject<OS_xpc_object> *_assertionEndpoint;
}

@property (readonly, nonatomic) unsigned int childContextId;
@property (readonly, nonatomic) unsigned int hostContextId;

+ (BOOL)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithChildContextId:(unsigned int)a0 hostContextId:(unsigned int)a1;
- (id)matchSharingTouchesPolicy:(id /* block */)a0 orCancelTouchesPolicy:(id /* block */)a1 orCombinedPolicy:(id /* block */)a2;
- (id)assertionEndpoint;
- (void)setAssertionEndpoint:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
