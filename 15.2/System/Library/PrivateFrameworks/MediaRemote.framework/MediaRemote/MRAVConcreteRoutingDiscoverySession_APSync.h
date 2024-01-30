@class NSArray, NSMutableDictionary, NSString, MRAVClusterController;

@interface MRAVConcreteRoutingDiscoverySession_APSync : MRAVConcreteRoutingDiscoverySession <MRAVClusterObserver> {
    NSArray *_availableEndpoints;
    id _virtualOutputDeviceNotificationToken;
    MRAVClusterController *_clusterController;
    BOOL _scheduledAvailableEndpointsReload;
}

@property (class, copy, nonatomic) id /* block */ externalDeviceForOutputDeviceUID;
@property (class, readonly, nonatomic) NSMutableDictionary *externalDeviceCache;

@property (readonly, nonatomic) NSArray *availableOutputDeviceGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_virtualDevicesDidChangeNotification:(id)a0;
- (void)_availableEndpointsDidChangeNotification:(id)a0;
- (void)_scheduleReload;
- (id)availableEndpoints;
- (void)_onQueue_populateExternalDevice:(id)a0;
- (void)_onQueue_reloadAvailableEndpoints;
- (void)setAvailableEndpoints:(id)a0;
- (id)deduplicateAVODGroups:(id)a0;
- (void)_onQueue_reload;
- (BOOL)inferAvailableOutputDevices;
- (id)initWithConfiguration:(id)a0;
- (void)_externalDeviceConnectionStateDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_logAVODGroupsChangedFrom:(id)a0 toNewGroups:(id)a1;
- (void)_scheduleAvailableEndpointsReload;
- (void)setAvailableOutputDeviceGroups:(id)a0;
- (void)_onQueue_reloadAvailableOutputDevices;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0 clusterController:(id)a1;
- (void)clusterController:(id)a0 clusterStatusDidChange:(unsigned long long)a1;

@end
