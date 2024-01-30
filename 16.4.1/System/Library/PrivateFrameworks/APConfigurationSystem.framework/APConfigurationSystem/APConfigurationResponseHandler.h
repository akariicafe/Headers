@class NSString, NSFileManager;

@interface APConfigurationResponseHandler : NSObject

@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) NSString *pathToTempDir;
@property (readonly, nonatomic) NSString *pathToConfig;
@property (readonly, nonatomic) NSString *pathToTraverse;

- (id)init;
- (void).cxx_destruct;
- (id)_tempConfigPath;
- (BOOL)_copyCurrentConfigToTraverse;
- (BOOL)_createTempDirectory;
- (BOOL)_removeTempDirectory;
- (BOOL)_replaceConfigWithNewHierarchy;
- (BOOL)_writeCompressedFileWithData:(id)a0 atPath:(id)a1;
- (long long)processResponseWithData:(id)a0;

@end
