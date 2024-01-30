@class NSString, NSURL;

@interface CKDDirectoryContext : NSObject

@property (readonly, nonatomic) NSString *dataSeparationHash;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSURL *containerDirectory;
@property (readonly, nonatomic) NSURL *containerCloudKitDirectory;
@property (readonly, nonatomic) NSURL *daemonCachesDirectory;
@property (readonly, nonatomic) NSURL *daemonDatabaseDirectory;
@property (readonly, nonatomic) NSURL *temporaryDirectory;
@property (readonly, nonatomic) NSURL *mmcsWorkingDirectory;
@property (readonly, nonatomic) NSURL *assetDbDirectory;
@property (readonly, nonatomic) NSURL *fileDownloadDirectory;
@property (readonly, nonatomic) NSURL *recordCacheDirectory;
@property (readonly, nonatomic) NSURL *frameworkCachesDirectory;
@property (readonly, nonatomic) NSURL *packageStagingDirectory;

+ (id)daemonDatabaseDirectoryName;

- (id)initWithContainer:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)applicationCachesDirectoryForDataContainerDirectory:(id)a0 usingHomeCachesDirectory:(BOOL)a1;
- (id)description;
- (id)initWithTestRootDirectory:(id)a0;
- (void).cxx_destruct;

@end
