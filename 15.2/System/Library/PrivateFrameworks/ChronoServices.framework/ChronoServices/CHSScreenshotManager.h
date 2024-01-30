@class NSURL, NSFileManager;

@interface CHSScreenshotManager : NSObject

@property (class, readonly, nonatomic) CHSScreenshotManager *sharedManager;

@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSFileManager *fileManager;

- (id)URLForWidget:(id)a0 metrics:(id)a1 attributes:(id)a2 createIntermediateDirectories:(BOOL)a3;
- (id)initWithDirectory:(id)a0 fileManager:(id)a1;
- (id)snapshotContextForWidget:(id)a0 metrics:(id)a1 attributes:(id)a2;
- (void).cxx_destruct;
- (void)deleteAllCachedScreenshots;

@end
