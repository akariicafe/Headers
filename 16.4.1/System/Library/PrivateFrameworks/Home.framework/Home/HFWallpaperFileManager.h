@class NSURL;

@interface HFWallpaperFileManager : NSObject

@property (retain, nonatomic) NSURL *wallpaperFolderURL;

- (id)init;
- (void).cxx_destruct;
- (id)fileNameForCustomBlurWallpaper:(id)a0;
- (void)saveOriginalImage:(id)a0 forWallpaper:(id)a1;
- (id)_originalImageForWallpaper:(id)a0 withFileName:(id)a1;
- (void)_saveOriginalImage:(id)a0 forWallpaper:(id)a1 withFileName:(id)a2;
- (id)fileNameForDefaultBlurWallpaper:(id)a0 userInterfaceStyle:(long long)a1;
- (id)filenameForWallpaper:(id)a0;
- (BOOL)originalImageExistsForWallpaper:(id)a0;
- (id)originalImageForWallpaper:(id)a0;
- (void)pruneUnusedOriginalWallpaperImages:(id)a0;

@end
