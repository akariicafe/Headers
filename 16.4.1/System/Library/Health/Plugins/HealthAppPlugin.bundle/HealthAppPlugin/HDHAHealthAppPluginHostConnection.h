@class NSXPCConnection;

@interface HDHAHealthAppPluginHostConnection : NSObject {
    NSXPCConnection *_connection;
    BOOL _resumed;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)proxy;
- (void)dealloc;
- (void)resumeIfNecessary;
- (id)init;
- (id)synchronousProxy;
- (void).cxx_destruct;

@end
