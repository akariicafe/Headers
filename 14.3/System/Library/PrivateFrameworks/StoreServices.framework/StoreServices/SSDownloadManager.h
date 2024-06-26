@class NSMutableSet, NSArray, SSDownloadManagerOptions, SSXPCConnection, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface SSDownloadManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_activeDownloads;
    BOOL _activeDownloadsChanged;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    SSXPCConnection *_connection;
    NSArray *_downloads;
    BOOL _downloadsChanged;
    BOOL _isUsingNetwork;
    SSXPCConnection *_observerConnection;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    SSDownloadManagerOptions *_options;
    NSMutableSet *_removedDownloads;
    int _launchNotificationToken;
}

@property (readonly) SSDownloadManagerOptions *managerOptions;
@property (readonly) NSArray *activeDownloads;
@property (readonly) NSArray *downloads;
@property (readonly, getter=isUsingNetwork) BOOL usingNetwork;

+ (id)IPodDownloadKinds;
+ (void)_sendGlobalHandler:(id)a0;
+ (id)EBookDownloadKinds;
+ (id)softwareDownloadKinds;
+ (void)retryAllRestoreDownloads;
+ (void)reconnectToLSApplicationWorkspace;
+ (void)removePersistenceIdentifier:(id)a0;
+ (void)setDownloadHandler:(id)a0;
+ (id)EBookDownloadManager;
+ (id)IPodDownloadManager;
+ (id)softwareDownloadManager;
+ (id)allStoreDownloadKinds;
+ (id)ITunesDownloadKinds;
+ (void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)a0;
+ (void)_triggerDownloads;

- (BOOL)_supportsSoftwareKind;
- (void)resumeDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)_handleDownloadsChanged:(id)a0;
- (void)_reloadIsUsingNetworkWithDownloadKinds:(id)a0;
- (void)_loadDownloadKindsUsingNetwork;
- (void)insertDownloads:(id)a0 afterDownload:(id)a1 completionBlock:(id /* block */)a2;
- (void)_sendDownloadsChanged:(id)a0;
- (id)_copyDownloadsForMessage:(long long)a0 downloadIDs:(id)a1;
- (void)addDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)_finishDownloads:(id)a0;
- (void)moveDownload:(id)a0 beforeDownload:(id)a1 completionBlock:(id /* block */)a2;
- (void)cancelDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)_resetAllDownloads;
- (void)_handleDownloadKindsUsingNetworkChanged:(id)a0;
- (void)_handleDownloadsRemoved:(id)a0;
- (void)moveDownload:(id)a0 afterDownload:(id)a1 completionBlock:(id /* block */)a2;
- (void)_insertDownloads:(id)a0 before:(id)a1 after:(id)a2 completionBlock:(id /* block */)a3;
- (void)insertDownloads:(id)a0 beforeDownload:(id)a1 completionBlock:(id /* block */)a2;
- (void)cancelAllDownloadsWithCompletionBlock:(id /* block */)a0;
- (void)_pauseDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)setDownloads:(id)a0 forKinds:(id)a1 completionBlock:(id /* block */)a2;
- (void)_connectAsObserver;
- (void)_handleReply:(id)a0 forDownloads:(id)a1 message:(id)a2 isRetry:(BOOL)a3 block:(id /* block */)a4;
- (id)initWithDownloadKinds:(id)a0;
- (void)finishDownloads:(id)a0;
- (void)reloadFromServer;
- (void)_connectAfterDaemonLaunch;
- (void)_sendMessage:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_sendMessageToObservers:(SEL)a0;
- (void)_sendObserverConnection;
- (void)_handleMessage:(id)a0 fromServerConnection:(id)a1;
- (id)_initSSDownloadManagerWithOptions:(id)a0;
- (void)setDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)getDownloadsUsingBlock:(id /* block */)a0;
- (id)_copyDownloads;
- (id)_copyDownloadKindsUsingNetwork;
- (void)restartDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)_handleDownloadStatesChanged:(id)a0;
- (void)pauseDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)_moveDownload:(id)a0 before:(id)a1 after:(id)a2 completionBlock:(id /* block */)a3;
- (id)initWithManagerOptions:(id)a0;
- (void)_willFinishDownloads:(id)a0;
- (BOOL)canCancelDownload:(id)a0;
- (void)_pauseDownloads:(id)a0 forced:(BOOL)a1 completionBlock:(id /* block */)a2;
- (id)_XPCConnection;
- (id)_newOptionsDictionary;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;

@end
