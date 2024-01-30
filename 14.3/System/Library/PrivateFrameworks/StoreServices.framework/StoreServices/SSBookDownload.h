@class NSString;
@protocol SSBookDownloadQueue, SSBookDownloadStatus;

@interface SSBookDownload : SSDownload {
    id<SSBookDownloadQueue> _downloadQueue;
}

@property (retain, nonatomic) NSString *downloadPhaseIdentifierOverride;
@property (readonly, nonatomic) id<SSBookDownloadStatus> downloadStatus;
@property (readonly, nonatomic) NSString *downloadID;

- (void)restart;
- (id)valueForProperty:(id)a0;
- (void)setMetadata:(id)a0;
- (long long)persistentIdentifier;
- (long long)bytesTotal;
- (void)setDownloadHandler:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)assetsForType:(id)a0;
- (void)setStatus:(id)a0;
- (id)downloadPhaseIdentifier;
- (id)metadata;
- (BOOL)addAsset:(id)a0 forType:(id)a1;
- (long long)bytesDownloaded;
- (double)percentComplete;
- (void)pause;
- (long long)downloadSizeLimit;
- (id)downloadPolicy;
- (void)setDownloadPolicy:(id)a0;
- (void)prioritizeAboveDownload:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithDownloadStatus:(id)a0;
- (void)resume;
- (id)status;
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
- (BOOL)isCancelable;

@end
