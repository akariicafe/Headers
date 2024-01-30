@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol WebBookmarksXPCConnectionDelegate, OS_xpc_object;

@interface WebBookmarksXPCListener : NSObject <WebBookmarksXPCConnectionDelegate> {
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableArray *_clientConnections;
    NSMutableDictionary *_messageHandlers;
}

@property (nonatomic) id<WebBookmarksXPCConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initListenerForMachService:(const char *)a0;
- (void)setMessageHandlers:(id)a0;
- (void)_handleIncomingConnection:(id)a0;
- (void)setHandler:(id /* block */)a0 forMessageNamed:(const char *)a1;
- (void).cxx_destruct;
- (void)connection:(id)a0 didCloseWithError:(id)a1;

@end
