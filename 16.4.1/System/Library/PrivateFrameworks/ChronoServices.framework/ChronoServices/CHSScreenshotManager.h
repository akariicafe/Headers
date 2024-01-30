@class NSURL, NSFileManager;

@interface CHSScreenshotManager : NSObject {
    NSURL *_baseURL;
    NSFileManager *_threadSafe_fileManager;
}

@property (class, readonly, nonatomic) CHSScreenshotManager *sharedManager;

- (void)deleteCachedScreenshotsMatchingWidget:(id)a0;
- (void)deleteAllCachedScreenshots;
- (id)URLForWidget:(id)a0 metrics:(id)a1 attributes:(id)a2 createIntermediateDirectories:(BOOL)a3;
- (void)deleteAllCachedScreenshotsExcludingWidgets:(id)a0;
- (id)snapshotContextForWidget:(id)a0 metrics:(id)a1 attributes:(id)a2;
- (void).cxx_destruct;
- (id)initWithDirectory:(id)a0 fileManager:(id)a1;

@end
