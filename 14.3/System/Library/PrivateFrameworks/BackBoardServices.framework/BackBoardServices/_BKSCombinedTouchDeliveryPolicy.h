@class NSArray;

@interface _BKSCombinedTouchDeliveryPolicy : BKSTouchDeliveryPolicy

@property (readonly, nonatomic) NSArray *policies;

+ (BOOL)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)initWithPolicies:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)matchSharingTouchesPolicy:(id /* block */)a0 orCancelTouchesPolicy:(id /* block */)a1 orCombinedPolicy:(id /* block */)a2;
- (id)assertionEndpoint;
- (void)setAssertionEndpoint:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
