@class BKSHIDEventKeyCommandsDispatchingPredicate, NSArray, NSString;

@interface BKSHIDEventKeyCommandsDispatchingRule : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BKSHIDEventKeyCommandsDispatchingPredicate *predicate;
@property (readonly, copy, nonatomic) NSArray *targets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleForDispatchingKeyCommandsMatchingPredicate:(id)a0 toTargets:(id)a1;

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
- (id)_initWithPredicate:(id)a0 targets:(id)a1;

@end
