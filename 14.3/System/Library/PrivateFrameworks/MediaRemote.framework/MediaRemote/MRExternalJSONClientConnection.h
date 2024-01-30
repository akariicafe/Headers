@class NSDictionary;

@interface MRExternalJSONClientConnection : MRExternalClientConnection {
    NSDictionary *_artwork;
    NSDictionary *_deviceInfo;
    NSDictionary *_volume;
    NSDictionary *_playerPath;
    NSDictionary *_playbackQueue;
    NSDictionary *_supportedCommands;
}

- (void).cxx_destruct;
- (id)messageQueue:(id)a0 dataForMessage:(id)a1;
- (id)initWithInputStream:(id)a0 outputStream:(id)a1 runLoop:(id)a2;
- (id)_encodeDeviceInfo:(id)a0;
- (id)_encodeVolumeDidChange:(id)a0;
- (id)_processDeviceInfo:(id)a0;
- (id)_processSetState:(id)a0;
- (id)_createProtocolMessage:(Class)a0 underlyingCodableMessage:(id)a1;
- (id)_protocolMessageFromData:(id)a0;

@end
