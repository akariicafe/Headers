@class NSMutableArray, NSString, FBServiceClientAuthenticator, NSObject, BSServiceConnectionListener;
@protocol OS_dispatch_queue, SBWWallpaperServerDelegate;

@interface SBWWallpaperServer : NSObject <BSServiceConnectionListenerDelegate, SBSUIWallpaperClientToServerInterface> {
    FBServiceClientAuthenticator *_clientAuthenticator;
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnectionListener *_connectionListener;
    NSMutableArray *_connections;
}

@property (weak, nonatomic) id<SBWWallpaperServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_queue_removeConnection:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)getWallpaperLegibilitySettingsForVariant:(id)a0;
- (void)_queue_addConnection:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)invalidate;
- (BOOL)setWallpaperImage:(id)a0 adjustedImage:(id)a1 thumbnailData:(id)a2 imageHashData:(id)a3 wallpaperOptions:(id)a4 forLocations:(id)a5 currentWallpaperMode:(id)a6;
- (void)setProceduralWallpaperIdentifier:(id)a0 options:(id)a1 locations:(id)a2;
- (void)removeWallpaperVideo;
- (BOOL)setWallpaperWithVideo:(id)a0 sandboxToken:(id)a1 cropRect:(id)a2 wallpaperMode:(id)a3;
- (void)restoreDefaultWallpaper;
- (BOOL)setWallpaperColor:(id)a0 darkColor:(id)a1 forLocations:(id)a2;
- (BOOL)setWallpaperGradient:(id)a0 forLocations:(id)a1;
- (id)getWallpaperOptionsForVariant:(id)a0;

@end
