@class NSString, NSSet, NSDictionary, NSDate;
@protocol HKSPSyncAnchor;

@interface HKSPSleepSettings : NSObject <HKSPFeatureSettingsModel, BSDescriptionProviding, HKSPXPCObject, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL sleepTracking;
@property (readonly, nonatomic) BOOL springBoardGreetingDisabled;
@property (readonly, nonatomic) BOOL springBoardSuggestedPageCreated;
@property (readonly, nonatomic) BOOL watchSleepFeaturesEnabled;
@property (readonly, nonatomic) BOOL scheduledSleepMode;
@property (readonly, nonatomic) unsigned long long sleepModeOptions;
@property (readonly, nonatomic) BOOL sleepTracking;
@property (readonly, nonatomic) BOOL timeInBedTracking;
@property (readonly, nonatomic) BOOL bedtimeReminders;
@property (readonly, nonatomic) BOOL wakeUpResults;
@property (readonly, nonatomic) BOOL chargingReminders;
@property (readonly, nonatomic) BOOL shareAcrossDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;

- (id)initFromObject:(id)a0;
- (void)copyFromObject:(id)a0;
- (void)_migrateForCoder:(id)a0;
- (BOOL)isEquivalentTo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)objectWithSyncAnchor:(id)a0;
- (BOOL)_equateTo:(id)a0 builderBuilderBlock:(id /* block */)a1;
- (BOOL)_needsMigrationForCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToModel:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_buildForEquivalenceTo:(id)a0 builder:(id)a1;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)mutableCopy;
- (void).cxx_destruct;

@end
