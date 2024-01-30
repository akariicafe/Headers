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

- (id)init;
- (void)invalidate;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)_handleResponseForURL:(id)a0 data:(id)a1 response:(id)a2 error:(id)a3;
- (id)_logStringFromCachedResponse:(id)a0 data:(id)a1;
- (id)_logStringFromRequest:(id)a0;
- (id)_logStringFromResponse:(id)a0 data:(id)a1;
- (void)_scheduleDownload:(id)a0 forURL:(id)a1;
- (void)_schedulePendingDownloads;
- (id)cachedDataForURL:(id)a0;
- (void)downloadFromUrl:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadWithRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
