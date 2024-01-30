@interface SiriVirtualDeviceResolution.DeviceResolutionService : SiriVirtualDeviceResolution.SVDDeviceResolutionService <HMHomeManagerDelegatePrivate> {
    void /* unknown type, empty encoding */ homeManager;
    void /* unknown type, empty encoding */ homeManagerReadyGroup;
    void /* unknown type, empty encoding */ initialLoadDone;
    void /* unknown type, empty encoding */ endpointUUID;
    void /* unknown type, empty encoding */ waitingOnHomeManagerDataSync;
}

- (void)homeManagerDidUpdateHomes:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)homeManagerDidUpdateDataSyncInProgress:(id)a0;

@end
