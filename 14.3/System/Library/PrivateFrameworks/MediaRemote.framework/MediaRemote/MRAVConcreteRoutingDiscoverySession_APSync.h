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

- (void)_availableEndpointsDidChangeNotification:(id)a0;
- (void)_onQueue_reloadAvailableEndpoints;
- (void).cxx_destruct;
- (void)dealloc;
- (id)availableEndpoints;
- (void)_externalDeviceConnectionStateDidChange:(id)a0;
- (void)_logAVODGroupsChangedFrom:(id)a0 toNewGroups:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (id)deduplicateAVODGroups:(id)a0;
- (BOOL)inferAvailableOutputDevices;
- (void)_onQueue_reloadAvailableOutputDevices;
- (void)_virtualDevicesDidChangeNotification:(id)a0;
- (void)clusterController:(id)a0 clusterStatusDidChange:(unsigned long long)a1;
- (void)setAvailableOutputDeviceGroups:(id)a0;
- (void)_onQueue_reload;
- (id)initWithConfiguration:(id)a0 clusterController:(id)a1;
- (void)_scheduleAvailableEndpointsReload;
- (void)_onQueue_populateExternalDevice:(id)a0;
- (void)setAvailableEndpoints:(id)a0;
- (void)_scheduleReload;

@end
