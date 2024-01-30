@class NSMutableDictionary, NSObject;
@protocol OS_xpc_object, WebBookmarksXPCConnectionDelegate, OS_dispatch_queue;

@interface WebBookmarksXPCConnection : NSObject {
    NSMutableDictionary *_messageHandlers;
    NSMutableDictionary *_entitlementLookupCache;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (weak, nonatomic) id<WebBookmarksXPCConnectionDelegate> delegate;

- (void)setMessageHandlers:(id)a0;
- (void)sendMessage:(id)a0;
- (void)setHandler:(id /* block */)a0 forMessageNamed:(const char *)a1;
- (BOOL)hasBoolEntitlement:(id)a0;
- (id)initWithConnection:(id)a0;
- (void)_handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)initClientForMachService:(const char *)a0;
- (id)messageWithName:(const char *)a0;
- (void)sendMessage:(id)a0 withReplyHandler:(id /* block */)a1;

@end
