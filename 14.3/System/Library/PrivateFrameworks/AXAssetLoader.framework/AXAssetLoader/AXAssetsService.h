@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AXAssetsService : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}

- (id)init;
- (id)xpcConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_serviceProxy;
- (void)_destroyXPCConnection;
- (void)refreshAssetCatalogForPolicy:(id)a0 withOverrideTimeout:(id)a1;
- (void)updateAssetForPolicy:(id)a0;

@end
