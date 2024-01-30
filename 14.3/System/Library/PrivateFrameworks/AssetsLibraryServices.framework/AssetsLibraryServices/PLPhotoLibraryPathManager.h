@class NSString, NSURL, PLPhotoLibraryPathManagerCore, PLFileSystemCapabilities;

@interface PLPhotoLibraryPathManager : NSObject <PLPhotoLibraryPathManager> {
    PLPhotoLibraryPathManagerCore *_internalPathManager;
    NSString *_singletonPhotoLibraryPath;
}

@property (readonly, copy) NSURL *libraryURL;
@property (readonly, copy) NSString *baseDirectory;
@property (readonly, nonatomic) PLFileSystemCapabilities *capabilities;
@property (readonly, copy) NSString *assetUUIDRecoveryMappingPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)throwMultiLibraryAPIMisuseForLibraryPath:(id)a0;
+ (BOOL)isSystemLibraryURLDefined;
+ (void)enableMultiLibraryMode;
+ (id)systemLibraryPathManager;
+ (BOOL)isSystemPhotoLibraryURL:(id)a0;
+ (void)throwMultiLibraryAPIMisuse;
+ (id)systemLibraryURL;
+ (BOOL)isMultiLibraryModeEnabled;
+ (void)assertSingleLibraryMode;
+ (id)systemLibraryBaseDirectory;
+ (BOOL)setSystemLibraryURL:(id)a0 options:(unsigned short)a1 error:(id *)a2;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithBaseDirectory:(id)a0;
- (id)initWithLibraryURL:(id)a0 bundleScope:(unsigned char)a1;
- (void)setOrCompareLibraryURL:(id)a0;
- (void)enumerateBundleScopesWithBlock:(id /* block */)a0;
- (id)timeMachineExclusionPathForPathType:(unsigned char)a0;
- (BOOL)createTimeMachineExclusionPathsWithError:(id *)a0;
- (id)sqliteErrorIndicatorFilePath;
- (id)rebuidHistoryFilePath;
- (id)initWithLibraryURL:(id)a0;

@end
