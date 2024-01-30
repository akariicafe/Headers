@class NSURL;

@interface HFWallpaperLegacyFileManager : NSObject

@property (retain, nonatomic) NSURL *wallpaperFolderURL;

- (void).cxx_destruct;
- (id)init;
- (id)filenameForType:(long long)a0 variant:(long long)a1;
- (void)migrateCache:(id /* block */)a0;
- (id)clearAllWallpapers;

@end
