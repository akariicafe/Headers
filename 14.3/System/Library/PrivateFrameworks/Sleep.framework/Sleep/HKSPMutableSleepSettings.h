@class HKSPChangeSet, NSSet, NSString, NSDate;

@interface HKSPMutableSleepSettings : HKSPSleepSettings <HKSPMutableObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL springBoardGreetingDisabled;
@property (nonatomic) BOOL watchSleepFeaturesEnabled;
@property (nonatomic) BOOL scheduledSleepMode;
@property (nonatomic) unsigned long long sleepModeOptions;
@property (nonatomic) BOOL sleepTracking;
@property (nonatomic) BOOL timeInBedTracking;
@property (nonatomic) BOOL bedtimeReminders;
@property (nonatomic) BOOL wakeUpResults;
@property (nonatomic) BOOL chargingReminders;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)freeze;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
