@class ASDJob;

@interface SSSoftwareDownload : SSDownload

@property (readonly, nonatomic) ASDJob *job;

- (BOOL)isCancelable;
- (id)initWithPersistentIdentifier:(long long)a0;
- (long long)bytesTotal;
- (id)downloadPolicy;
- (long long)downloadSizeLimit;
- (void)setDownloadPolicy:(id)a0;
- (void)prioritizeAboveDownload:(id)a0 completionBlock:(id /* block */)a1;
- (id)assetsForType:(id)a0;
- (void)setDownloadHandler:(id)a0 completionBlock:(id /* block */)a1;
- (id)status;
- (BOOL)addAsset:(id)a0 forType:(id)a1;
- (double)percentComplete;
- (void)setMetadata:(id)a0;
- (id)metadata;
- (void)setStatus:(id)a0;
- (id)downloadPhaseIdentifier;
- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (void)_becomeManagedOnConnection:(id)a0;
- (BOOL)isEligibleForRestore:(id *)a0;
- (void)setValuesWithStoreDownloadMetadata:(id)a0;
- (id)backgroundNetworkingJobGroupName;
- (double)estimatedSecondsRemaining;
- (id)networkConstraints;
- (BOOL)removeAsset:(id)a0;
- (void)setBackgroundNetworkingJobGroupName:(id)a0;
- (void)setNetworkConstraints:(id)a0;
- (BOOL)isBackgroundNetworkingUserInitiated;
- (void)setBackgroundNetworkingUserInitiated:(BOOL)a0;
- (void)pause;
- (void)resume;
- (long long)bytesDownloaded;
- (id)initWithJob:(id)a0;
- (void)restart;
- (id)failureError;

@end
