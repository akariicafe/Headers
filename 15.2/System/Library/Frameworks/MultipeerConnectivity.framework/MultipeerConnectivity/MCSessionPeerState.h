@class MCPeerID, NSData, NSMutableDictionary;

@interface MCSessionPeerState : NSObject

@property (readonly, copy, nonatomic) MCPeerID *peerID;
@property (nonatomic) long long state;
@property (nonatomic) BOOL connectPeerCalled;
@property (copy, nonatomic) NSData *nearbyConnectionData;
@property (retain, nonatomic) NSMutableDictionary *outgoingStreamRequests;
@property (retain, nonatomic) NSMutableDictionary *outgoingStreams;
@property (retain, nonatomic) NSMutableDictionary *incomingStreams;
@property (readonly, nonatomic) unsigned int newStreamOpenRequestID;
@property (readonly, nonatomic) unsigned int newStreamID;
@property (nonatomic) long long certificateDecision;

- (id)description;
- (void)dealloc;
- (id)initWithPeer:(id)a0;

@end
