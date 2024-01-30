@interface BCSPathProvider : NSObject

+ (id)cachesPath;
+ (id)tempPath;
+ (id)_createBundleBasedDirectoryIfNecessary:(id)a0;

@end
