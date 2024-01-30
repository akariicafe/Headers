@class NSArray;

@interface _BKSCombinedTouchDeliveryPolicy : BKSTouchDeliveryPolicy

@property (readonly, nonatomic) NSArray *policies;

+ (BOOL)supportsSecureCoding;

- (id)assertionEndpoint;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initWithPolicies:(id)a0;
- (void)setAssertionEndpoint:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)matchSharingTouchesPolicy:(id /* block */)a0 orCancelTouchesPolicy:(id /* block */)a1 orCombinedPolicy:(id /* block */)a2;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
