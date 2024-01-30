@class NSXPCListener, NSMutableSet, NSString;

@interface MSPAppleMediaServicesServer : NSObject <NSXPCListenerDelegate, GEOAppleMediaServicesProtocol>

@property (retain, nonatomic) NSMutableSet *connections;
@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)additionalParameterWithType:(long long)a0;
- (void)dealloc;
- (void)mediaResultWithIdentifiers:(id)a0 bundleIdentifiers:(id)a1 type:(long long)a2 artworkSize:(struct CGSize { double x0; double x1; })a3 screenScale:(double)a4 completion:(id /* block */)a5;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)cleanConnections;
- (long long)AMSMediaTaskTypeFromGEOAppleMediaServicesMediaType:(long long)a0;

@end
