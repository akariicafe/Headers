@class NSMapTable;

@interface CBClassicManager : CBManager

@property (readonly, retain, nonatomic) NSMapTable *peers;
@property (readonly, nonatomic) BOOL isInquiryRunning;
@property (readonly) BOOL inquiryState;
@property (readonly) BOOL discoverable;
@property (readonly) BOOL connectable;
@property (readonly) long long powerState;
@property (nonatomic) BOOL testMode;
@property (copy) id /* block */ classicPeerDiscovered;
@property (copy) id /* block */ sdpRecordAddedHandler;
@property (copy) id /* block */ pairingStatusHandler;
@property (copy) id /* block */ connectionStatusHandler;
@property (copy) id /* block */ connectCallback;
@property (copy) id /* block */ disconnectCallback;
@property (copy) id /* block */ serviceAddedHandler;
@property (copy) id /* block */ inquiryServiceAddedHandler;

- (id)peerWithInfo:(id)a0;
- (void)handleLocalDeviceStateUpdatedMsg:(id)a0;
- (BOOL)isMsgAllowedWhenOff:(unsigned short)a0;
- (void)removeAACPClient:(unsigned short)a0;
- (void)setBTConnectable:(BOOL)a0;
- (void)cancelPeerConnection:(id)a0 force:(BOOL)a1;
- (void)orphanClassicPeers;
- (void)handlePeerConnectionStateUpdated:(id)a0;
- (void)addService:(id)a0 sdpRecord:(id)a1 sdpRecordAddedHandler:(id /* block */)a2;
- (void)connectPeer:(id)a0 options:(id)a1;
- (void).cxx_destruct;
- (void)removeAllServicesFromInquiryList;
- (void)dealloc;
- (void)addService:(id)a0;
- (void)removeService:(id)a0;
- (void)addAACPClient:(unsigned short)a0 aacpClientAdded:(id /* block */)a1;
- (id)initWithQueue:(id)a0 options:(id)a1;
- (BOOL)setBTPowerState:(BOOL)a0;
- (void)stopInquiry;
- (void)handleSDPRecordAdded:(id)a0;
- (void)forEachClassicPeer:(id /* block */)a0;
- (void)startInquiryWithOptions:(id)a0 classicPeerDiscovered:(id /* block */)a1;
- (void)handlePeerDiscovered:(id)a0;
- (void)handleServiceAddedToSDP:(id)a0;
- (id)retrievePairedPeersWithOptions:(id)a0;
- (id)retrievePeerWithAddress:(id)a0;
- (void)addServiceToInquiryList:(id)a0;
- (void)removeAllServices;
- (void)removeServiceFromInquiryList:(id)a0;
- (id)peerWithIdentifier:(id)a0;
- (void)handleMsg:(unsigned short)a0 args:(id)a1;
- (id)classicPeerWithInfo:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setBTDiscoverable:(BOOL)a0;
- (void)cancelPeerConnection:(id)a0 options:(id)a1;
- (void)handleServiceAddedToInquiryList:(id)a0;
- (void)handlePeerDisconnectionCompleted:(id)a0;
- (BOOL)isMsgAllowedAlways:(unsigned short)a0;
- (void)handlePeerConnectionCompleted:(id)a0;
- (BOOL)secureBluetooth:(BOOL)a0 withAuthData:(id)a1;
- (void)cancelPeerConnection:(id)a0;

@end
