@class NSMutableDictionary;

@interface MRIDSClientConnection : MRProtocolClientConnection {
    NSMutableDictionary *_discoveryModesForFeatures;
}

- (void).cxx_destruct;
- (id)decryptData:(id)a0 error:(id *)a1;
- (void)setDiscoveryMode:(unsigned int)a0 forFeature:(unsigned int)a1;
- (unsigned int)discoveryModeForFeature:(unsigned int)a0;
- (void)clearDiscoveryModes;
- (id)encryptDataForMessage:(id)a0;
- (id)initWithInputStream:(id)a0 outputStream:(id)a1 runLoop:(id)a2;

@end
