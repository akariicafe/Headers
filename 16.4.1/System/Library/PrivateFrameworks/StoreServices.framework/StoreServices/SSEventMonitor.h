@class SSXPCConnection, NSObject;
@protocol SSEventMonitorDelegate, OS_dispatch_queue;

@interface SSEventMonitor : NSObject {
    id<SSEventMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_eventConnection;
}

@property id<SSEventMonitorDelegate> delegate;

- (void)_handleMessage:(id)a0 fromServerConnection:(id)a1;
- (void)_connectEventConnection;
- (void)dealloc;
- (id)init;

@end
