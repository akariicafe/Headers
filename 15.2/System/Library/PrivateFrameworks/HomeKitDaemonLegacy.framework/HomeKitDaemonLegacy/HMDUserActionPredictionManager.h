@class HMDUserActionPredictionContainer, HMBLocalZone, HMDDatabaseZoneManager, NSUUID, NSString, NSObject;
@protocol OS_dispatch_queue, HMDUserActionPredictionDataReceiver, HMFLocking;

@interface HMDUserActionPredictionManager : HMFObject <HMBLocalZoneModelObserver, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMDUserActionPredictionDataSource> {
    id<HMFLocking> _lock;
}

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) id<HMDUserActionPredictionDataReceiver> dataReceiver;
@property (readonly) HMDUserActionPredictionContainer *predictionContainer;
@property (retain) HMBLocalZone *localZone;
@property (readonly) HMDDatabaseZoneManager *zoneManager;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isDataAvailableForUserActionPredictionDataSource) BOOL dataAvailableForUserActionPredictionDataSource;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)localZone:(id)a0 didProcessModelDeletion:(id)a1;
- (id)localZone:(id)a0 didProcessModelCreation:(id)a1;
- (id)localZone:(id)a0 didProcessModelUpdate:(id)a1;
- (id)fetchPredictionsWithLimitForUserActionPredictionDataSource:(unsigned long long)a0;
- (id)addOrUpdateUserActionPredictions:(id)a0;
- (id)addOrUpdateUserActionPredictionsAndRemoveNonUpdatedPredictions:(id)a0;
- (id)removeUserActionPredictions:(id)a0;
- (void)zoneManagerDidStart:(id)a0;
- (void)zoneManagerDidStop:(id)a0;
- (BOOL)manager:(id)a0 shouldShareWithUser:(id)a1;
- (id)initWithUUID:(id)a0 zoneManager:(id)a1 dataReceiver:(id)a2 workQueue:(id)a3;
- (void)configureWithHome:(id)a0 notificationCenter:(id)a1;
- (void)handleAccessoryRemovedNotification:(id)a0;
- (void)handleActionSetEmptiedNotification:(id)a0;
- (void)handleServiceRemovedNotification:(id)a0;
- (void)handleServiceGroupRemovedNotification:(id)a0;
- (void)handleServiceGroupUpdatedNotification:(id)a0;
- (void)handleMediaSystemAddedNotification:(id)a0;
- (void)handleMediaSystemRemovedNotification:(id)a0;
- (void)encodePredictionsWithCoder:(id)a0;
- (void)removeZones;
- (void)_handleCreatedOrUpdatedModel:(id)a0;
- (void)_handleDeletedModel:(id)a0;
- (id)_addOrUpdateUserActionPredictions:(id)a0;
- (id)_addOrUpdateUserActionPredictionsAndRemoveNonUpdatedPredictions:(id)a0;
- (id)_removeUserActionPredictions:(id)a0;
- (void)_removePredictionsWithPredictionTargetUUID:(id)a0;
- (void)_removePredictionsWithTargetServiceUUID:(id)a0;
- (void)_updatePredictionsWithServiceGroup:(id)a0;
- (void)_removeServiceGroupFromPredictions:(id)a0;
- (void)_updatePredictionsWithMediaSystem:(id)a0;
- (void)_removeMediaSystemFromPredictions:(id)a0;
- (id)_removeZones;

@end
