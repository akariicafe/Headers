@class NSString, NSXPCListener, SNSystemServiceResourceCoordinator;

@interface SNAnalysisServer : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    SNSystemServiceResourceCoordinator *_coordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)launchAsMachServiceWithName:(id)a0;
+ (id)launchWithResourceCoordinator:(id)a0 onXPCListener:(id)a1;
+ (id)launchDefaultServer;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (id)initWithResourceCoordinator:(id)a0 onListener:(id)a1;
- (id)connectLocally;

@end
