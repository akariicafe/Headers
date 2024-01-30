@class NSError, NSString, PXObservable, PXUpdater, NSMutableArray, NSObject, SKCloudServiceController, NSNumber;
@protocol OS_dispatch_queue;

@interface _PXDefaultCloudCapabilitiesProvider : PXObservable <PXCloudCapabilitiesProvider, PXSettingsKeyObserver, PXChangeObserver>

@property (retain, nonatomic) NSNumber *stateQueue_cloudServiceCapability;
@property (retain, nonatomic) NSError *stateQueue_error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) SKCloudServiceController *workQueue_storeKitController;
@property (readonly, nonatomic) PXUpdater *mainQueue_updater;
@property (readonly, nonatomic) NSMutableArray *stateQueue_loadHandlers;
@property (readonly, nonatomic) PXObservable *observable;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (long long)statusForCapability:(id)a0;
- (void)requestStatusForCapability:(id)a0 handler:(id /* block */)a1;
- (void)startGatheringCapabilityStatuses;
- (void)_invalidateCloudServiceCapabilities;
- (void)_updateCloudServiceCapabilities;
- (void)_workQueue_updateCloudServiceCapabilities;
- (void)_workQueue_startGatheringCapabilityStatusesIfNeeded;
- (void)_handleCloudServiceCapabilityResult:(unsigned long long)a0 error:(id)a1;
- (long long)_stateQueue_statusForCapability:(id)a0;
- (void)_stateQueue_setCloudServiceCapability:(unsigned long long)a0 error:(id)a1;
- (void)_handleSKCloudServiceCapabilitiesDidChangeNotification:(id)a0;

@end
