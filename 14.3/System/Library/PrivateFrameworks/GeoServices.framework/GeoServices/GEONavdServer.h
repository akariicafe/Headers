@class NSString, NSXPCListener, GEONavigationServer;

@interface GEONavdServer : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_pushNavigationStateListener;
    NSXPCListener *_getNavigationStateListener;
    NSXPCListener *_monitorDestinationListener;
    GEONavigationServer *_navigationServer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
