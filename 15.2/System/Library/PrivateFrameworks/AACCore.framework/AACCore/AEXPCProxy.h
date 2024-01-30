@class NSXPCInterface, NSXPCConnection;
@protocol AEXPCConnectionOrigin;

@interface AEXPCProxy : NSObject {
    NSXPCConnection *_connection;
    id<AEXPCConnectionOrigin> _origin;
    NSXPCInterface *_interface;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
