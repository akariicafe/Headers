@class NSObject;
@protocol OS_os_log;

@interface DEDAttachmentHandler : NSObject

@property (retain) NSObject<OS_os_log> *log;
@property BOOL compressOnAttach;

- (void).cxx_destruct;
- (id)init;
- (id)dedDirectory;
- (id)collectedGroupsWithSessionIdentifier:(id)a0 matchingExtensions:(id)a1;
- (id)_processAttachments:(id)a0 withSessionIdentifier:(id)a1 extension:(id)a2 rootDir:(id)a3;
- (id)directoryForBugSessionWithIdentifier:(id)a0 extension:(id)a1 rootDirectory:(id)a2 createIfNeeded:(BOOL)a3;
- (id)directoryForBugSessionIdentifier:(id)a0;
- (id)_createEmptyMessageFileForDE:(id)a0 extensionName:(id)a1 withSessionIdentifier:(id)a2 device:(id)a3 withRootDir:(id)a4;
- (id)processAttachments:(id)a0 withSessionIdentifier:(id)a1 extension:(id)a2;
- (void)removeDEFiles:(id)a0 withSessionIdentifier:(id)a1;
- (id)createEmptyMessageFileForDE:(id)a0 extensionName:(id)a1 withSessionIdentifier:(id)a2 device:(id)a3;
- (void)removeDirectoryForBugSessionIdentifier:(id)a0;
- (unsigned long long)directorySizeForBugSessionIdentifier:(id)a0;
- (id)identifierForAdoptingFile:(id)a0;
- (id)directoryForBugSessionWithIdentifier:(id)a0 rootDirectory:(id)a1 createIfNeeded:(BOOL)a2;
- (id)directoryForBugSessionWithIdentifier:(id)a0 extension:(id)a1 rootDirectory:(id)a2;

@end
