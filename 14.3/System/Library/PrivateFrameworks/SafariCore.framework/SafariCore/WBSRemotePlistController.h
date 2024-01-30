@class NSString, WBSConfigurationDownloader, NSURL, NSTimer, NSObject;
@protocol WBSRemotePlistControllerDelegate, OS_dispatch_queue, WBSRemotePlistSnapshot;

@interface WBSRemotePlistController : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_diskWriteQueue;
    NSURL *_builtInListURL;
    NSURL *_downloadsDirectoryURL;
    NSString *_resourceName;
    NSString *_resourceVersion;
    NSString *_updateDateDefaultsKey;
    Class _snapshotClass;
    Class _snapshotTransformerClass;
    double _updateInterval;
    id<WBSRemotePlistSnapshot> _currentSnapshot;
    WBSConfigurationDownloader *_configurationDownloader;
    NSTimer *_updateTimer;
}

@property (weak, nonatomic) id<WBSRemotePlistControllerDelegate> delegate;
@property (nonatomic) BOOL shouldAttemptToUpdateConfiguration;
@property (nonatomic) BOOL shouldAttemptToDownloadConfiguration;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForTermination;
- (id)initWithBuiltInListURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5 snapshotClass:(Class)a6 snapshotTransformerClass:(Class)a7;
- (void)accessSnapshotLoadingItIfNeeded:(id /* block */)a0;
- (void)accessCurrentSnapshot:(id /* block */)a0;
- (void)_resetUpdateTimer;
- (void)_updateWhitelistIfNecessary;
- (id)_downloadedListResourceName;
- (void)_didLoadSnapshot:(id)a0;
- (id)_urlOfDownloadedList;
- (void)_writeConfigurationData:(id)a0;
- (void)_loadDownloadedSnapshotIfNeeded;
- (void)_loadBuiltInSnapshotIfNeeded;
- (id)_lastConfigurationUpdateAttemptDate;
- (BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)a0;
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;

@end
