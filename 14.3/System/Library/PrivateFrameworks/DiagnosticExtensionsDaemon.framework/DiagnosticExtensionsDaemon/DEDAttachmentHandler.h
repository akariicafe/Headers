@class NSObject;
@protocol OS_os_log;

@interface DEDAttachmentHandler : NSObject

@property (retain) NSObject<OS_os_log> *log;
@property BOOL compressOnAttach;

- (id)init;
- (void).cxx_destruct;
- (id)collectedGroupsForSession:(id)a0 matchingExtensions:(id)a1;
- (id)dedDirectory;
- (id)_processAttachments:(id)a0 forSession:(id)a1 extension:(id)a2 rootDir:(id)a3;
- (id)directoryForBugSession:(id)a0 extension:(id)a1 rootDirectory:(id)a2 createIfNeeded:(BOOL)a3;
- (id)directoryForBugSession:(id)a0;
- (id)_createEmptyMessageFileForDE:(id)a0 extensionName:(id)a1 forSession:(id)a2 device:(id)a3 withRootDir:(id)a4;
- (id)processAttachments:(id)a0 forSession:(id)a1 extension:(id)a2;
- (void)removeDEFiles:(id)a0 inSession:(id)a1;
- (id)createEmptyMessageFileForDE:(id)a0 extensionName:(id)a1 forSession:(id)a2 device:(id)a3;
- (void)removeDirectoryForBugSession:(id)a0;
- (unsigned long long)directorySizeForBugSession:(id)a0;
- (id)identifierForAdoptingFile:(id)a0;
- (id)directoryForBugSession:(id)a0 rootDirectory:(id)a1 createIfNeeded:(BOOL)a2;
- (id)directoryForBugSession:(id)a0 extension:(id)a1 rootDirectory:(id)a2;

@end
