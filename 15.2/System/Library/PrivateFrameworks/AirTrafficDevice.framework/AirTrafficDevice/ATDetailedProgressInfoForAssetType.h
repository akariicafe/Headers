@class NSString, NSMutableSet;

@interface ATDetailedProgressInfoForAssetType : NSObject {
    NSMutableSet *failedAssetIds;
}

@property (nonatomic, getter=getTotalBytesToSync) unsigned long long totalBytesToSync;
@property (nonatomic, getter=getTotalBytesSynced) unsigned long long totalBytesSynced;
@property (nonatomic, getter=getTotalAssetsToSync) unsigned long long totalAssetsToSync;
@property (nonatomic, getter=getTotalAssetsSynced) unsigned long long totalAssetsSynced;
@property (nonatomic, getter=getFailedAssetsCount) unsigned long long failedAssetCount;
@property (nonatomic, getter=getSyncProgress) double progress;
@property (retain, nonatomic, getter=getAssetType) NSString *atAssetType;

+ (id)serializedProgressInfoFromATDetailedProgressInfoForAssetType:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)_computeProgress;
- (id)initWithAssetType:(id)a0 assetCountToSync:(unsigned long long)a1 byteCountToSync:(unsigned long long)a2;
- (id)initWithAssetType:(id)a0 assetCountToSync:(unsigned long long)a1 byteCountToSync:(unsigned long long)a2 assetCountSynced:(unsigned long long)a3 byteCountSyned:(unsigned long long)a4;
- (void)updateAsset:(id)a0 syncedWithSuccess:(BOOL)a1 bytesDownloaded:(unsigned long long)a2;
- (void)updateBytesToDownload:(unsigned long long)a0;
- (void)updateBytesDownloaded:(unsigned long long)a0;
- (void)updateAssetsToDownload:(unsigned long long)a0;

@end
