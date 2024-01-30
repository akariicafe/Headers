@class NWPath, NWParameters, NSError, NWConcrete_nw_connection, NWEndpoint;

@interface NWConnection : NSObject

@property long long internalConnectionState;
@property BOOL internalIsViable;
@property BOOL internalHasBetterPath;
@property (retain) NSError *internalError;
@property (retain) NWPath *internalPath;
@property (readonly, nonatomic) unsigned int tlsConnectionTime;
@property (retain, nonatomic) NWConcrete_nw_connection *internalConnection;
@property (readonly, nonatomic) NWPath *currentPath;
@property (readonly, nonatomic) NWEndpoint *endpoint;
@property (readonly, nonatomic) NWParameters *parameters;
@property (readonly, nonatomic) long long connectionState;
@property (readonly, nonatomic) NWEndpoint *connectedLocalEndpoint;
@property (readonly, nonatomic) NWEndpoint *connectedRemoteEndpoint;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isViable) BOOL viable;
@property (readonly, nonatomic) BOOL hasBetterPath;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)connectionWithEndpoint:(id)a0 parameters:(id)a1;
+ (id)connectionWithConnectedSocket:(int)a0;
+ (id)connectionWithInternalConnection:(id)a0;

- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1;
- (void)start;
- (void)forceCancel;
- (id)initWithInternalConnection:(id)a0;
- (id)initWithConnectedSocket:(int)a0;
- (int)getConnectedSocket;
- (void)cancelCurrentEndpoint;
- (id)copyCurrentPath;
- (id)copyError;

@end
