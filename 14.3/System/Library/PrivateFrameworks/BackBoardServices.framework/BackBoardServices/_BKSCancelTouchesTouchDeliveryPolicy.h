@class NSObject;
@protocol OS_xpc_object;

@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {
    NSObject<OS_xpc_object> *_assertionEndpoint;
}

@property (readonly, nonatomic) unsigned int contextId;
@property (readonly, nonatomic) double initialTouchTimestamp;

+ (BOOL)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)matchSharingTouchesPolicy:(id /* block */)a0 orCancelTouchesPolicy:(id /* block */)a1 orCombinedPolicy:(id /* block */)a2;
- (id)assertionEndpoint;
- (void)setAssertionEndpoint:(id)a0;
- (id)initWithContextId:(unsigned int)a0 initialTouchTimestamp:(double)a1;
- (void)encodeWithCoder:(id)a0;

@end
