@class PHMemory, NSString, PHFetchResult, PHAsset, PHAssetCollection;

@interface PXMemoryInfo : NSObject <PXSelectionAssetContainer, NSCopying>

@property (readonly, nonatomic) BOOL px_isEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PHMemory *memory;
@property (readonly, nonatomic) NSString *localizedDateText;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PHAsset *primaryAsset;
@property (readonly, nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) PHFetchResult *keyAssetFetchResult;

+ (id)fastMemoryInfoWithMemory:(id)a0;
+ (id)memoryInfoWithMemory:(id)a0;
+ (id)memoryInfoWithAssetCollection:(id)a0 keyAssetFetchResult:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)px_fetchContainedAssets;
- (id)memoryInfoWithUpdatedKeyAssetFetchResult:(id)a0;

@end
