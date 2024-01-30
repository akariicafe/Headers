@class NSString, NSIndexSet;
@protocol PXDisplayAssetFetchResult, PXDisplayAsset;

@interface _PXDisplayAssetIndexSubfetchResult : NSObject <PXDisplayAssetFetchResult> {
    id<PXDisplayAssetFetchResult> _originalFetchResult;
    NSIndexSet *_indexSet;
    long long *_indexMap;
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
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (id)initWithFetchResult:(id)a0 indexSet:(id)a1;

@end
