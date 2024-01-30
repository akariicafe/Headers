@class NSString;

@interface NMSSyncProgressInfo : NSObject

@property (retain, nonatomic) NSString *assetType;
@property (nonatomic) unsigned long long syncState;
@property (nonatomic) unsigned long long syncWaitingSubstate;
@property (nonatomic) float estimatedSyncProgress;
@property (nonatomic) long long numberOfAssetItems;
@property (nonatomic) long long numberOfAssetItemsSynced;
@property (nonatomic) long long numberOfAssetItemsNeedingDownload;
@property (nonatomic) unsigned long long aggregateAssetItemBytesAdded;

+ (id)_stringFromSyncState:(unsigned long long)a0;
+ (id)_stringFromWaitingSubstate:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)description;

@end
