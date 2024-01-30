@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AXAssetsService : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}

- (void)_destroyXPCConnection;
- (void)updateAssetForPolicy:(id)a0;
- (id)xpcConnection;
- (void)refreshAssetCatalogForPolicy:(id)a0 withOverrideTimeout:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_serviceProxy;
- (void)dealloc;

@end
