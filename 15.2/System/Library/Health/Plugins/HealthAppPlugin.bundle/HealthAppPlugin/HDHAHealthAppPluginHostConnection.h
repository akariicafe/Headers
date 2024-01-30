@class NSXPCConnection;

@interface HDHAHealthAppPluginHostConnection : NSObject {
    NSXPCConnection *_connection;
    BOOL _resumed;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)proxy;
- (void).cxx_destruct;
- (id)init;
- (void)resumeIfNecessary;
- (void)dealloc;
- (id)synchronousProxy;

@end
