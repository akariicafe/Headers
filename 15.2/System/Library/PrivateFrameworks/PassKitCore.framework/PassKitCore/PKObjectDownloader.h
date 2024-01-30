@class NSURLSession, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface PKObjectDownloader : NSObject {
    NSMutableDictionary *_downloads;
    NSMutableOrderedSet *_pendingURLs;
    NSMutableSet *_downloadingURLs;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSURLSession *session;
@property long long concurrentRequests;

+ (id)sharedImageAssetDownloader;

- (id)initWithSession:(id)a0;
- (void)downloadWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)_logStringFromCachedResponse:(id)a0 data:(id)a1;
- (id)cachedDataForURL:(id)a0;
- (void)_scheduleDownload:(id)a0 forURL:(id)a1;
- (void)_handleResponseForURL:(id)a0 data:(id)a1 response:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)_schedulePendingDownloads;
- (void)invalidate;
- (void)downloadFromUrl:(id)a0 completionHandler:(id /* block */)a1;
- (id)_logStringFromResponse:(id)a0 data:(id)a1;
- (id)_logStringFromRequest:(id)a0;

@end
