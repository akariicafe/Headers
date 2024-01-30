@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession

+ (id)pairingManager;
+ (BOOL)systemPairingAvailable;

- (id)addPeer;
- (id)pairedPeerDevices;
- (id)mediaRemotePairedDevices;
- (id)initializePairingSession:(struct PairingSessionPrivate { } *)a0;
- (BOOL)shouldAutoRetryPairingExchange:(id)a0;
- (id)pairedPeerDevice;
- (id)removePeer;
- (id)updatePeer;

@end
