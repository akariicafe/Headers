@class NSMetadataQuery, NSMutableArray;
@protocol CloudSynchDelegate;

@interface ProjectListModel : NSObject {
    NSMutableArray *m_projects;
    NSMutableArray *m_iTunesSharedProjects;
    NSMutableArray *m_jailedProjects;
    NSMutableArray *m_unscannedMedia;
}

@property (retain, nonatomic) NSMetadataQuery *ubiquitousQuery;
@property (retain, nonatomic) NSMutableArray *maybeInTheCloud;
@property (retain, nonatomic) NSMutableArray *cloudDownloadsToRestart;
@property id<CloudSynchDelegate> cloudSynchDelegate;

+ (id)sharedInstance;
+ (id)unscannedMediaFromPaths:(id)a0;

- (id)projects;
- (void)dealloc;
- (void)didStart:(id)a0;
- (void)queryTheCloud;
- (id)projectPathsInDirectory:(id)a0 otherPaths:(id *)a1;
- (id)projectPathsInDirectory:(id)a0;
- (void)removeQueryObservers;
- (id)projectPathsInPrivateDocumentsDirectory;
- (void)deleteProject:(id)a0;
- (void)appendProject:(id)a0;
- (id)iTunesSharedProjects;
- (id)jailedProjects;
- (id)projectPathsInImportExportDirectoryAndOtherPaths:(id *)a0;
- (void)appendJailedProject:(id)a0;
- (void)appendiTunesSharedProject:(id)a0;
- (void)unloadProjectAtIndex:(unsigned long long)a0;
- (BOOL)moveSafeSaveProject:(id)a0;
- (void)startCloudQuery;
- (void)addProject:(id)a0;
- (id)projectWithPath:(id)a0;
- (void)removeProject:(id)a0;
- (void)stopCloudQuery;
- (void)skeletalProjectDidDownload:(id)a0;
- (void)projectPathDidChange:(id)a0;
- (void)addQueryObservers;
- (void)gathering:(id)a0;
- (void)finishGathering:(id)a0;
- (void)didUpdate:(id)a0;
- (void)queueTrashOrphanedRenderedMovies;
- (id)pendingCloudProjectWithPath:(id)a0;
- (void)trashOrphanedRenderedMovies;
- (void)noteApplicationWillTerminate:(id)a0;
- (int)pendingCloudProjectsCount;
- (id)unscannedMedia;
- (void)createProjectPlaceholders;
- (void)loadProjectAtIndex:(unsigned long long)a0;
- (void)unloadAllExceptProject:(id)a0;
- (void)unloadProject:(id)a0;
- (void)undeleteProject:(id)a0;
- (void)deleteUneditedProject:(id)a0;
- (void)duplicateProject:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveJailedProjectToPrivateProject:(id)a0;
- (id)placeHolderForProject:(id)a0;
- (void)verifyCloudDownloads;

@end
