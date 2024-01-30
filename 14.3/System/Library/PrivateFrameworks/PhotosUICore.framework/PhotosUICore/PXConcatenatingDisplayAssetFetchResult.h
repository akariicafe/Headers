@class NSString, NSArray;
@protocol PXDisplayAsset;

@interface PXConcatenatingDisplayAssetFetchResult : NSObject <PXDisplayAssetFetchResult> {
    NSArray *_fetchResults;
    long long *_startIndexes;
    long long _subFetchResultsCount;
    long long _count;
}

@property (readonly, nonatomic) id<PXDisplayAsset> firstObject;
@property (readonly, nonatomic) id<PXDisplayAsset> lastObject;
@property (readonly, nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)a0;
- (id)objectsAtIndexes:(id)a0;
- (void).cxx_destruct;
- (id)initWithFetchResults:(id)a0;
- (id)_subFetchResultForIndex:(long long)a0 localIndex:(long long *)a1;
- (void)dealloc;
- (id)thumbnailAssetAtIndex:(unsigned long long)a0;
- (unsigned long long)countOfAssetsWithMediaType:(long long)a0;
- (BOOL)containsObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;

@end
