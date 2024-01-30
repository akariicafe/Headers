@interface SBFWallpaperSharedDirectoryDataStore : SBFWallpaperDirectoryDataStore

+ (id)defaultDirectoryURL;

- (id)directoryCreationAttributes;
- (void)didWriteFileToURL:(id)a0;
- (id)initWithDirectoryURL:(id)a0;

@end
