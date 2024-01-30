@class NSArray, NSSet, NSString, SSDownloadManager;

@interface SSDownloadQueue : NSObject <SSDownloadManagerObserverPrivate> {
    SSDownloadManager *_downloadManager;
    struct __CFSet { } *_observers;
}

@property (readonly, nonatomic) NSArray *placeholderDownloads;
@property (readonly, nonatomic) NSArray *preorders;
@property (readonly) NSSet *downloadKinds;
@property (readonly) SSDownloadManager *downloadManager;
@property (readonly, nonatomic) NSArray *downloads;
@property (nonatomic) BOOL shouldAutomaticallyFinishDownloads;
@property (readonly, getter=isUsingNetwork) BOOL usingNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaDownloadKinds;
+ (id)softwareApplicationDownloadKinds;

- (BOOL)canCancelDownload:(id)a0;
- (void)getDownloadsUsingBlock:(id /* block */)a0;
- (void)_handleDownloadsRemoved:(id)a0;
- (BOOL)reloadFromServer;
- (id)initWithDownloadKinds:(id)a0;
- (void)addObserver:(id)a0;
- (void)downloadManagerNetworkUsageDidChange:(id)a0;
- (void)downloadManager:(id)a0 downloadStatesDidChange:(id)a1;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)downloadManagerDownloadsDidChange:(id)a0;
- (BOOL)cancelDownload:(id)a0;
- (id)initWithDownloadManagerOptions:(id)a0;
- (void)_handleDownloadsDidChange:(id)a0;
- (id)_initWithDownloadManagerOptions:(id)a0;
- (void)_messageObserversWithFunction:(void /* function */ *)a0 context:(void *)a1;
- (void)_sendDownloadStatusChangedAtIndex:(long long)a0;
- (void)_sendQueueChangedWithRemovals:(id)a0;
- (void)_sendQueueNetworkUsageChanged;
- (void)_sendQueuePreOrdersChanged;
- (BOOL)addDownload:(id)a0;
- (void)addPlaceholderDownloads:(id)a0;
- (id)downloadForItemIdentifier:(unsigned long long)a0;
- (void)downloadManager:(id)a0 downloadsDidChange:(id)a1;
- (void)removePlaceholderDownload:(id)a0;
- (BOOL)startPreOrderDownload:(id)a0;

@end
