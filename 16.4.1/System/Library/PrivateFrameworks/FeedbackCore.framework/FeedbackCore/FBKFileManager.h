@class NSURL;

@interface FBKFileManager : NSObject

@property (class, nonatomic, copy) NSURL *cachedTemporaryDirectory;

+ (id)applicationSupportDirectory;
+ (id)containerURL;
+ (id)libraryDirectory;
+ (id)draftsDirectory;
+ (void)deleteAllDraftDirectories;
+ (id)draftDirectoryForFilerForm:(id)a0;
+ (id)draftDirectoryForFilerForm:(id)a0 isTemporary:(BOOL)a1;
+ (id)draftDirectoryForFilerType:(long long)a0;
+ (id)draftDirectoryForFilerType:(long long)a0 isTemporary:(BOOL)a1;
+ (id)getUniqueDestinationURLForURL:(id)a0 alwaysIndex:(BOOL)a1;
+ (id)getUniqueDestinationURLForURL:(id)a0 alwaysIndex:(BOOL)a1 forSourceURL:(id)a2;
+ (BOOL)humansCanReadFile:(id)a0;
+ (BOOL)isDirectory:(id)a0;
+ (id)temporaryDirectoryWithPathComponents:(id)a0;
+ (id)temporaryDraftDirectoryForFilerForm:(id)a0;

@end
