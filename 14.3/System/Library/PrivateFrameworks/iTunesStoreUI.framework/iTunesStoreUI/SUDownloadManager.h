@class NSArray, NSMutableDictionary, SSDownloadManager, NSObject, SUClientInterface;
@protocol OS_dispatch_queue;

@interface SUDownloadManager : NSObject {
    NSArray *_cachedDownloads;
    SUClientInterface *_clientInterface;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_downloadsByID;
}

@property (readonly, nonatomic) SSDownloadManager *downloadManager;
@property (readonly, nonatomic) NSArray *downloads;

- (void)dealloc;
- (void)_reloadDownloadManager;
- (void)reloadDownloadManager;
- (id)initWithDownloadManager:(id)a0 clientInterface:(id)a1;
- (void)preflightWithCompletionBlock:(id /* block */)a0;
- (void)_removeObject:(id)a0 fromArray:(id *)a1;
- (void)_finishPreflightWithCompletionBlock:(id /* block */)a0;
- (id)initWithDownloadManager:(id)a0;
- (BOOL)deleteDownload:(id)a0;
- (id)downloadForDownloadIdentifier:(long long)a0;

@end
