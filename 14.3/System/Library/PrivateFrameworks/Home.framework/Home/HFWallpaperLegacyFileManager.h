@class NSURL;

@interface HFWallpaperLegacyFileManager : NSObject

@property (retain, nonatomic) NSURL *wallpaperFolderURL;

- (id)init;
- (void).cxx_destruct;
- (id)filenameForType:(long long)a0 variant:(long long)a1;
- (void)migrateCache:(id /* block */)a0;
- (id)clearAllWallpapers;

@end
