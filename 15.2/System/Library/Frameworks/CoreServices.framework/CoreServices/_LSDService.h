@class NSString, NSXPCListener;

@interface _LSDService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (class, readonly, getter=isEnabled) BOOL enabled;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
+ (id)XPCConnectionToService;
+ (id)XPCInterface;
+ (BOOL)XPCConnectionIsAlwaysPrivileged;
+ (unsigned short)connectionType;
+ (Class)clientClass;
+ (id)dispatchQueue;

- (id)initWithXPCListener:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
