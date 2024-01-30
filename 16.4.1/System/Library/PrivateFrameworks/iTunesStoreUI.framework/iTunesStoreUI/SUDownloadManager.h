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
- (id)initWithDownloadManager:(id)a0;
- (void)_reloadDownloadManager;
- (BOOL)deleteDownload:(id)a0;
- (void)_finishPreflightWithCompletionBlock:(id /* block */)a0;
- (void)_removeObject:(id)a0 fromArray:(id *)a1;
- (id)downloadForDownloadIdentifier:(long long)a0;
- (id)initWithDownloadManager:(id)a0 clientInterface:(id)a1;
- (void)preflightWithCompletionBlock:(id /* block */)a0;
- (void)reloadDownloadManager;

@end
