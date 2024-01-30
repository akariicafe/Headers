@class NSXPCConnection;

@interface AEForwardingXPCConnectionOrigin : NSObject <AEXPCConnectionOrigin> {
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)makeConnection;

@end
