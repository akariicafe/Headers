@class NSString, NSObject;
@protocol OS_nw_connection, OS_nw_endpoint;

@interface NWLinkConnection : NSObject

@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long connectionID;
@property (readonly, nonatomic) unsigned int interfaceIndex;
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *localEndpoint;
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *remoteEndpoint;
@property (nonatomic) BOOL supportsNAT64;
@property (nonatomic) BOOL peelOffNewConnection;
@property (nonatomic) unsigned long long disconnectionState;
@property (nonatomic) BOOL ignoreCancel;
@property (nonatomic) double scheduledDisconnectTime;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long transactionID;
@property (nonatomic) unsigned int messageType;
@property (nonatomic) BOOL isConnected;

- (void).cxx_destruct;
- (id)initWithBaseNWLinkConnection:(id)a0 type:(unsigned long long)a1;
- (id)initWithType:(unsigned long long)a0 interfaceIndex:(unsigned int)a1 localEndpoint:(id)a2 remoteEndpoint:(id)a3;
- (BOOL)isQRControlConnection;

@end
