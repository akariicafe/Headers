@class MCNearbyDiscoveryPeerConnection, NSNetService, NSMutableArray, MCPeerID;

@interface MCNearbyDiscoveryPeer : NSObject

@property (retain, nonatomic) NSMutableArray *sendDataBuffer;
@property (retain, nonatomic) MCNearbyDiscoveryPeerConnection *connection;
@property (copy, nonatomic) MCPeerID *peerID;
@property (nonatomic) int state;
@property (retain, nonatomic) NSNetService *netService;
@property (retain, nonatomic) MCNearbyDiscoveryPeerConnection *trialConnection;

- (void)closeConnection;
- (id)stringForState:(int)a0;
- (id)description;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)sendData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)attachConnection:(id)a0;
- (void)flushDataBuffer;
- (id)initWithPeerID:(id)a0;

@end
