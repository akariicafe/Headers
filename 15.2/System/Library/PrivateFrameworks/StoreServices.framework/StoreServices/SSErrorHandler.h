@class NSArray, SSXPCConnection, NSObject;
@protocol SSErrorHandlerDelegate, OS_dispatch_queue;

@interface SSErrorHandler : NSObject {
    SSXPCConnection *_controlConnection;
    id<SSErrorHandlerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_failureTypes;
    SSXPCConnection *_observerConnection;
}

@property id<SSErrorHandlerDelegate> delegate;
@property (copy) NSArray *failureTypes;

- (void)_handleMessage:(id)a0 fromServerConnection:(id)a1;
- (void)_tearDownConnections;
- (void)_reconnectToDaemonWithCompletionBlock:(id /* block */)a0;
- (void)_openSessionWithMessage:(id)a0;
- (void)_dispatchToDelegate:(id /* block */)a0;
- (void)stopWithCompletionBlock:(id /* block */)a0;
- (id)init;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)_sendDisconnectMessage;
- (void)dealloc;

@end
