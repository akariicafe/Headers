@class NSString, NSNumber;

@interface SAReminderDateTimeTriggerOffset : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *offsetTimeUnit;
@property (copy, nonatomic) NSNumber *offsetValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateTimeTriggerOffset;
+ (id)dateTimeTriggerOffsetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
