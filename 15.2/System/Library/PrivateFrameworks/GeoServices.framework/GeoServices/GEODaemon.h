@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_xpc_object;

@interface GEODaemon : NSObject {
    NSMutableDictionary *_servers;
    NSMutableArray *_serversToStart;
    NSObject<OS_dispatch_source> *_sigInfoSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_dispatch_source> *_sigUsr1Src;
    NSObject<OS_xpc_object> *_listener;
}

@property (class, copy, nonatomic) id /* block */ createXPCListenerBlock;

@property (readonly, nonatomic) NSMutableSet *peers;

- (void)_shutdown:(BOOL)a0;
- (void)_localeChanged:(id)a0;
- (id)_createListenerWithQueue:(id)a0 onPort:(const char *)a1;
- (id)_createPeerForConnection:(id)a0;
- (void)addServerClass:(Class)a0;
- (id)description;
- (void)start;
- (void)peerDidConnect:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)startServerClassIfNecessary:(Class)a0;
- (void)shutdown:(BOOL)a0;
- (void)dealloc;
- (void)handleIncomingMessage:(id)a0 fromPeer:(id)a1;
- (void)peerDidDisconnect:(id)a0;
- (id)initWithPort:(const char *)a0;
- (void)_handleNewConnection:(id)a0;

@end
