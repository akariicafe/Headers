@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSNumber;

@interface TKClientToken : NSObject {
    NSXPCListenerEndpoint *_serverEndpoint;
    NSXPCConnection *_serverConnection;
    BOOL _namedConnection;
    NSNumber *_targetUID;
    long long _connectionIdentifier;
}

@property (readonly, nonatomic) NSXPCConnection *serverConnection;
@property (readonly, nonatomic) NSXPCConnection *tokenConnection;
@property (readonly, nonatomic) NSString *tokenID;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) NSXPCListenerEndpoint *configurationEndpoint;
@property (readonly, nonatomic) NSXPCListenerEndpoint *watcherEndpoint;

- (id)withError:(id *)a0 invoke:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)ensureConnectionWithError:(id *)a0;
- (void)dealloc;
- (id)initWithTokenID:(id)a0;
- (id)initWithTokenID:(id)a0 serverEndpoint:(id)a1 targetUID:(id)a2;
- (id)sessionWithLAContext:(id)a0 error:(id *)a1;

@end
