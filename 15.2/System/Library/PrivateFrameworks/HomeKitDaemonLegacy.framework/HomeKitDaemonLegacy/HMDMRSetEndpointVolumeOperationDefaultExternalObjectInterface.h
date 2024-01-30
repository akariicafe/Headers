@interface HMDMRSetEndpointVolumeOperationDefaultExternalObjectInterface : HMFObject <HMDMRSetEndpointVolumeOperationExternalObjectInterface>

- (id)createAssistantDiscovery;
- (id)createAssistantConnection;
- (id)copyMRAVEndpointOutputDevices:(id)a0;
- (id)setMRAVOutputDeviceVolume:(float)a0 endpoint:(id)a1 outputDeviceUID:(id)a2 queue:(id)a3;
- (id)getMRAVEndpointOutputDeviceUIDVolumeControlCapabilitiesForEndpoint:(id)a0 outputDeviceUID:(id)a1 queue:(id)a2;

@end
