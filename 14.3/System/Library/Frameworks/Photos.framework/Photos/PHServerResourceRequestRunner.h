@class NSString, NSProgress, PLProgressFollower;
@protocol PLResourceDataStore;

@interface PHServerResourceRequestRunner : NSObject {
    NSProgress *_progress;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PLProgressFollower *_dataStoreFollower;
    id<PLResourceDataStore> _dataStore;
    long long _state;
}

@property (readonly, nonatomic) NSString *taskIdentifier;

- (void).cxx_destruct;
- (void)_safeReply:(id /* block */)a0;
- (id)initWithTaskIdentifier:(id)a0;
- (void)_cancelWithReply:(id /* block */)a0;
- (id)_assetAndRelatedObjectsFromAssetObjectIDURL:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
- (void)_handleProgress:(id)a0;
- (id)makeResourceAvailableWithRequest:(id)a0 library:(id)a1 clientBundleID:(id)a2 reply:(id /* block */)a3;
- (id)applyCorrectionsWithRequest:(id)a0 errorCodes:(id)a1 library:(id)a2 reply:(id /* block */)a3;
- (BOOL)_resourceQualifiesForCacheMetricsCollection:(id)a0 isLivePhoto:(BOOL)a1;
- (id)chooseVideoWithRequest:(id)a0 library:(id)a1 clientBundleID:(id)a2 reply:(id /* block */)a3;
- (void)_replyToVideoRequestWithURL:(id)a0 mutableInfo:(id)a1 internalInfo:(id)a2 error:(id)a3 pathForAdjustmentFileIfNeeded:(id)a4 reply:(id /* block */)a5;
- (void)setState:(long long)a0;
- (long long)state;

@end
