@interface PPPaths : NSObject

+ (id)logSubdirectory:(id)a0;
+ (id)subdirectory:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)subdirectory:(id)a0;
+ (id)logSubdirectory:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)defaultAssetPathForNamespaceId:(unsigned int)a0 factorName:(id)a1;
+ (id)filename:(id)a0 subdirectory:(id)a1;
+ (id)topDirectoryCreateIfNeeded:(BOOL)a0;
+ (id)logDirectory;
+ (id)filename:(id)a0 logSubdirectory:(id)a1;
+ (id)logDirectoryCreateIfNeeded:(BOOL)a0;
+ (id)topDirectory;
+ (id)filename:(id)a0 logSubdirectory:(id)a1 createIfNeeded:(BOOL)a2;
+ (id)filename:(id)a0 subdirectory:(id)a1 createIfNeeded:(BOOL)a2;
+ (id)resourcesDirectory;

@end
