@class NSArray;

@interface CNLibraryFolderDiscovery : NSObject

@property (class, readonly) NSArray *localImageFolders;

+ (id)discoverFoldersWithPathComponents:(id)a0;

@end
