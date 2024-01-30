@class NSString, NSSet, NSDictionary, NSDate;
@protocol HKSPSyncAnchor;

@interface HKSPSleepSettings : NSObject <BSDescriptionProviding, HKSPXPCObject, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL springBoardGreetingDisabled;
@property (readonly, nonatomic) BOOL watchSleepFeaturesEnabled;
@property (readonly, nonatomic) BOOL scheduledSleepMode;
@property (readonly, nonatomic) unsigned long long sleepModeOptions;
@property (readonly, nonatomic) BOOL sleepTracking;
@property (readonly, nonatomic) BOOL timeInBedTracking;
@property (readonly, nonatomic) BOOL bedtimeReminders;
@property (readonly, nonatomic) BOOL wakeUpResults;
@property (readonly, nonatomic) BOOL chargingReminders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;

- (id)objectWithSyncAnchor:(id)a0;
- (BOOL)isEquivalentTo:(id)a0;
- (id)initFromObject:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void)_migrateForCoder:(id)a0;
- (void)_buildForEquivalenceTo:(id)a0 builder:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_equateTo:(id)a0 builderBuilderBlock:(id /* block */)a1;
- (id)succinctDescriptionBuilder;
- (void)copyFromObject:(id)a0;
- (BOOL)_needsMigrationForCoder:(id)a0;

@end
