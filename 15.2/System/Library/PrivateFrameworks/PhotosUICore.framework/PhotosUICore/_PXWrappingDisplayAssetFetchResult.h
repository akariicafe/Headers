@class NSString;
@protocol PXDisplayAssetFetchResult, PXDisplayAsset;

@interface _PXWrappingDisplayAssetFetchResult : NSObject <PXDisplayAssetFetchResult> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    id<PXDisplayAssetFetchResult> _displayFetchResult;
}

@property (readonly, nonatomic) id<PXDisplayAsset> firstObject;
@property (readonly, nonatomic) id<PXDisplayAsset> lastObject;
@property (readonly, nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectAtIndex:(unsigned long long)a0;
- (BOOL)containsObject:(id)a0;
- (id)objectsAtIndexes:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)thumbnailAssetAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)a0;
- (void).cxx_destruct;
- (unsigned long long)countOfAssetsWithMediaType:(long long)a0;
- (id)initWithFetchResult:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
