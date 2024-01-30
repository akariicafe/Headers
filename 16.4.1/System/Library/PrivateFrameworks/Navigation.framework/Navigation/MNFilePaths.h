@class NSString;

@interface MNFilePaths : NSObject

@property (class, readonly) NSString *navdCacheDirectoryPath;
@property (class, readonly) NSString *navTracesDirectoryPath;
@property (class, readonly) NSString *navTempDirectoryPath;
@property (class, readonly) NSString *navTraceExtension;
@property (class, readonly) NSString *routeHandleExtension;

+ (BOOL)createFolderIfNotPresent:(id)a0 error:(id *)a1;
+ (id)_cachesDirectoryPath;
+ (id)_homeDirectoryPath;

@end
