@class NSString;

@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int hidEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorWithEventType:(unsigned int)a0;
+ (id)descriptorForHIDEvent:(struct __IOHIDEvent { } *)a0;

- (BOOL)describes:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithEventType:(unsigned int)a0;
- (BOOL)matchesHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)a0;

@end
