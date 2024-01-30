@class NSXPCConnection;

@interface CDDCloudKitClient : NSObject {
    BOOL _interrupted;
    BOOL _invalidated;
    NSXPCConnection *_connection;
}

- (BOOL)_valid;
- (id)initWithMachServiceName:(id)a0;
- (void)dealloc;
- (void)handleMessage:(id)a0 reply:(id /* block */)a1;

@end
