@class PXStoryResourcesDataSource, NSString, PXStoryReusableDisplayAsset;
@protocol PXDisplayAsset;

@interface _PXStoryConcreteScorerDisplayAssetsFetchResult : NSObject <PXStoryDisplayAssetFetchResult> {
    long long _capacity;
    long long *_resourceIndexes;
    PXStoryReusableDisplayAsset *_asset;
}

@property (nonatomic) long long count;
@property (retain, nonatomic) PXStoryResourcesDataSource *resourcesDataSource;
@property (readonly, nonatomic) const long long *resourceIndexes;
@property (readonly, nonatomic) id<PXDisplayAsset> firstObject;
@property (readonly, nonatomic) id<PXDisplayAsset> lastObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectAtIndex:(unsigned long long)a0;
- (BOOL)containsObject:(id)a0;
- (id)objectsAtIndexes:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)removeAllResources;
- (id)thumbnailAssetAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)a0;
- (void).cxx_destruct;
- (unsigned long long)countOfAssetsWithMediaType:(long long)a0;
- (void)dealloc;
- (id)storyDisplayAssetAtIndex:(long long)a0;
- (void)addResourceWithIndex:(long long)a0;

@end
