@class NSString, MAAsset, MADownloadConfig, MADownloadOptions, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface SUCoreMobileAsset : NSObject

@property (readonly, weak, nonatomic) id maDelegate;
@property (retain, nonatomic) NSString *updateUUID;
@property (retain, nonatomic) MAAsset *asset;
@property (retain, nonatomic) MADownloadOptions *downloadOptions;
@property (retain, nonatomic) MADownloadConfig *currentDownloadConfig;
@property (retain, nonatomic) MADownloadConfig *requestedDownloadConfig;
@property (retain, nonatomic) MADownloadConfig *desiredDownloadConfig;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientDelegateCallbackQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *maControlQueue;
@property (nonatomic) BOOL downloadingAsset;
@property (nonatomic) BOOL checkedDownloadState;
@property (nonatomic) BOOL assetDownloaded;
@property (nonatomic) BOOL removingAsset;
@property (nonatomic) BOOL assetRemoved;
@property (retain, nonatomic) NSString *operationName;
@property (copy, nonatomic) id /* block */ downloadCompletion;
@property (copy, nonatomic) id /* block */ alterDownloadCompletion;
@property (copy, nonatomic) id /* block */ removeCompletion;
@property (retain, nonatomic) NSObject<OS_os_transaction> *downloadAssetTransaction;
@property (retain, nonatomic) NSObject<OS_os_transaction> *alterDownloadTransaction;
@property (retain, nonatomic) NSObject<OS_os_transaction> *removeAssetTransaction;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientCompletionQueue;

+ (id)downloadConfigSummary:(id)a0;
+ (BOOL)downloadConfig:(id)a0 isEqualToConfig:(id)a1;
+ (id)downloadConfigCopy:(id)a0;
+ (id)downloadOptionsDescription:(id)a0;
+ (void)reloadDescriptor:(id)a0 allowingDifferences:(id)a1 forceReload:(BOOL)a2 completion:(id /* block */)a3;
+ (void)reloadDescriptor:(id)a0 allowingDifferences:(id)a1 forceReload:(BOOL)a2 defaultValues:(id)a3 completion:(id /* block */)a4;
+ (void)_callReloadCompletion:(id /* block */)a0 withDescriptor:(id)a1 suError:(id)a2 docError:(id)a3;
+ (void)reloadDescriptor:(id)a0 completion:(id /* block */)a1;

- (id)description;
- (void).cxx_destruct;
- (void)removeAsset:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 forAsset:(id)a1 updateUUID:(id)a2;
- (void)downloadDocumentationAssetWithPolicy:(id)a0 withUUID:(id)a1 completion:(id /* block */)a2;
- (void)alterDownloadOptions:(id)a0;
- (void)downloadSoftwareUpdateAssetWithPolicy:(id)a0 withUUID:(id)a1;
- (void)removeAsset;
- (id)initWithDelegate:(id)a0 forAsset:(id)a1 updateUUID:(id)a2 withCallbackQueue:(id)a3 withCompletionQueue:(id)a4;
- (void)downloadSoftwareUpdateAssetWithPolicy:(id)a0 withUUID:(id)a1 completion:(id /* block */)a2;
- (void)_downloadAssetWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)alterDownloadOptions:(id)a0 completion:(id /* block */)a1;
- (void)_issueAlterDownloadCompletion:(long long)a0 forReason:(id)a1;
- (void)_requestChangeConfigDownload:(id)a0;
- (void)_trackMAAnomaly:(id)a0 result:(long long)a1 description:(id)a2;
- (void)_reportAnomaly:(id)a0 issuingCompletion:(id /* block */)a1;
- (id)_updateAssetTypeName;
- (void)_cancelDownloadAndPurge;
- (void)_registerProgressAndStartDownload;
- (void)_reportDownloadProgress:(id)a0;
- (void)_reportDownloadFailed:(id)a0;
- (void)_trackMobileAssetBegin:(id)a0;
- (void)_trackMobileAssetEnd:(id)a0 withResult:(long long)a1 withError:(id)a2;
- (void)_reportDownloaded:(id)a0;
- (void)_trackMobileAssetBegin:(id)a0 withIdentifier:(id)a1;
- (void)_trackMobileAssetEnd:(id)a0 withIdentifier:(id)a1 withResult:(long long)a2 withError:(id)a3;
- (void)_reportAssetRemoved;
- (void)_reportAssetRemoveFailed:(id)a0;
- (void)_reportAnomaly:(id)a0;
- (void)downloadDocumentationAssetWithPolicy:(id)a0 withUUID:(id)a1;
- (void)downloadConfigStatus:(id /* block */)a0;

@end
