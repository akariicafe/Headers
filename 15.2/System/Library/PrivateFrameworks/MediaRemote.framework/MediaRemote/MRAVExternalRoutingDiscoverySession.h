@class NSString, MRExternalDevice, MRAVRoutingDiscoverySessionConfiguration, MRAVEndpoint;

@interface MRAVExternalRoutingDiscoverySession : MRAVRoutingDiscoverySession <MREndpointObserver> {
    unsigned int _discoveryMode;
    MRAVRoutingDiscoverySessionConfiguration *_configuration;
}

@property (retain, nonatomic) MRAVEndpoint *destination;
@property (retain, nonatomic) MRExternalDevice *externalDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)devicePresenceDetected;
- (unsigned int)endpointFeatures;
- (id)availableOutputDevices;
- (unsigned int)discoveryMode;
- (void)endpointDidDisconnect:(id)a0;
- (id)availableEndpoints;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
