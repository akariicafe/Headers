@class NSArray, NSString, NSURL, NSNumber;

@interface SAAlarmAlarmModification : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *addedFrequency;
@property (copy, nonatomic) NSURL *alarmId;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *minute;
@property (copy, nonatomic) NSArray *removedFrequency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alarmModificationWithDictionary:(id)a0 context:(id)a1;
+ (id)alarmModification;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
