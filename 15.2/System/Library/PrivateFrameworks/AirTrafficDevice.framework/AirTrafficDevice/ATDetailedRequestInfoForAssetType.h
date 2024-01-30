@class NSDictionary, NSMutableDictionary;

@interface ATDetailedRequestInfoForAssetType : NSObject {
    NSMutableDictionary *_mutableContributors;
}

@property (readonly, nonatomic, getter=getTotalBytesSynced) unsigned long long totalBytesSynced;
@property (readonly, nonatomic, getter=getTotalBytesToSync) unsigned long long totalBytesToSync;
@property (readonly, nonatomic, getter=getTotalAssetsToSync) unsigned long long totalAssetsToSync;
@property (readonly, nonatomic, getter=getContributors) NSDictionary *contributors;

+ (id)serializedRequestInfoFromATDetailedRequestInfoForAssetType:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)updateBytesSynced:(unsigned long long)a0;
- (void)updateBytesToSync:(unsigned long long)a0 forItemIdentifier:(id)a1;
- (void)incrementAssetCountToSync;

@end
