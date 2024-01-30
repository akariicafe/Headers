@class NSMutableSet, NSArray, NSString, VGExternalAccessory, NSTimer, NSObject, NSMutableArray;
@protocol VGDataCoordinatorDelegate, OS_dispatch_queue, VGOEMApplicationFinding;

@interface VGDataCoordinator : NSObject <VGOEMApplicationFinderUpdates, VGExternalAccessoryUpdating, VGOEMAppSOCStreaming> {
    id<VGDataCoordinatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<VGOEMApplicationFinding> _applicationFinder;
    NSArray *_applications;
    VGExternalAccessory *_accessory;
    NSMutableArray *_unpairedVehicles;
    NSTimer *_vehicleStateRefreshTimer;
    NSMutableSet *_observedVehicles;
}

@property (readonly, copy, nonatomic) NSArray *unpairedVehicles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_refreshStateForTrackedVehicles;
- (id)deviceIdentifier;
- (void)OEMAppsUpdated:(id)a0;
- (void)_updateGarageWithVehicle:(id)a0 syncAcrossDevices:(BOOL)a1;
- (void)accessoryUpdatedWithVehicle:(id)a0;
- (void)_startChargeStreamForVehicle:(id)a0;
- (BOOL)shouldUnpairVehicle:(id)a0;
- (void)_updateStateOfChargeForVehicle:(id)a0 syncAcrossDevices:(BOOL)a1 completion:(id /* block */)a2;
- (void)_removeUnpairedIapVehicleIfNeeded;
- (id)_oemAppForChargeStreamForVehicle:(id)a0;
- (void)_setupTimerIfNeeded;
- (void)_loadIapVehicles;
- (void)getLatestStateOfVehicle:(id)a0 withReply:(id /* block */)a1;
- (void)endAllContinuousUpdates;
- (id)_applicationForVehicle:(id)a0;
- (double)_vehicleStateRefreshInterval;
- (void)_saveOnboardingInfoForVehicle:(id)a0;
- (void)_loadAllOEMVehiclesForApps:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_applicationRecordForVehicle:(id)a0;
- (id)initWithApplicationFinder:(id)a0 externalAccessory:(id)a1 delegate:(id)a2;
- (id)_vehicleStateProviderForVehicle:(id)a0;
- (void)_stopChargeStreamForVehicle:(id)a0;
- (void)dealloc;
- (void)startContinuousUpdatesForVehicle:(id)a0;
- (void)_invalidateRefreshTimer;
- (void)finishOnboardingVehicle:(id)a0;
- (void)unpairVehicle:(id)a0;
- (void)vehicleStateUpdated:(id)a0;
- (unsigned long long)_indexOfVehicleInUnpairedVehicles:(id)a0;

@end
