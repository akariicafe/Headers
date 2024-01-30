@class BRCDirectoryItem, NSString, NSURL, NSError, NSSet, BRCAccountSession, NSMutableSet, NSMutableArray, BRCXPCClient, BRCTreeEnumerator;

@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCOperationSubclass> {
    BRCAccountSession *_session;
    BRCXPCClient *_client;
    NSURL *_url;
    BRCDirectoryItem *_directoryItem;
    BRCTreeEnumerator *_treeEnumerator;
    NSMutableSet *_trackedDocIDs;
    NSSet *_docIDsToCancel;
    NSMutableArray *_callbacks;
    NSError *_lastDownloadError;
    BOOL _isStillEnumeratingDirectory;
    BOOL _isFinished;
    BOOL _isMonitoringReachability;
    NSMutableSet *_appLibrariesMonitored;
}

@property (nonatomic) BOOL isRecursive;
@property (nonatomic) BOOL isForBackup;
@property (nonatomic) BOOL wantsCurrentVersion;
@property (readonly, nonatomic) NSSet *trackedDocIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)networkReachabilityChanged:(BOOL)a0;
- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (void)downloadTrackedForItemWithDocID:(id)a0 didFinishWithError:(id)a1;
- (id)initWithDirectoryItem:(id)a0;
- (void)addCompletionCallback:(id /* block */)a0;
- (id)initWithName:(id)a0 session:(id)a1 readingOptions:(unsigned long long)a2;
- (void)_detachAllTrackedDocID:(id)a0 error:(id)a1;
- (void)_finishAfterWaitingForDocumentsWithID:(id)a0 error:(id)a1;
- (void)_provideDocument:(id)a0;
- (void)_provideDirectoryRecursively:(id)a0;
- (void)_provideURL;
- (void)_provideItem;
- (id)initWithURL:(id)a0 readingOptions:(unsigned long long)a1 client:(id)a2 session:(id)a3;

@end
