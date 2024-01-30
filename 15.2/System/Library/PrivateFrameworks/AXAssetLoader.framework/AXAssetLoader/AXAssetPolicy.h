@class NSString, NSNumber;

@interface AXAssetPolicy : NSObject

@property (readonly, nonatomic) NSString *assetType;
@property (nonatomic) BOOL daemonShouldDownloadInBackgroundIfNeeded;
@property (retain, nonatomic) NSNumber *minSupportedFormatVersion;
@property (retain, nonatomic) NSNumber *maxSupportedFormatVersion;
@property (nonatomic) double downloadResourceTimeout;
@property (nonatomic) double updateCatalogTimeout;
@property (nonatomic) double refreshRetryInterval;
@property (nonatomic) double downloadRetryInterval;
@property (readonly, nonatomic) BOOL shouldCopyLocally;
@property (readonly, nonatomic) NSString *launchActivityIdentifier;
@property (nonatomic) double updateInterval;
@property (readonly, nonatomic) NSString *assetTypeSuffix;

+ (id)policy;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)assetsToDownloadFromRefreshedAssets:(id)a0;
- (unsigned long long)hash;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(BOOL)a1;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;
- (BOOL)isAssetSupportedBasedOnMinMaxFormatVersion:(id)a0;
- (BOOL)isAssetContentVersion:(id)a0 greatherThanInstalledAssets:(id)a1;
- (id)newAssetQuery;

@end
