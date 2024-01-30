@class NSURL;

@interface HFWallpaperFileManager : NSObject

@property (retain, nonatomic) NSURL *wallpaperFolderURL;

- (id)init;
- (void).cxx_destruct;
- (id)filenameForWallpaper:(id)a0;
- (BOOL)originalImageExistsForWallpaper:(id)a0;
- (id)originalImageForWallpaper:(id)a0;
- (void)saveOriginalImage:(id)a0 forWallpaper:(id)a1;
- (void)pruneUnusedOriginalWallpaperImages:(id)a0;

@end
