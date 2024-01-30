@class NSString, NSXPCListener, SNSystemServiceResourceCoordinator;

@interface SNAnalysisServer : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    SNSystemServiceResourceCoordinator *_coordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
