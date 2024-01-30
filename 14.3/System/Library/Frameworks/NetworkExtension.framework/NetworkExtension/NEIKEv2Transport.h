@class NWAddressEndpoint, NSString, NWInterface, NSObject, NSMutableArray;
@protocol NEIKEv2PacketDelegate, OS_nw_connection, OS_dispatch_queue;

@interface NEIKEv2Transport : NSObject <NEIKEv2PacketReceiver>

@property (weak) id<NEIKEv2PacketDelegate> packetDelegate;
@property unsigned long long transportType;
@property (retain) NSObject<OS_nw_connection> *connection;
@property (retain) NWAddressEndpoint *local;
@property (retain) NWAddressEndpoint *remote;
@property (retain) NWInterface *interface;
@property (readonly) unsigned short port;
@property (retain, nonatomic) NSMutableArray *connectedBlocks;
@property BOOL connected;
@property BOOL cancelled;
@property (retain) NSObject<OS_dispatch_queue> *receiveQueue;
@property (retain) NSMutableArray *clients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForTransport:(unsigned long long)a0;
+ (BOOL)checkAddress:(id)a0 interface:(id)a1;
+ (id)copyExistingTransport:(unsigned long long)a0 remote:(id)a1 local:(id)a2 localPort:(unsigned short)a3 boundInterface:(id)a4 packetDelegate:(id)a5;
+ (id)createTransport:(unsigned long long)a0 remote:(id)a1 local:(id)a2 localPort:(unsigned short)a3 boundInterface:(id)a4 queue:(id)a5 socketGetBlock:(id /* block */)a6 packetDelegate:(id)a7;
+ (id)createTransportWithConnection:(id)a0 queue:(id)a1;

- (void)readOnConnection;
- (void)callConnectedBlocks;
- (BOOL)setupUDPConnectionToRemote:(id)a0 local:(id)a1 localPort:(unsigned short)a2 socketGetBlock:(id /* block */)a3;
- (void)receivePacketData:(id)a0;
- (BOOL)sendPacket:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)waitForTransport:(id /* block */)a0;
- (void)addClient:(id)a0 wildcard:(BOOL)a1 delegate:(id)a2;
- (void)cancelClient:(id)a0 shouldInvalidate:(BOOL)a1;
- (void)disableWildcardForClient:(id)a0;
- (BOOL)sendData:(id)a0 sendCompletionHandler:(id /* block */)a1;

@end
