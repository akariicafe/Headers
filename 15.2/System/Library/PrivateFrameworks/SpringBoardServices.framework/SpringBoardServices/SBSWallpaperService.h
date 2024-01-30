@class SBSWallpaperClient, NSObject;
@protocol OS_dispatch_queue;

@interface SBSWallpaperService : NSObject {
    SBSWallpaperClient *_client;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _wasInvalidated;
}

- (BOOL)setWallpaperGradient:(id)a0 forVariants:(unsigned long long)a1;
- (BOOL)setWallpaperColor:(id)a0 darkColor:(id)a1 forVariants:(unsigned long long)a2;
- (BOOL)setWallpaperColorName:(id)a0 forVariants:(unsigned long long)a1;
- (void)fetchThumbnailForVariant:(long long)a0 completionHandler:(id /* block */)a1;
- (void)restoreDefaultWallpaperWithCompletion:(id /* block */)a0;
- (void)fetchOriginalImageForVariant:(long long)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)fetchContentCutoutBoundsForVariant:(long long)a0 orientation:(long long)a1 completionHandler:(id /* block */)a2;
- (void)invalidate;
- (void)acquireActiveWallpaperSceneAssertionWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)fetchOriginalVideoURLForVariant:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)setWallpaperWithVideoWithWallpaperMode:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 wallpaperMode:(long long)a2;

@end
