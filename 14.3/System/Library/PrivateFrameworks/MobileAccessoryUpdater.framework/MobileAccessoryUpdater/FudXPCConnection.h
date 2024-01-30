@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface FudXPCConnection : NSObject <FudConnection> {
    NSString *clientIdentifier;
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_dispatch_queue> *connectionQueue;
    NSObject<OS_dispatch_queue> *sessionQueue;
    NSObject<OS_dispatch_queue> *replyQueue;
    id /* block */ messageHandler;
    int notifyToken;
    BOOL didStop;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createConnection;
- (void)sendMessageToFud:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)sendMessageToFud:(id)a0 reply:(id /* block */)a1;
- (BOOL)createSession;
- (BOOL)registerForBSDNotifications;
- (id)initWithClientName:(id)a0 replyHandlerQueue:(id)a1 messageHandler:(id /* block */)a2;

@end
