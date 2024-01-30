@class NSMapTable, EMRemoteConnection, NSXPCInterface;

@interface EMActivityRegistry : NSObject {
    NSMapTable *_observerWrappersByObserver;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSXPCInterface *remoteInterface;
@property (class, readonly) NSXPCInterface *observerInterface;

@property (retain) EMRemoteConnection *connection;

- (id)initWithRemoteConnection:(id)a0;
- (void).cxx_destruct;
- (id)registerActivityObserver:(id)a0;

@end
