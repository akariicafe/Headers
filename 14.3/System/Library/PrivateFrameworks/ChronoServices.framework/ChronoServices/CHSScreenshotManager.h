@class NSString, NSFileManager, NSURL;

@interface CHSScreenshotManager : NSObject

@property (class, readonly, nonatomic) CHSScreenshotManager *sharedManager;

@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSString *fileUTI;
@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) NSFileManager *fileManager;

- (void).cxx_destruct;
- (id)initWithDirectory:(id)a0 fileUTI:(id)a1 fileExtension:(id)a2;
- (id)initWithDirectory:(id)a0 fileType:(id)a1 fileManager:(id)a2;
- (id)initWithDirectory:(id)a0 fileUTI:(id)a1 fileExtension:(id)a2 fileManager:(id)a3;
- (id)indexingDirectoryNameForWidget:(id)a0;
- (id)URLForWidget:(id)a0 metrics:(id)a1 inColorScheme:(long long)a2 createIntermediateDirectories:(BOOL)a3;
- (id)finalFileNameForWidget:(id)a0 metrics:(id)a1 inColorScheme:(long long)a2;
- (id)initWithDirectory:(id)a0 fileType:(id)a1;
- (void)deleteAllCachedScreenshots;
- (id)URLIfScreenshotExistsForWidget:(id)a0 metrics:(id)a1 inColorScheme:(long long)a2;
- (id)contentIdentifierForWidget:(id)a0 metrics:(id)a1 inColorScheme:(long long)a2;

@end
