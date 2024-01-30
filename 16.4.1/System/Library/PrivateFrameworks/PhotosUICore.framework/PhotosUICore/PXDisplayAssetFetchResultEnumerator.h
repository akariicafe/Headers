@protocol PXDisplayAssetFetchResult;

@interface PXDisplayAssetFetchResultEnumerator : PXEnumerator {
    id<PXDisplayAssetFetchResult> _fetchResult;
    long long _currentIndex;
}

- (id)nextObject;
- (id)firstObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithDisplayAssetFetchResult:(id)a0;

@end
