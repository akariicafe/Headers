@class BKSHIDEventDiscreteDispatchingPredicate, BKSHIDEventDispatchingTarget, NSString;

@interface BKSHIDEventDiscreteDispatchingRule : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BKSHIDEventDiscreteDispatchingPredicate *predicate;
@property (readonly, copy, nonatomic) BKSHIDEventDispatchingTarget *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleForDispatchingDiscreteEventsMatchingPredicate:(id)a0 toTarget:(id)a1;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)_initWithPredicate:(id)a0 target:(id)a1;

@end
