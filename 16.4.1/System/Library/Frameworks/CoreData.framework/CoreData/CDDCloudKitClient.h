@class NSXPCConnection;

@interface CDDCloudKitClient : NSObject {
    BOOL _interrupted;
    BOOL _invalidated;
    NSXPCConnection *_connection;
}

- (id)initWithMachServiceName:(id)a0;
- (void)handleMessage:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (BOOL)_valid;

@end
