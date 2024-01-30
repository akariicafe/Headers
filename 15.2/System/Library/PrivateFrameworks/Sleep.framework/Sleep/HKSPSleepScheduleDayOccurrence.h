@class NSString, NSSet, HKSPAlarmConfiguration, NSDateComponents, NSDate, NSDictionary;

@interface HKSPSleepScheduleDayOccurrence : NSObject <HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (readonly, copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (readonly, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (readonly, nonatomic) NSString *groupingIdentifier;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)innerClasses;

- (BOOL)isEquivalentTo:(id)a0;
- (id)initFromObject:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_equateTo:(id)a0 builderBuilderBlock:(id /* block */)a1;
- (id)succinctDescriptionBuilder;
- (void)copyFromObject:(id)a0;
- (id)generateSleepScheduleOccurrenceWithWeekdays:(unsigned long long)a0;
- (id)changesFromOccurrence:(id)a0;
- (BOOL)isEquivalentToOccurrenceIgnoringDates:(id)a0;
- (BOOL)isAlarmEquivalentToOccurrenceIgnoringDates:(id)a0;
- (id)_decodeComponentsForPersistenceWithCoder:(id)a0 key:(id)a1;
- (void)_encodeComponentsForPersistence:(id)a0 coder:(id)a1 key:(id)a2;

@end
