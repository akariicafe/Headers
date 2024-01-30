@class MRAVEndpoint, MRExternalDevice, MRAVRoutingDiscoverySessionConfiguration;

@interface MRAVExternalRoutingDiscoverySession : MRAVRoutingDiscoverySession {
    unsigned int _discoveryMode;
    MRAVRoutingDiscoverySessionConfiguration *_configuration;
    id _externalDeviceDiscoveryToken;
}

@property (retain, nonatomic) MRAVEndpoint *destination;
@property (retain, nonatomic) MRExternalDevice *externalDevice;

- (BOOL)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (id)availableEndpoints;
- (unsigned int)endpointFeatures;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)availableOutputDevices;
- (id)destinationOutputDeviceUID;
- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
