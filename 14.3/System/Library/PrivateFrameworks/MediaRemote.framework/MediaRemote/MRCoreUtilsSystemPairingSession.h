@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession

+ (id)pairingManager;
+ (BOOL)systemPairingAvailable;

- (id)addPeer;
- (id)removePeer;
- (id)updatePeer;
- (id)pairedPeerDevices;
- (id)mediaRemotePairedDevices;
- (id)initializePairingSession:(struct PairingSessionPrivate { } *)a0;
- (BOOL)shouldAutoRetryPairingExchange:(id)a0;
- (id)pairedPeerDevice;

@end
