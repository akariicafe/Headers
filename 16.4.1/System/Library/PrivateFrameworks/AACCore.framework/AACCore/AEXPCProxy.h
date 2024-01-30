@class NSXPCInterface, NSXPCConnection;
@protocol AEXPCConnectionOrigin;

@interface AEXPCProxy : NSObject {
    NSXPCConnection *_connection;
    id<AEXPCConnectionOrigin> _origin;
    NSXPCInterface *_interface;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
