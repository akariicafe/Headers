@class HMFStagedValue, NSUUID, NSString, HMDMediaGroupsAggregateData, NSUserDefaults;
@protocol HMDMediaGroupsStageManagerDelegate;

@interface HMDMediaGroupsStageManager : NSObject <HMFStagedValueDelegate>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) NSUserDefaults *userDefaults;
@property (readonly) HMFStagedValue *stagedAggregateData;
@property (retain) HMDMediaGroupsAggregateData *committedAggregateData;
@property (copy) HMDMediaGroupsAggregateData *lastNotifiedAggregateData;
@property (weak) id<HMDMediaGroupsStageManagerDelegate> delegate;
@property (readonly, copy) HMDMediaGroupsAggregateData *aggregateData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure;
- (void).cxx_destruct;
- (void)stagedValue:(id)a0 didExpireValue:(id)a1;
- (void)clearSavedData;
- (void)commitAggregateData:(id)a0;
- (BOOL)hasSavedIdentifier;
- (id)initWithIdentifier:(id)a0 userDefaults:(id)a1;
- (void)notifyOfUpdatedAggregateData;
- (void)refreshManager;
- (void)saveAggregateData:(id)a0;
- (void)saveAssociatedGroupDataForCurrentLegacyAppleTVAccessory:(id)a0;
- (void)saveAssociatedGroupDataForCurrentLegacyHomePodAccessory:(id)a0;
- (void)saveAssociatedGroupDataForLegacyCurrentAccessory:(id)a0;
- (void)saveDataForLegacyMediaSystem:(id)a0;
- (void)saveDestinationControllerData:(id)a0;
- (void)saveDestinations:(id)a0;
- (void)saveGroup:(id)a0;
- (void)saveIdentifier;
- (id)savedAggregateData;
- (id)transformedDestinationForLegacyMediaSystem:(id)a0 role:(unsigned long long)a1;

@end
