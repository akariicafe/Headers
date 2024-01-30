@class NSString, NSArray;
@protocol PXDisplayAsset;

@interface _PXArrayDisplayAssetFetchResult : NSObject <PXDisplayAssetFetchResult> {
    NSArray *_assets;
}

@property (readonly, nonatomic) id<PXDisplayAsset> firstObject;
@property (readonly, nonatomic) id<PXDisplayAsset> lastObject;
@property (readonly, nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsAtIndexes:(id)a0;
- (unsigned long long)countOfAssetsWithMediaType:(long long)a0;
- (id)thumbnailAssetAtIndex:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)a0;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (id)initWithAssets:(id)a0;

@end
