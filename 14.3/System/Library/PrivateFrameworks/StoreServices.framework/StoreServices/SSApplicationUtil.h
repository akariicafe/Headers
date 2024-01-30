@class SSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SSApplicationUtil : NSObject {
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)_connection;
- (void)restartApplication:(id /* block */)a0;

@end
