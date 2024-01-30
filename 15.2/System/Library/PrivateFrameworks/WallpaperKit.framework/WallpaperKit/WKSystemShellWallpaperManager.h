@class NSObject;
@protocol OS_dispatch_queue;

@interface WKSystemShellWallpaperManager : NSObject

@property (class, readonly, nonatomic) WKSystemShellWallpaperManager *sharedManager;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_setWallpaperQueue;

+ (long long)_currentWallpaperMode;

- (void).cxx_destruct;
- (id)init;
- (void)setHomeScreenWallpaperRepresenting:(id)a0 completion:(id /* block */)a1;
- (void)setLockScreenWallpaperRepresenting:(id)a0 mirrorToHomeScreen:(BOOL)a1 completion:(id /* block */)a2;

@end
