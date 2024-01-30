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

- (id)watcherEndpoint;
- (BOOL)ensureConnectionWithError:(id *)a0;
- (id)endpoint;
- (void)dealloc;
- (id)withError:(id *)a0 invoke:(id /* block */)a1;
- (id)SEPKeyEndpoint;
- (id)initWithTokenID:(id)a0 serverEndpoint:(id)a1 targetUID:(id)a2;
- (id)configurationEndpoint;
- (void).cxx_destruct;

@end
