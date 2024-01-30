@class NSXPCListener, NSString, NSMapTable, NSMutableArray;

@interface ATXPCListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_xpcListener;
    NSMutableArray *_connections;
    NSMapTable *_proxyMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)run;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)connections;
- (void)dealloc;
- (id)proxyForConnection:(id)a0;
- (void)stop;
- (id)init;
- (void).cxx_destruct;

@end
