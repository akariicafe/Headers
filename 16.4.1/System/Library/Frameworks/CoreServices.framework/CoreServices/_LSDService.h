@class NSString, NSXPCListener, NSMapTable;

@interface _LSDService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    struct unfair_lock_mutex { unsigned int _os_unfair_lock_opaque; } _clientMapMutex;
    NSMapTable *_clientMap;
}

@property (class, readonly, getter=isEnabled) BOOL enabled;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned short)connectionType;
+ (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
+ (id)dispatchQueue;
+ (id)XPCConnectionToService;
+ (BOOL)XPCConnectionIsAlwaysPrivileged;
+ (id)XPCInterface;
+ (Class)clientClass;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id).cxx_construct;
- (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
- (void)connectionWasInvalidated:(id)a0;
- (id)clientForConnection:(id)a0;
- (id)initWithXPCListener:(id)a0;
- (void).cxx_destruct;
- (void)clientBorn:(id)a0 forNewConnection:(id)a1;

@end
