@protocol PXDisplayAssetFetchResult;

@interface PXDisplayAssetFetchResultEnumerator : PXEnumerator {
    id<PXDisplayAssetFetchResult> _fetchResult;
    long long _currentIndex;
}

- (id)nextObject;
- (id)firstObject;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (void)reset;
- (id)initWithDisplayAssetFetchResult:(id)a0;

@end
