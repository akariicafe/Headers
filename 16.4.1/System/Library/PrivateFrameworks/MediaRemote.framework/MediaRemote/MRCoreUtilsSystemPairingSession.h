@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession

+ (id)pairingManager;
+ (BOOL)systemPairingAvailable;

- (BOOL)shouldAutoRetryPairingExchange:(id)a0;
- (id)addPeer;
- (id)initializePairingSession:(struct PairingSessionPrivate { } *)a0;
- (id)mediaRemotePairedDevices;
- (id)pairedPeerDevice;
- (id)pairedPeerDevices;
- (id)removePeer;
- (id)updatePeer;

@end
