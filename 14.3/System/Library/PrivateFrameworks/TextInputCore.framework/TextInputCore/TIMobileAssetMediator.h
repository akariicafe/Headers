@class NSString, NSMutableSet, NSObject, TIMobileAssetSyncState;
@protocol OS_dispatch_queue;

@interface TIMobileAssetMediator : NSObject <TIMobileAssetMediator>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSMutableSet *queuedAssetMatchSet;
@property (nonatomic) BOOL isWaitingForReachability;
@property (readonly, nonatomic) TIMobileAssetSyncState *syncState;
@property (readonly, nonatomic) struct __SCNetworkReachability { } *reachabilityRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForKey:(id)a0 matchingAnyDictionaryIn:(id)a1 acceptUnspecifiedValue:(BOOL)a2 acceptUnspecifiedAttribute:(BOOL)a3 lenientMatch:(BOOL)a4;
+ (id)assetsByRemovingOldVersionsFromAssets:(id)a0;
+ (id)fetchAssetInformationMatchingAny:(id)a0 localOnly:(BOOL)a1 compatibleOnly:(BOOL)a2;
+ (id)queryAssetsWithPredicate:(id)a0 localOnly:(BOOL)a1 error:(id *)a2;
+ (id)predicateForTIAsset:(id)a0;
+ (void)recordDownloadStartedForAssets:(id)a0;
+ (oneway void)downloadAsset:(id)a0 continuation:(id /* block */)a1;
+ (id)knownAssetIdentifiers;
+ (id)compatibilityPredicate;
+ (id)predicateForKey:(id)a0 matchingString:(id)a1 acceptUnspecifiedValue:(BOOL)a2;
+ (id)predicateForKey:(id)a0 matchingAnyStringIn:(id)a1 acceptUnspecifiedValue:(BOOL)a2;
+ (id)predicateForAssetMatch:(id)a0 compatibleVersionOnly:(BOOL)a1;
+ (id)uniqueIdentifierForAsset:(id)a0;
+ (id)uniqueIdentifierWithVersionForAsset:(id)a0;
+ (id)assetDownloadsInProgress;
+ (void)saveAssetDownloadsInProgress;
+ (void)recordDownloadEndedForAsset:(id)a0;
+ (BOOL)isDownloadOverdueForAsset:(id)a0;
+ (id)fetchAssetInformationForDownloadsInProgress;
+ (id /* block */)downloadProgressHandlerForAsset:(id)a0;
+ (id)downloadOptionsForAsset:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)fetchInstalledAssetInformation;
- (id)fetchLatestAssetsMatchingAny:(id)a0;
- (id)fetchLatestInstalledAssetsMatchingAny:(id)a0;
- (BOOL)tryToPurgeAsset:(id)a0;
- (void)downloadUninstalledAssetsMatching:(id)a0 continuation:(id /* block */)a1;
- (oneway void)fetchUninstalledAssetInformationMatchingAny:(id)a0 continuation:(id /* block */)a1;
- (oneway void)downloadAssets:(id)a0 continuation:(id /* block */)a1;
- (void)tryDownloadUninstalledAssetsMatchingQueuedAssetMatchSet;
- (BOOL)shouldDownloadUninstalledAssets;
- (void)downloadUninstalledAssetsMatchingQueuedAssetMatchSet;
- (void)retryDownloadsWhenReachable;
- (void)syncToRemoteMetadataIfNecessary;
- (void)registerReachabilityCallback;
- (void)reachabilityChanged;

@end
