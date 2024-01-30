@class FCAssetStore;

@interface FCAASAFileManager : NSObject

@property (readonly, nonatomic) FCAssetStore *fileStore;

- (id)init;
- (void).cxx_destruct;
- (void)updateFilesWithManifest:(id)a0;
- (id)initWithDirectoryFileURL:(id)a0;

@end
