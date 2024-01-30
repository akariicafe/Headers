@class NSDictionary, NSMutableDictionary;

@interface ATDetailedRequestInfoForAssetType : NSObject {
    NSMutableDictionary *_mutableContributors;
}

@property (nonatomic, getter=getTotalBytesSynced) unsigned long long totalBytesSynced;
@property (nonatomic, getter=getTotalBytesToSync) unsigned long long totalBytesToSync;
@property (nonatomic, getter=getTotalAssetsToSync) unsigned long long totalAssetsToSync;
@property (retain, nonatomic, getter=getContributors) NSDictionary *contributors;

+ (id)serializedRequestInfoFromATDetailedRequestInfoForAssetType:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)updateBytesSynced:(unsigned long long)a0;
- (void)updateBytesToSync:(unsigned long long)a0 forItemIdentifier:(id)a1;
- (void)incrementAssetCountToSync;

@end
