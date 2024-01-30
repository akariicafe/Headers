@class ASDJob;

@interface SSSoftwareDownload : SSDownload

@property (readonly, nonatomic) ASDJob *job;

- (BOOL)isCancelable;
- (void)setMetadata:(id)a0;
- (id)valueForProperty:(id)a0;
- (double)percentComplete;
- (id)failureError;
- (void)pause;
- (id)metadata;
- (void)setStatus:(id)a0;
- (void)restart;
- (long long)bytesDownloaded;
- (id)status;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithPersistentIdentifier:(long long)a0;
- (BOOL)addAsset:(id)a0 forType:(id)a1;
- (id)assetsForType:(id)a0;
- (long long)bytesTotal;
- (id)downloadPhaseIdentifier;
- (void)setDownloadHandler:(id)a0 completionBlock:(id /* block */)a1;
- (id)downloadPolicy;
- (long long)downloadSizeLimit;
- (void)prioritizeAboveDownload:(id)a0 completionBlock:(id /* block */)a1;
- (void)setDownloadPolicy:(id)a0;
- (BOOL)removeAsset:(id)a0;
- (id)networkConstraints;
- (void)setNetworkConstraints:(id)a0;
- (void)_becomeManagedOnConnection:(id)a0;
- (id)backgroundNetworkingJobGroupName;
- (double)estimatedSecondsRemaining;
- (id)initWithJob:(id)a0;
- (BOOL)isBackgroundNetworkingUserInitiated;
- (BOOL)isEligibleForRestore:(id *)a0;
- (void)setBackgroundNetworkingJobGroupName:(id)a0;
- (void)setBackgroundNetworkingUserInitiated:(BOOL)a0;
- (void)setValuesWithStoreDownloadMetadata:(id)a0;

@end
