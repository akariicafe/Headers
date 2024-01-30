@class NSString, NSMutableDictionary;

@interface SBFFileCacheMemoryStore : NSObject <SBFFileCacheStore> {
    NSMutableDictionary *_fileWrappers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)fileCache:(id)a0 loadFileWrapperNamed:(id)a1;
- (void)fileCache:(id)a0 removeFileWrapperNamed:(id)a1;
- (void)fileCache:(id)a0 storeFileWrapper:(id)a1;
- (void)removeAllFileWrappersForFileCache:(id)a0;

@end
