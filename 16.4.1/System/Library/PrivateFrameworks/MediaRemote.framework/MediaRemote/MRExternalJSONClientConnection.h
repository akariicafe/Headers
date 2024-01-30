@class NSDictionary;

@interface MRExternalJSONClientConnection : MRExternalClientConnection {
    NSDictionary *_artwork;
    NSDictionary *_deviceInfo;
    NSDictionary *_volume;
    NSDictionary *_playerPath;
    NSDictionary *_playbackQueue;
    NSDictionary *_supportedCommands;
}

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)dataForMessage:(id)a0;
- (id)_createProtocolMessage:(Class)a0 underlyingCodableMessage:(id)a1;
- (id)_encodeDeviceInfo:(id)a0;
- (id)_encodeVolumeDidChange:(id)a0;
- (id)_processDeviceInfo:(id)a0;
- (id)_processSetState:(id)a0;
- (id)_protocolMessageFromData:(id)a0;

@end
