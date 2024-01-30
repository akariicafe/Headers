@interface BKSHIDEventUsagePairDescriptor : BKSHIDEventDescriptor

@property (readonly) unsigned int page;
@property (readonly) unsigned int usage;

+ (id)descriptorForHIDEventType:(unsigned int)a0 page:(unsigned short)a1 usage:(unsigned short)a2;
+ (BOOL)supportsSecureCoding;

- (BOOL)describes:(id)a0;
- (BOOL)matchesHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)_initWithPage:(unsigned int)a0 usage:(unsigned int)a1 eventType:(unsigned int)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)_page:(unsigned int)a0 usage:(unsigned int)a1 matchesHIDEvent:(struct __IOHIDEvent { } *)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
