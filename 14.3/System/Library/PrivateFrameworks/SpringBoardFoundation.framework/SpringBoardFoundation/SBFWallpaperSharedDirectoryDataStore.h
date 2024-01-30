@interface SBFWallpaperSharedDirectoryDataStore : SBFWallpaperDirectoryDataStore

+ (id)defaultDirectoryURL;

- (id)initWithDirectoryURL:(id)a0;
- (id)directoryCreationAttributes;
- (void)didWriteFileToURL:(id)a0;

@end
