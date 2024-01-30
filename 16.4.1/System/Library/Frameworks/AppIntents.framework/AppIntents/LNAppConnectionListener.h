@class LNAppContext, NSXPCListener, NSString, NSMutableSet;

@interface LNAppConnectionListener : NSObject <NSXPCListenerDelegate, LNConnectionListener>

@property (retain, nonatomic) LNAppContext *appContext;
@property (readonly, nonatomic) NSMutableSet *clientConnections;
@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedListener;

@end
