@class NSString, PHFetchResult, PHAsset, PHAssetCollection;

@interface PXMemoryInfo : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *localizedDateText;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PHAsset *primaryAsset;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) PHFetchResult *keyAssetFetchResult;

+ (id)fastMemoryInfoWithMemory:(id)a0;
+ (id)memoryInfoWithMemory:(id)a0;
+ (id)memoryInfoWithAssetCollection:(id)a0 keyAssetFetchResult:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)memoryInfoWithUpdatedKeyAssetFetchResult:(id)a0;

@end
