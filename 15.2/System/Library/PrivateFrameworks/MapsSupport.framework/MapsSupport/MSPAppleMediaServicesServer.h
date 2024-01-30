@class NSXPCListener, NSMutableSet, NSString;

@interface MSPAppleMediaServicesServer : NSObject <NSXPCListenerDelegate, GEOAppleMediaServicesProtocol>

@property (retain, nonatomic) NSMutableSet *connections;
@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)cleanConnections;
- (void).cxx_destruct;
- (id)init;
- (id)externalRequestCounterRequestType;
- (long long)AMSMediaTaskTypeFromGEOAppleMediaServicesMediaType:(long long)a0;
- (id)additionalParameterWithType:(long long)a0;
- (void)dealloc;
- (void)mediaResultWithIdentifiers:(id)a0 bundleIdentifiers:(id)a1 type:(long long)a2 artworkSize:(struct CGSize { double x0; double x1; })a3 screenScale:(double)a4 source:(id)a5 completion:(id /* block */)a6;
- (id)externalRequestCounterRequestSubtypeWithType:(long long)a0;

@end
