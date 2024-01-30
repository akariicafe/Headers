@class NSXPCListenerEndpoint, NSNumber, NSXPCConnection;

@interface TKExtensionClientToken : TKClientToken {
    NSXPCListenerEndpoint *_serverEndpoint;
    NSXPCConnection *_serverConnection;
    BOOL _namedConnection;
    NSNumber *_targetUID;
    long long _connectionIdentifier;
}

@property (readonly, nonatomic) NSXPCConnection *serverConnection;
@property (readonly, nonatomic) NSXPCConnection *tokenConnection;

+ (id)builtinTokenIDs;

- (id)withError:(id *)a0 invoke:(id /* block */)a1;
- (id)watcherEndpoint;
- (BOOL)ensureConnectionWithError:(id *)a0;
- (id)initWithTokenID:(id)a0 serverEndpoint:(id)a1 targetUID:(id)a2;
- (id)configurationEndpoint;
- (id)endpoint;
- (void).cxx_destruct;
- (void)dealloc;
- (id)SEPKeyEndpoint;

@end
