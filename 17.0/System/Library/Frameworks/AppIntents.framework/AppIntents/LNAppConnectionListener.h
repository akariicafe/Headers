@class LNAppContext, NSXPCListener, NSXPCListenerEndpoint, NSMutableSet, NSString;

@interface LNAppConnectionListener : NSObject <NSXPCListenerDelegate, LNConnectionListener>

@property (retain, nonatomic) LNAppContext *appContext;
@property (readonly, nonatomic) NSMutableSet *clientConnections;
@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedListener;

@end
