@class SSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SSApplicationUtil : NSObject {
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)init;
- (id)_connection;
- (void).cxx_destruct;
- (void)restartApplication:(id /* block */)a0;

@end
