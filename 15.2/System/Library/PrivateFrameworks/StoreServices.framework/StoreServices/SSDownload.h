@class SSDownloadPolicy, NSString, NSArray, NSMutableDictionary, NSDictionary, SSDownloadMetadata, SSDownloadStatus, NSNumber, SSXPCConnection;

@interface SSDownload : SSEntity <SSXPCCoding> {
    NSMutableDictionary *_localAssets;
    SSDownloadMetadata *_metadata;
    NSNumber *_prioritizeAboveDownload;
    SSDownloadStatus *_status;
}

@property (readonly) NSDictionary *_localAssets;
@property (readonly, getter=_XPCConnection) SSXPCConnection *_XPCConnection;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic) id downloadIdentifier;
@property (retain, nonatomic) NSArray *assets;
@property (copy, nonatomic) SSDownloadMetadata *metadata;
@property (retain, nonatomic) SSDownloadStatus *status;
@property (readonly) long long persistentIdentifier;
@property (readonly, getter=isCancelable) BOOL cancelable;
@property (copy) SSDownloadPolicy *downloadPolicy;
@property (readonly) long long downloadSizeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_setValuesMessage;

- (id)initWithPersistentIdentifier:(long long)a0;
- (long long)bytesTotal;
- (void)prioritizeAboveDownload:(id)a0 completionBlock:(id /* block */)a1;
- (id)assetsForType:(id)a0;
- (void)setDownloadHandler:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)addAsset:(id)a0 forType:(id)a1;
- (double)percentComplete;
- (id)downloadPhaseIdentifier;
- (id)copyXPCEncoding;
- (id)_errorWithData:(id)a0;
- (BOOL)isEligibleForRestore:(id *)a0;
- (id)_errorWithXPCReply:(id)a0;
- (void)_applyPhase:(id)a0 toStatus:(id)a1;
- (void)_resetLocalIVars;
- (void)setValuesWithStoreDownloadMetadata:(id)a0;
- (id)_newAssetWithURL:(id)a0 assetType:(id)a1;
- (id)_initWithLocalPropertyValues:(id)a0;
- (id)backgroundNetworkingJobGroupName;
- (double)estimatedSecondsRemaining;
- (id)networkConstraints;
- (BOOL)removeAsset:(id)a0;
- (void)setBackgroundNetworkingJobGroupName:(id)a0;
- (void)setNetworkConstraints:(id)a0;
- (void)_addCachedExternalValues:(id)a0;
- (void)_addCachedPropertyValues:(id)a0;
- (id)initWithDownloadMetadata:(id)a0;
- (void)handleWithDownloadHandler:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)isBackgroundNetworkingUserInitiated;
- (void)setBackgroundNetworkingUserInitiated:(BOOL)a0;
- (void)_resetStatus;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (long long)bytesDownloaded;
- (void)restart;
- (id)failureError;

@end
