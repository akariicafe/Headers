@class NSURL, NSString;

@interface SBFFileCacheFileStore : NSObject <SBFFileCacheStore>

@property (readonly, copy, nonatomic) NSURL *directoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)fileCache:(id)a0 loadFileWrapperNamed:(id)a1;
- (void)fileCache:(id)a0 storeFileWrapper:(id)a1;
- (void)fileCache:(id)a0 removeFileWrapperNamed:(id)a1;
- (void)removeAllFileWrappersForFileCache:(id)a0;
- (id)fileURLForFileNamed:(id)a0;
- (id)initWithDirectoryURL:(id)a0;

@end
