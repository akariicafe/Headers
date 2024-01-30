@class BKSHIDEventDescriptor;

@interface BKSHIDEventSenderSpecificDescriptor : BKSHIDEventDescriptor

@property (retain, nonatomic) BKSHIDEventDescriptor *sourceDescriptor;
@property (readonly) unsigned long long senderID;

+ (BOOL)supportsSecureCoding;

- (BOOL)describes:(id)a0;
- (id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)a0;
- (BOOL)matchesHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDescriptor:(id)a0 senderID:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
