@class HKSPChangeSet, NSSet, NSDictionary, HKSPAlarmConfiguration, NSDateComponents, NSDate, NSString;
@protocol HKSPObject;

@interface HKSPMutableSleepScheduleDayOccurrence : HKSPSleepScheduleDayOccurrence <HKSPMutableObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (retain, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) id<HKSPObject> originalObject;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
