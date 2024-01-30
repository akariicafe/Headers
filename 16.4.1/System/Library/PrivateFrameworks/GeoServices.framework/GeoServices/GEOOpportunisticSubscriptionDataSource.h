@class NSString, NSArray, GEOResourceManifestManager, GEORequestCounter, NSObject, GEOTileDB, GEOMapDataSubscriptionDownloader, GEOMapDataSubscriptionManager;
@protocol OS_dispatch_queue, OS_dispatch_group, GEOOpportunisticDataSourceDelegate;

@interface GEOOpportunisticSubscriptionDataSource : NSObject <GEOMapDataSubscriptionDownloaderDelegate, GEOOpportunisticDataSource> {
    NSString *_sessionIdentifier;
    GEOTileDB *_diskCache;
    GEOMapDataSubscriptionManager *_subscriptionManager;
    GEOResourceManifestManager *_manifestManager;
    GEORequestCounter *_requestCounter;
    unsigned char _requestCounterPolicy;
    id /* block */ _tileRequesterCreationBlock;
    unsigned long long _numberOfTilesOriginallyConsidered;
    unsigned long long _numberOfTilesAttempted;
    unsigned long long _successfulTiles;
    unsigned long long _failedTiles;
    NSArray *_subscriptionsToLoad;
    unsigned long long _currentSubscriptionIndex;
    GEOMapDataSubscriptionDownloader *_currentDownloader;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_group> *_preparationGroup;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _started;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _finished;
    BOOL _paused;
    BOOL _canceled;
}

@property (class, readonly, nonatomic) unsigned long long policy;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<GEOOpportunisticDataSourceDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) unsigned long long bytesDownloaded;

- (void)_finish;
- (void)pause;
- (void)cancel;
- (void).cxx_destruct;
- (void)resume;
- (void)_startNextSubscriptionIfPossible;
- (id)initWithSessionIdentifier:(id)a0 diskCache:(id)a1 subscriptionManager:(id)a2 manifestManager:(id)a3 requestCounter:(id)a4 requestCounterPolicy:(unsigned char)a5 tileRequesterCreationBlock:(id /* block */)a6;
- (void)subscriptionDownloader:(id)a0 didFinishWithError:(id)a1;

@end
