@class NSXPCConnection;
@protocol RDXPCProtocol;

@interface RDCommClient : NSObject <RDXPCProtocol> {
    NSXPCConnection *connection;
    id<RDXPCProtocol> server;
}

- (void)ping;
- (void)clearDataCache;
- (void)updatePeer:(id)a0 withCountryCode:(id)a1 priority:(int)a2 andTimestamp:(id)a3;
- (void)shareStatusWithPeers;
- (void)updatePeer:(id)a0 withEstimate:(id)a1;
- (id)init;
- (void)createCacheDirAtPath:(id)a0;
- (void)clearStatusSharedWithPeers;
- (void).cxx_destruct;
- (void)update:(long long)a0 withCountryCode:(id)a1;

@end
