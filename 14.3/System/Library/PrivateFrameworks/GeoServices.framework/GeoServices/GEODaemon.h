@class NSObject, NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_source, OS_xpc_object;

@interface GEODaemon : NSObject {
    NSMutableDictionary *_servers;
    NSObject<OS_dispatch_source> *_sigInfoSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_xpc_object> *_listener;
}

@property (readonly, nonatomic) NSMutableSet *peers;

- (id)initWithPort:(const char *)a0;
- (void)startServerClassIfNecessary:(Class)a0;
- (void)addServerClass:(Class)a0;
- (void)_localeChanged:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)peerDidConnect:(id)a0;
- (id)_createListenerWithQueue:(id)a0 onPort:(const char *)a1;
- (void)dealloc;
- (void)_handleNewConnection:(id)a0;
- (void)handleIncomingMessage:(id)a0 fromPeer:(id)a1;
- (id)_createPeerForConnection:(id)a0;
- (id)description;
- (void)addServerInstance:(id)a0;
- (void)start;
- (void)peerDidDisconnect:(id)a0;

@end
