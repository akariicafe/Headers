@class NSArray;

@interface _BKSCombinedTouchDeliveryPolicy : BKSTouchDeliveryPolicy

@property (readonly, nonatomic) NSArray *policies;

+ (BOOL)supportsSecureCoding;

- (id)matchSharingTouchesPolicy:(id /* block */)a0 orCancelTouchesPolicy:(id /* block */)a1 orCombinedPolicy:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (void)setAssertionEndpoint:(id)a0;
- (id)assertionEndpoint;
- (id)initWithPolicies:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)appendDescriptionToFormatter:(id)a0;

@end
