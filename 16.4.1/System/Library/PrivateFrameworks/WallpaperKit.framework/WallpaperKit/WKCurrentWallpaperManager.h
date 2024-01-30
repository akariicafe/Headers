@class NSURL, NSFileManager, NSNotificationCenter, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface WKCurrentWallpaperManager : NSObject

@property (class, readonly, nonatomic) WKCurrentWallpaperManager *sharedCurrentWallpaperManager;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_wallpaperChangeQueue;
@property (retain, nonatomic) NSFileManager *_fileManager;
@property (retain, nonatomic) NSNotificationCenter *_notificationCenter;
@property (retain, nonatomic) NSUserDefaults *_userDefaults;
@property (readonly, copy, nonatomic) NSURL *wallpaperCollectionsDirectoryURL;

- (void).cxx_destruct;
- (id)initWithFileManager:(id)a0 notificationCenter:(id)a1 userDefaults:(id)a2 wallpaperPhotoLibrary:(id)a3;
- (void)setWallpaperRepresenting:(id)a0 forWallpaperLocation:(id)a1 completion:(id /* block */)a2;
- (void)setWallpaperRepresenting:(id)a0 forWallpaperLocation:(id)a1 desiredCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 wallpaperOptions:(id)a3 completion:(id /* block */)a4;

@end
