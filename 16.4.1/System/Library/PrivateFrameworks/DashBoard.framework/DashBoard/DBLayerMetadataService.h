@class NSXPCListener, NSString, NSXPCConnection;
@protocol DBLayerMetadataServiceDelegate;

@interface DBLayerMetadataService : NSObject <CRLayerPropertyService, NSXPCListenerDelegate, BSInvalidatable>

@property (retain, nonatomic) NSXPCListener *layerMetadataServiceListener;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<DBLayerMetadataServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)sendLayerProperties:(id)a0;

@end
