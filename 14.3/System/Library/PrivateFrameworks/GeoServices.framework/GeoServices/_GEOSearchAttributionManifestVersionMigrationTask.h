@class NSURLSessionDataTask, GEOActiveTileGroup, NSString, NSURL, NSURLSession, GEOSearchAttributionManifest, NSObject, NSProgress, GEOActiveTileGroupMigrationTaskOptions, GEOReportedProgress, GEOSearchAttributionManifestVersionMigrator;
@protocol OS_dispatch_queue, GEORequestCounterTicket, NSObject;

@interface _GEOSearchAttributionManifestVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {
    GEOSearchAttributionManifestVersionMigrator *_migrator;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _running;
    NSURL *_newSearchAttributionManifestURL;
    GEOActiveTileGroup *_oldTileGroup;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOReportedProgress *_progress;
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_downloadTask;
    id<GEORequestCounterTicket> _requestCounterTicket;
    GEOSearchAttributionManifest *_attributionManifest;
}

@property (readonly, nonatomic) long long estimatedWeight;
@property (retain, nonatomic) id<NSObject> transaction;
@property (retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options;
@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0 callbackQueue:(id)a1;
- (void)_completeWithError:(id)a0;
- (void)dealloc;
- (void)populateTileGroup:(id)a0;
- (id)initWithMigrator:(id)a0 newSearchAttributionManifestURL:(id)a1 oldTileGroup:(id)a2;
- (void)_handleResponse:(id)a0 withData:(id)a1 error:(id)a2;
- (void)removeOldData:(id)a0;

@end
